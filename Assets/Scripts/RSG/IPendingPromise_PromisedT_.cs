// DecompilerFi decompiler from Assembly-CSharp.dll class: RSG.IPendingPromise<PromisedT>
namespace RSG
{
	public interface IPendingPromise<PromisedT> : IRejectable
	{
		void Resolve(PromisedT value);
	}
	public interface IPendingPromise : IRejectable
	{
		void Resolve();
	}
}
