/*

Some info on the project:

This OOP project is designed for an online store's administrators. The store is based in an EU country.
They can see all the info about the client who made the order but can only alter some of it.
(because it doesn't make sense for some administrator to change their client's name or ordered products for example)


Elaborated by: Ivo Pesev, Software Engineering Student @ Sofia University "St. Kliment Ohridski"

*/

#pragma warning(disable: 4996)
#include <iostream>
#include "Client.h"
#include "Product.h"
#include "Delivery.h"
#include "Cart.h"
#include <string>

int main() {

	Client Ivo{ "Ivo", "Thompson", "123456789", "ivcho@gmail.com", EU, "Sofia", "Sofia str. 24", express };

	std::cout << "Client: " << Ivo.getFirstName() << " " << Ivo.getLastName() << std::endl;
	std::cout << "Phone number: " << Ivo.getPhoneNumber() << std::endl;
	std::cout << "E-mail: " << Ivo.getEmail() << std::endl;
	std::cout << "Country / Region: "; Ivo.viewCountry();
	std::cout << "City: " << Ivo.getCity() << std::endl;
	std::cout << "Address: " << Ivo.getAddress() << "\n" << std::endl;
	std::cout << "Delivery Info: " << std::endl;
	std::cout << "Delivery Type: " << Ivo.getDeliveryType() << std::endl;
	std::cout << "Delivery Method: " << Ivo.getDeliveryMethod() << std::endl;
	std::cout << "Delivery Price: " << Ivo.getDeliveryPrice() << std::endl;
	std::cout << "\n";

	Ivo.addAppliance(2);
	Ivo.addSportsMerch(3);
	Ivo.addWatches(0);

	/*Ivo.viewCartContents();
	std::cout << "----------" << std::endl;

	Ivo.removeAppliance(0);
	Ivo.viewCartContents();
	std::cout << "----------" << std::endl;

	Ivo.removeSportsMerch(0);
	Ivo.viewCartContents();
	std::cout << "----------" << std::endl;

	Ivo.removeWatch(0);
	Ivo.viewCartContents();*/

	Ivo.viewCartContents();
	std::cout << "----------" << std::endl;
	std::cout << "Total Price: " << Ivo.getCartPrice() << std::endl;
	std::cout << "Total number of products: " << Ivo.getProductCount() << std::endl;

	return 0;
}
