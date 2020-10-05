#include "Sports_Products.h"
#pragma warning(disable : 26812)

void Sports_Products::setSport(Sport newSport)
{
	this->sport = newSport;
}

void Sports_Products::setProductType(ProductType newProductType)
{
	this->productType = newProductType;
}

Sport Sports_Products::getSport() const
{
	return this->sport;
}

ProductType Sports_Products::getProductType() const
{
	return this->productType;
}

Sports_Products::Sports_Products(Sport sport, ProductType productType, std::string productName, std::string productCountryOfOrigin, std::string productBrand, int productCode, double productPrice) : Product::Product(productName, productCountryOfOrigin, productBrand, productCode, productPrice)
{
	setSport(sport);
	setProductType(productType);
}
