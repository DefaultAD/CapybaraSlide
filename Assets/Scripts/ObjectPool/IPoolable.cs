// DecompilerFi decompiler from Assembly-CSharp.dll class: ObjectPool.IPoolable
namespace ObjectPool
{
	public interface IPoolable
	{
		void OnInstantiated();

		void OnDestroyed();

		void OnPopulated();
	}
}
