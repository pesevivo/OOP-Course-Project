#include "Product.h"
#pragma warning(disable: 4996)


Product::Product(std::string productName, std::string productCountryOfOrigin, std::string productBrand, const int productCode, const double productPrice)
{

	setProductName(productName);

	setProductCountryOfOrigin(productCountryOfOrigin);

	setProductBrand(productBrand);

	setProductCode(productCode);

	setProductPrice(productPrice);

}

void Product::viewProductInfo() const
{
	std::cout << "Product Code: " << this->productCode << std::endl;
	std::cout << "Product Name: " << this->productName << std::endl;
	std::cout << "Product Country Of Origin: " << this->productCountryOfOrigin << std::endl;
	std::cout << "Product Brand: " << this->productBrand << std::endl;
	std::cout << "Product Price: " << this->productPrice << std::endl;
}

void Product::setProductName(std::string newProductName)
{
	this->productName = newProductName;
}

void Product::setProductCountryOfOrigin(std::string newProductCountryOfOrigin)
{
	this->productCountryOfOrigin = newProductCountryOfOrigin;
}

void Product::setProductBrand(std::string newProductBrand)
{
	this->productBrand = newProductBrand;
}

void Product::setProductCode(int newProductCode)
{
	if (newProductCode > 0)this->productCode = newProductCode;
	else this->productCode = 0;
}

void Product::setProductPrice(const double newProductPrice)
{
	if (newProductPrice > 0) this->productPrice = newProductPrice;
	else this->productPrice = 0;
}

std::string Product::getProductName() const
{
	return this->productName;
}

double Product::getProductPrice() const
{
	return this->productPrice;
}



