#pragma once

enum DeliveryType { standard, express };
enum DeliveryMethod { land, sea, air };

class Delivery
{
private:

	DeliveryType deliveryType;	// 0 - standard, 1 - express;
	DeliveryMethod deliveryMethod;	// 0 - land, 1 - sea, 2 - air;
	double deliveryPrice;	// in EUR;

		// Private Setters (For the Constructor but can be used by friend class "Client");
	void setDeliveryType(int newDeliveryType);
	void setDeliveryMethod(int newDeliveryMethod);
	void setDeliveryPrice(double newDeliveryPrice);

	// Private getters (For the use of friend classes);

	DeliveryType getDeliveryType() const;
	DeliveryMethod getDeliveryMethod() const;
	double getDeliveryPrice() const;

public:

		// Constructor;
	Delivery(const int deliveryType = 0, const int deliveryMethod = 0, const double deliveryPrice = 0);

		// Friend Class;
	friend class Client;
};

