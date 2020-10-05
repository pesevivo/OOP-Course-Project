#include "Appliances_Products.h"


void Appliances_Products::setApplianceType(ApplianceType newApplianceType)
{
	this->applianceType = newApplianceType;
}

void Appliances_Products::setIsPowerSaving(bool newIsPowerSaving)
{
	this->isPowerSaving = newIsPowerSaving;
}

void Appliances_Products::setGuaranteePeriod(int newGuaranteePeriod)
{
	if (newGuaranteePeriod > 0) this->guaranteePeriod = newGuaranteePeriod;
}

ApplianceType Appliances_Products::getApplianceType() const
{
	return this->applianceType;
}

bool Appliances_Products::getIsPowerSaving() const
{
	return this->isPowerSaving;
}

int Appliances_Products::getGuaranteePeriod() const
{
	return this->guaranteePeriod;
}

Appliances_Products::Appliances_Products(ApplianceType applianceType, bool isPowerSaving, int guaranteePeriod, std::string productName, std::string productCountryOfOrigin, std::string productBrand, int productCode, double productPrice) : Product::Product(productName, productCountryOfOrigin, productBrand, productCode, productPrice)
{
	setApplianceType(applianceType);
	setIsPowerSaving(isPowerSaving);
	setGuaranteePeriod(guaranteePeriod);
}

