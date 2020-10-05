#include "Watches_Products.h"
#pragma warning(disable : 26812)

void Watches_Products::setMaterial(Material newMaterial)
{
	this->material = newMaterial;
}

void Watches_Products::setWatchType(WatchType newWatchType)
{
	this->watchType = newWatchType;
}

void Watches_Products::setGender(Gender newGender)
{
	this->gender = newGender;
}

void Watches_Products::setIsWaterproof(bool newIsWaterproof)
{
	this->isWaterproof = newIsWaterproof;
}

void Watches_Products::setIsShockAbsorbing(bool newIsShockAbsorbing)
{
	this->isShockAbsorbing = newIsShockAbsorbing;
}

Material Watches_Products::getMaterial() const
{
	return this->material;
}

WatchType Watches_Products::getWatchType() const
{
	return this->watchType;
}

Gender Watches_Products::getGender() const
{
	return this->gender;
}

bool Watches_Products::getIsWaterproof() const
{
	return this->isWaterproof;
}

bool Watches_Products::getIsShockAbsorbing() const
{
	return this->isShockAbsorbing;
}

Watches_Products::Watches_Products(Material material, WatchType watchType, Gender gender, bool isWaterproof, bool isShockAbsorbing, std::string productName, std::string productCountryOfOrigin, std::string productBrand, int productCode, double productPrice) : Product::Product(productName, productCountryOfOrigin, productBrand, productCode, productPrice)
{
	setMaterial(material);
	setWatchType(watchType);
	setGender(gender);
	setIsWaterproof(isWaterproof);
	setIsShockAbsorbing(isShockAbsorbing);
}
