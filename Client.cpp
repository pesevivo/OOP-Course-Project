#include "Client.h"
#pragma warning(disable: 4996)
#pragma warning(disable : 26812)

Client::Client(std::string firstName, std::string lastName, std::string phoneNumber, std::string email, Country country, std::string city, std::string address, DeliveryType deliveryType)
{
	setFirstName(firstName);

	setLastName(lastName);

	setPhoneNumber(phoneNumber);

	setEmail(email);

	setCountry(country);

	setCity(city);

	setAddress(address);

	setDeliveryType(deliveryType);
}

void Client::setDeliveryType(int newDeliveryType)
{
	clientDelivery.setDeliveryType(newDeliveryType);
}

void Client::setDeliveryMethod(int newDeliveryMethod)
{
	clientDelivery.setDeliveryMethod(newDeliveryMethod);
}

void Client::setFirstName(std::string newFirstName)
{
	this->firstName = newFirstName;
}

void Client::setLastName(std::string newLastName)
{
	this->lastName = newLastName;
}

void Client::setPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void Client::setEmail(std::string newEmail)
{
	this->email = newEmail;
}

void Client::setCountry(Country newCountry)
{
	this->country = newCountry;

	switch (newCountry)
	{
	case 0: this->clientDelivery.setDeliveryPrice(5); this->clientDelivery.setDeliveryMethod(land); break;
	case 1: this->clientDelivery.setDeliveryPrice(15); this->clientDelivery.setDeliveryMethod(sea); break;
	case 2: this->clientDelivery.setDeliveryPrice(20); this->clientDelivery.setDeliveryMethod(sea); break;
	case 3: this->clientDelivery.setDeliveryPrice(22.5); this->clientDelivery.setDeliveryMethod(sea); break;
	case 4: this->clientDelivery.setDeliveryPrice(30); this->clientDelivery.setDeliveryMethod(air); break;
	case 5: this->clientDelivery.setDeliveryPrice(35); this->clientDelivery.setDeliveryMethod(air); break;
	case 6: this->clientDelivery.setDeliveryPrice(17.5); this->clientDelivery.setDeliveryMethod(sea); break;
	case 7: this->clientDelivery.setDeliveryPrice(25); this->clientDelivery.setDeliveryMethod(air); break;
	}
}

void Client::setCity(std::string newCity)
{
	this->city = newCity;
}

void Client::setAddress(std::string newAddress)
{
	this->address = newAddress;
}

std::string Client::getFirstName() const
{
	return this->firstName;
}

std::string Client::getLastName() const
{
	return this->lastName;
}

std::string Client::getPhoneNumber() const
{
	return this->phoneNumber;
}

std::string Client::getEmail() const
{
	return this->email;
}

void Client::viewCountry() const
{
	switch (this->country)
	{
	case 0:	std::cout << "European Union" << std::endl; break;
	case 1: std::cout << "United States of America" << std::endl; break;
	case 2: std::cout << "China" << std::endl; break;
	case 3: std::cout << "Japan" << std::endl; break;
	case 4: std::cout << "Australia" << std::endl; break;
	case 5: std::cout << "New Zealand" << std::endl; break;
	case 6: std::cout << "Brazil" << std::endl; break;
	case 7: std::cout << "South Africa" << std::endl; break;
	}
}

Country Client::getCountry() const
{
	return this->country;
}

std::string Client::getCity() const
{
	return this->city;
}

std::string Client::getAddress() const
{
	return this->address;
}

void Client::viewCartContents()
{
	this->clientCart.viewCartContents();
}

double Client::getCartPrice() const
{
	return clientCart.getCartPrice();
}

int Client::getProductCount()
{
	return clientCart.getProductCount();
}

void Client::addAppliance(int productNumber)
{
	this->clientCart.addAppliance(productNumber);
}

void Client::addSportsMerch(int productNumber)
{
	this->clientCart.addSportsMerch(productNumber);
}

void Client::addWatches(int productNumber)
{
	this->clientCart.addWatches(productNumber);
}

void Client::removeAllProducts()
{
	clientCart.removeAllProducts();
}

void Client::removeAppliance(int productNumber)
{
	clientCart.removeAppliance(productNumber);
}

void Client::removeSportsMerch(int productNumber)
{
	clientCart.removeSportsMerch(productNumber);
}

void Client::removeWatch(int productNumber)
{
	clientCart.removeWatch(productNumber);
}

int Client::getDeliveryType() const
{
	return this->clientDelivery.getDeliveryType();
}

int Client::getDeliveryMethod() const
{
	return this->clientDelivery.getDeliveryMethod();
}

double Client::getDeliveryPrice() const
{
	return this->clientDelivery.getDeliveryPrice();
}

