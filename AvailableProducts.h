#pragma once
#include "Appliances_Products.h"
#include "Sports_Products.h"
#include "Watches_Products.h"
#include <vector>

class AvailableProducts
{
protected:
	std::vector<Appliances_Products> appliances;
	std::vector<Sports_Products> sportsMerch;
	std::vector<Watches_Products> watches;

public:

		// Constructor;
	AvailableProducts();

};

