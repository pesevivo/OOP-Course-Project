#pragma once
#include "Product.h"

enum Sport { Swimming, Athletics, Cycling };
enum ProductType { Equipment, Clothing };

class Sports_Products : public Product
{
private:
	Sport sport;
	ProductType productType;

		// Private Setters;
	void setSport(Sport newSport);
	void setProductType(ProductType newProductType);

		// Private Getters;
	Sport getSport() const;
	ProductType getProductType() const;

public:
		
		// Constructor;
	Sports_Products(Sport sport = Swimming, ProductType productType = Equipment, std::string productName = "-", std::string productCountryOfOrigin = "-", std::string productBrand = "-", int productCode = 0, double productPrice = 0);

		// Friend Classes;
	friend class Cart;
	friend class AvailableProducts;
};

