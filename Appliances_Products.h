#pragma once
#include "Product.h"
#pragma warning(disable : 26812)

enum ApplianceType { White, Black };

class Appliances_Products : public Product
{
private:
	ApplianceType applianceType;
	bool isPowerSaving;
	int guaranteePeriod;	// In months;

		// Private Setters;
	void setApplianceType(ApplianceType newApplianceType);
	void setIsPowerSaving(bool newIsPowerSaving);
	void setGuaranteePeriod(int newGuaranteePeriod);

		// Private Getters;
	ApplianceType getApplianceType() const;
	bool getIsPowerSaving() const;
	int getGuaranteePeriod() const;

public:

		// Constructor;
	Appliances_Products(ApplianceType applianceType = White, bool isPowerSaving = true, int guaranteePeriod = 24, std::string productName = "-", std::string productCountryOfOrigin = "-", std::string productBrand = "-", int productCode = 0, double productPrice = 0);

		// Friend Classes;
	friend class Cart;
	friend class AvailableProducts;
};

