#pragma once
#include <cstring>
#include <iostream>

class Product
{
protected:

	std::string productName;
	std::string productCountryOfOrigin;	// Product's country of origin;
	std::string productBrand;	// "Adidas", "Rolex" etc. ;
	int productCode;	// Serial code of the product;
	double productPrice;		// Price in EUR;

		// Private Setters;
	void setProductName(std::string newProductName);
	void setProductCountryOfOrigin(std::string newProductCountryOfOrigin);
	void setProductBrand(std::string newProductBrand);
	void setProductCode(int newProductCode);
	void setProductPrice(const double newProductPrice);

		// Private Getters (For use of friend classes);
	std::string getProductName() const;
	double getProductPrice() const;

		// Product Info;
	void viewProductInfo() const;

public:

		// Constructors;
	Product(std::string productName = "-", std::string productCountryOfOrigin = "-", std::string productBrand = "-", const int productCode = 0, const double price = 0);

		// Friend Class;
	friend class Client;
};

