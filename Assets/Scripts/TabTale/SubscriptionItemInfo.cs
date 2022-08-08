// DecompilerFi decompiler from Assembly-CSharp.dll class: TabTale.SubscriptionItemInfo
using System;

namespace TabTale
{
	public interface SubscriptionItemInfo
	{
		string getProductId();

		DateTime getPurchaseDate();

		SubscriptionItemInfoResult isSubscribed();

		SubscriptionItemInfoResult isExpired();

		SubscriptionItemInfoResult isCancelled();

		SubscriptionItemInfoResult isFreeTrial();

		SubscriptionItemInfoResult isAutoRenewing();

		TimeSpan getRemainingTime();

		SubscriptionItemInfoResult isIntroductoryPricePeriod();

		TimeSpan getIntroductoryPricePeriod();

		string getIntroductoryPrice();

		long getIntroductoryPricePeriodCycles();

		DateTime getExpireDate();

		DateTime getCancelDate();

		TimeSpan getFreeTrialPeriod();

		TimeSpan getSubscriptionPeriod();

		string getFreeTrialPeriodString();

		string getSkuDetails();

		string getSubscriptionInfoJsonString();
	}
}
