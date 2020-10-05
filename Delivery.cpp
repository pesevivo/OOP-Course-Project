#include "Delivery.h"
#pragma warning(disable : 26812)

Delivery::Delivery(const int deliveryType, const int deliveryMethod, const double deliveryPrice)
{
	setDeliveryType(deliveryType);
	setDeliveryMethod(deliveryMethod);
	setDeliveryPrice(deliveryPrice);
}

void Delivery::setDeliveryType(int newDeliveryType)
{
	if ((newDeliveryType != 1 && newDeliveryType != 0) || (newDeliveryType == 0))this->deliveryType = standard;
	else (this->deliveryType = express);
}

void Delivery::setDeliveryMethod(int newDeliveryMethod)
{
	if ((newDeliveryMethod != 0 && newDeliveryMethod != 1 && newDeliveryMethod != 2) || (newDeliveryMethod == 0))this->deliveryMethod = land;
	else if (newDeliveryMethod == 1) this->deliveryMethod = sea;
	else (this->deliveryMethod = air);
}

void Delivery::setDeliveryPrice(double newDeliveryPrice)
{
	if (newDeliveryPrice < 0)this->deliveryPrice = 0;
	else this->deliveryPrice = newDeliveryPrice;
}

DeliveryType Delivery::getDeliveryType() const
{
	return this->deliveryType;
}

DeliveryMethod Delivery::getDeliveryMethod() const
{
	return this->deliveryMethod;
}

double Delivery::getDeliveryPrice() const
{
	return this->deliveryPrice;
}

