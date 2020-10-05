#pragma once
#include <iostream>
#include "Delivery.h"
#include "Cart.h"

enum Country { EU, USA, China, Japan, Australia, New_Zealand, Brazil, South_Africa };

class Client
{
private:
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string email;
	Country country;
	std::string city;
	std::string address;
	Cart clientCart;			// Made up of "Product" variables;
	Delivery clientDelivery;	// Includes: Delivery Type (0 - standard, 1 - express), Delivery Method (0 - land, 1 - sea, 2 - air) and Delivery Price (total price of delivery);

		// Private Setters (For the Constructor);
	void setFirstName(std::string newFirstName);
	void setLastName(std::string newLastName);
	void setPhoneNumber(std::string newPhoneNumber);
	void setEmail(std::string newEmail);
	void setCountry(Country country);		// Also, automatically sets "deliveryPrice" in "clientDelivery" to a value, corresponding to the given country;
	void setCity(std::string newCity);
	void setAddress(std::string newAddress);
	void setDeliveryMethod(int newDeliveryMethod);

public:

		// Constructor;
	Client(std::string firstName = "-", std::string lastName = "-", std::string phoneNumber = "-", std::string email = "-", const Country country = EU, std::string city = "-", std::string address = "-", DeliveryType deliverytype = standard);

		// Setters;
	void setDeliveryType(int newDeliveryType);

	// Getters;

		// Info about user;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getPhoneNumber() const;
	std::string getEmail() const;
	void viewCountry() const;	// Prints the country name;
	Country getCountry() const;	// Returns the country's enum value; 
	std::string getCity() const;
	std::string getAddress() const;

		// Info about the user's cart;
	void viewCartContents();			// View all contents in the cart;
	double getCartPrice() const;			// Get Cart price;
	int getProductCount();			// Get the number of all products in the cart;

		// Info about the order's delivery;
	int getDeliveryType() const;
	int getDeliveryMethod() const;
	double getDeliveryPrice() const;

		// Add products to Cart;
	void addAppliance(int productNumber);
	void addSportsMerch(int productNumber);
	void addWatches(int productNumber);

		// Remove products from cart;
	void removeAllProducts();
	void removeAppliance(int productNumber);
	void removeSportsMerch(int productNumber);
	void removeWatch(int productNumber);
};


