#include "AvailableProducts.h"

AvailableProducts::AvailableProducts()
{
	Appliances_Products fridge{ White, true, 24, "Fridge", "Korea", "Samsung", 1, 500 };
	Appliances_Products washingMachine{ Black, true, 60, "Washing Machine", "Korea", "Samsung", 2, 400 };
	Appliances_Products microwaveOven{ Black, false, 12, "Microwave Oven", "Korea", "Samsung", 3, 65 };
	Appliances_Products regularOven{ White, true, 60, "Regular Oven", "Korea", "Samsung", 4, 550 };
	Appliances_Products dryer{ Black, true, 60, "Dryer", "Korea", "Samsung", 5, 450 };

	appliances.push_back(fridge);
	appliances.push_back(washingMachine);
	appliances.push_back(microwaveOven);
	appliances.push_back(regularOven);
	appliances.push_back(dryer);

	Sports_Products goggles{ Swimming, Equipment, "Swimming Goggles", "USA", "Arena", 6, 25 };
	Sports_Products spikes{ Athletics, Equipment, "Running Spikes", "USA", "Nike", 7, 110 };
	Sports_Products gloves{ Cycling, Clothing, "Cycling gloves", "USA", "Asics", 8, 30 };
	Sports_Products trainers{ Athletics, Equipment, "Trainers for trail running", "Germany", "Adidas", 9, 95 };
	Sports_Products swimsuit{ Swimming, Clothing, "Swimsuit", "USA", "Arena", 10, 50 };

	this->sportsMerch.push_back(goggles);
	this->sportsMerch.push_back(spikes);
	this->sportsMerch.push_back(gloves);
	this->sportsMerch.push_back(trainers);
	this->sportsMerch.push_back(swimsuit);

	Watches_Products skagenMale{ Steel, Mechanical, Male, true, true, "\"Skagen\" men's watch", "Denmark", "Skagen", 11, 480 };
	Watches_Products skagenFemale{ Steel, Quartz, Female, true, true, " \"Skagen\" women's watch", "Denmark", "Skagen", 12, 480 };
	Watches_Products rolexStandard{ Titanium, Kinetic, Unisex, true, false, "\"Rolex\" standard watch", "Switzerland", "Rolex", 13, 1500 };
	Watches_Products rolexDeluxe{ Mix, Solar, Unisex, true, false, "\"Rolex\" deluxe series watch", "Switzerland", "Rolex", 14, 3500 };
	Watches_Products cartierPremium{ Mix, Mechanical, Unisex, true, false, "\"Cartier\" premium edition watch", "Switzerland", "Cartier", 15, 6700 };

	this->watches.push_back(skagenMale);
	this->watches.push_back(skagenFemale);
	this->watches.push_back(rolexStandard);
	this->watches.push_back(rolexDeluxe);
	this->watches.push_back(cartierPremium);
}




