#pragma once
#include "Product.h"

enum Material { Wood, Steel, Titanium, Mix };
enum WatchType { Mechanical, Automatic, Quartz, Kinetic, Solar };
enum Gender { Male, Female, Unisex };

class Watches_Products : public Product
{
private:
	Material material;
	WatchType watchType;
	Gender gender;
	bool isWaterproof;
	bool isShockAbsorbing;

		// Private Setters;
	void setMaterial(Material newMaterial);
	void setWatchType(WatchType newWatchType);
	void setGender(Gender newGender);
	void setIsWaterproof(bool newIsWaterproof);
	void setIsShockAbsorbing(bool newIsShockAbsorbing);

		// Private Getters;
	Material getMaterial() const;
	WatchType getWatchType() const;
	Gender getGender() const;
	bool getIsWaterproof() const;
	bool getIsShockAbsorbing() const;

public:

		// Constructor;
	Watches_Products(Material material = Steel, WatchType watchType = Quartz, Gender gender = Unisex, bool isWaterproof = true, bool isShockAbsorbing = true, std::string productName = "-", std::string productCountryOfOrigin = "-", std::string productBrand = "-", int productCode = 0, double productPrice = 0);

		// Friend Classes;
	friend class Cart;
	friend class AvailableProducts;

};

