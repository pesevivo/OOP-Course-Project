#pragma once
#pragma warning(disable : 26812)
#include "Product.h"
#include "AvailableProducts.h"
#include <iostream>

class Cart : public AvailableProducts
{
private:

	std::vector<Appliances_Products> userAppliances;
	std::vector<Sports_Products> userSportsMerch;
	std::vector<Watches_Products> userWatches;
	double cartPrice;

		// Private Getters (For use of friend classes);
	int getProductCount();				// Get the number of products in the cart;
	double getCartPrice() const;		// Get the total price of all products in the cart;
	
		// Print out all products in the cart;
	void viewCartContents();

		// Add products to cart;
	void addAppliance(int productNumber);
	void addSportsMerch(int productNumber);
	void addWatches(int productNumber);

		// Remove products from cart;
	void removeAllProducts();
	void removeAppliance(int productNumber);
	void removeSportsMerch(int productNumber);
	void removeWatch(int productNumber);

public:

		// Constructor;
	Cart();

		// Friend Class;
	friend class Client;
};

