// DecompilerFi decompiler from Assembly-CSharp.dll class: ObjectPool.Pool
using System.Collections.Generic;
using UnityEngine;

namespace ObjectPool
{
	public class Pool
	{
		private Dictionary<Object, Stack<Object>> pools;

		private Dictionary<Object, Object> instantiatedObjects;

		public Pool()
		{
			pools = new Dictionary<Object, Stack<Object>>();
			instantiatedObjects = new Dictionary<Object, Object>();
		}

		private bool TryCallOnPopulated(Object obj)
		{
			if (obj is GameObject)
			{
				GameObject gameObject = obj as GameObject;
				IPoolable component = gameObject.GetComponent<IPoolable>();
				if (component != null)
				{
					component.OnPopulated();
					return true;
				}
			}
			else if (obj is IPoolable)
			{
				IPoolable poolable = obj as IPoolable;
				poolable.OnPopulated();
				return true;
			}
			return false;
		}

		private bool TryCallOnInstantiated(Object obj)
		{
			if (obj is GameObject)
			{
				GameObject gameObject = obj as GameObject;
				IPoolable component = gameObject.GetComponent<IPoolable>();
				if (component != null)
				{
					component.OnInstantiated();
					return true;
				}
			}
			else if (obj is IPoolable)
			{
				IPoolable poolable = obj as IPoolable;
				poolable.OnInstantiated();
				return true;
			}
			return false;
		}

		private bool TryCallOnDestroyed(Object obj)
		{
			if (obj is GameObject)
			{
				GameObject gameObject = obj as GameObject;
				IPoolable component = gameObject.GetComponent<IPoolable>();
				if (component != null)
				{
					component.OnDestroyed();
					return true;
				}
			}
			else if (obj is IPoolable)
			{
				IPoolable poolable = obj as IPoolable;
				poolable.OnDestroyed();
				return true;
			}
			return false;
		}

		public T Instantiate<T>(Object obj, bool shouldCheckCallbacks = true) where T : Object
		{
			if (obj == null)
			{
				UnityEngine.Debug.LogError("Tried to instantiate null via pool");
				return (T)null;
			}
			Object @object = null;
			if (pools.TryGetValue(obj, out Stack<Object> value))
			{
				while (value.Count > 0)
				{
					@object = value.Pop();
					if (@object != null)
					{
						break;
					}
				}
			}
			if (@object == null)
			{
				@object = (Object.Instantiate(obj) as T);
				if (shouldCheckCallbacks)
				{
					TryCallOnPopulated(@object);
				}
			}
			if (shouldCheckCallbacks)
			{
				TryCallOnInstantiated(@object);
			}
			instantiatedObjects.Add(@object, obj);
			return @object as T;
		}

		public T Instantiate<T>(Object obj, Transform parent, bool shouldCheckCallbacks = true) where T : Object
		{
			T val = Instantiate<T>(obj, shouldCheckCallbacks);
			if (val is GameObject)
			{
				GameObject gameObject = val as GameObject;
				gameObject.transform.SetParent(parent);
			}
			else if (val is Component)
			{
				Component component = val as Component;
				component.transform.SetParent(parent);
			}
			return val;
		}

		public T Instantiate<T>(Object obj, Vector3 position, Quaternion rotation, bool shouldCheckCallbacks = true) where T : Object
		{
			T val = Instantiate<T>(obj, shouldCheckCallbacks);
			Transform transform = null;
			if (val is GameObject)
			{
				GameObject gameObject = val as GameObject;
				transform = gameObject.transform;
			}
			else if (val is Component)
			{
				Component component = val as Component;
				transform = component.transform;
			}
			if (transform != null)
			{
				transform.position = position;
				transform.rotation = rotation;
			}
			return val;
		}

