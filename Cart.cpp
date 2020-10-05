#include "Cart.h"

void Cart::addAppliance(int productNumber)
{
	this->userAppliances.push_back(AvailableProducts::appliances.at(productNumber));
	this->cartPrice += AvailableProducts::appliances.at(productNumber).getProductPrice();
}

void Cart::addSportsMerch(int productNumber)
{
	this->userSportsMerch.push_back(AvailableProducts::sportsMerch.at(productNumber));
	this->cartPrice += AvailableProducts::sportsMerch.at(productNumber).getProductPrice();
}

void Cart::addWatches(int productNumber)
{
	this->userWatches.push_back(AvailableProducts::watches.at(productNumber));
	this->cartPrice += AvailableProducts::watches.at(productNumber).getProductPrice();
}

void Cart::removeAllProducts()
{
	this->userAppliances.clear();
	this->userSportsMerch.clear();
	this->userWatches.clear();

	this->cartPrice = 0;
}

void Cart::removeAppliance(int productNumber)
{
	this->cartPrice -= this->userAppliances.at(productNumber).getProductPrice();
	this->userAppliances.erase(userAppliances.begin() + productNumber);
}

void Cart::removeSportsMerch(int productNumber)
{
	this->cartPrice -= this->userSportsMerch.at(productNumber).getProductPrice();
	this->userSportsMerch.erase(userSportsMerch.begin() + productNumber);
}

void Cart::removeWatch(int productNumber)
{
	this->cartPrice -= this->userWatches.at(productNumber).getProductPrice();
	this->userWatches.erase(userWatches.begin() + productNumber);

}

Cart::Cart() : cartPrice(0) {}

int Cart::getProductCount()
{
	return this->userAppliances.size() + this->userSportsMerch.size() + this->userWatches.size();
}

double Cart::getCartPrice() const
{
	return this->cartPrice;
}

void Cart::viewCartContents()
{
	for (std::vector<Appliances_Products>::iterator it = this->userAppliances.begin(); it != userAppliances.end(); it++)
	{
		std::cout << "Product: " << (*it).getProductName() << ", Price: " << (*it).getProductPrice() << std::endl;
	}

	for (std::vector<Sports_Products>::iterator it = userSportsMerch.begin(); it != userSportsMerch.end(); it++)
	{
		std::cout << "Product: " << (*it).getProductName() << ", Price: " << (*it).getProductPrice() << std::endl;
	}

	for (std::vector<Watches_Products>::iterator it = userWatches.begin(); it != userWatches.end(); it++)
	{
		std::cout << "Product: " << (*it).getProductName() << ", Price: " << (*it).getProductPrice() << std::endl;
	}
}