		public T Instantiate<T>(Object obj, Vector3 position, Quaternion rotation, Transform parent, bool shouldCheckCallbacks = true) where T : Object
		{
			T val = Instantiate<T>(obj, parent, shouldCheckCallbacks);
			Transform transform = null;
			if (val is GameObject)
			{
				GameObject gameObject = val as GameObject;
				transform = gameObject.transform;
			}
			else if (val is Component)
			{
				Component component = val as Component;
				transform = component.transform;
			}
			if (transform != null)
			{
				transform.position = position;
				transform.rotation = rotation;
			}
			return val;
		}

		public void Destroy(Object obj, bool shouldCheckCallbacks = true)
		{
			if (obj == null)
			{
				UnityEngine.Debug.LogError("Tried to destroy null via pool");
				return;
			}
			if (shouldCheckCallbacks)
			{
				TryCallOnDestroyed(obj);
			}
			if (instantiatedObjects.TryGetValue(obj, out Object value))
			{
				if (pools.TryGetValue(value, out Stack<Object> value2))
				{
					value2.Push(obj);
					instantiatedObjects.Remove(obj);
				}
				else
				{
					UnityEngine.Debug.LogError("Tried to destroy object but no pool was found! Are you sure object was pooled?");
				}
			}
		}

		public void PopulatePool<T>(T obj, int count, bool shouldCheckCallbacks = true) where T : Object
		{
			if ((Object)obj == (Object)null)
			{
				UnityEngine.Debug.LogError("Tried to populate pool with null object!");
				return;
			}
			pools.TryGetValue(obj, out Stack<Object> value);
			if (value == null)
			{
				value = new Stack<Object>();
				pools.Add(obj, value);
			}
			for (int i = 0; i < count; i++)
			{
				T val = Object.Instantiate(obj);
				if (shouldCheckCallbacks)
				{
					TryCallOnPopulated(val);
				}
				value.Push(val);
			}
		}

		public void PopulatePool<T>(T obj, int count, Transform parent, bool shouldCheckCallbacks = true) where T : Object
		{
			if ((Object)obj == (Object)null)
			{
				UnityEngine.Debug.LogError("Tried to populate pool with null object!");
				return;
			}
			pools.TryGetValue(obj, out Stack<Object> value);
			if (value == null)
			{
				value = new Stack<Object>();
				pools.Add(obj, value);
			}
			for (int i = 0; i < count; i++)
			{
				T val = Object.Instantiate(obj, parent);
				if (shouldCheckCallbacks)
				{
					TryCallOnPopulated(val);
				}
				value.Push(val);
			}
		}

		public void ClearPool(Object obj, bool destroyContents = true)
		{
			if (obj == null || !pools.TryGetValue(obj, out Stack<Object> value))
			{
				return;
			}
			if (destroyContents)
			{
				while (value.Count > 0)
				{
					Object @object = value.Pop();
					if (@object != null)
					{
						if (@object is Component)
						{
							Component component = @object as Component;
							UnityEngine.Object.Destroy(component.gameObject);
						}
						else
						{
							UnityEngine.Object.Destroy(@object);
						}
					}
				}
			}
			pools.Remove(obj);
		}

		public void ClearAllPools(bool destroyContents = true)
		{
			Object[] array = new Object[pools.Keys.Count];
			pools.Keys.CopyTo(array, 0);
			Object[] array2 = array;
			foreach (Object obj in array2)
			{
				ClearPool(obj, destroyContents);
			}
		}

		public void DestroyInstantiatedObjects()
		{
			Object[] array = new Object[instantiatedObjects.Keys.Count];
			instantiatedObjects.Keys.CopyTo(array, 0);
			Object[] array2 = array;
			foreach (Object @object in array2)
			{
				if (!(@object == null))
				{
					Destroy(@object);
				}
			}
		}

		public T[] GetInstantiatedObjectsOfType<T>() where T : Object
		{
			List<T> list = new List<T>();
			foreach (Object key in instantiatedObjects.Keys)
			{
				if (key is T)
				{
					list.Add(instantiatedObjects[key] as T);
				}
			}
			return list.ToArray();
		}
	}
}
