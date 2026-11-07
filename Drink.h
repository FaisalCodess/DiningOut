// Mohammad Hamad 20250003
// Faisal Al Quishawi 20250112
// Lemar Al Salman 20250466
// Mohammad Abu Roumi 20250512

#ifndef DRINK_H
#define DRINK_H

#include <iostream>
#include <string>

using namespace std;

class Drink {
private :
	float temp;
	string name;
	string size;
	int calories;
	bool hasSugar;
	float price;
	
public:
	Drink(float t = 0.0, string type = "NA", string size = "NA");
    Drink(const Drink &d);

	void setTemp(float t);
	void setName(string t);
	void setSize(string s);
	void setCalories(int c);
	void setHasSugar(bool s);
	void setPrice(float p);

	float getTemp() const;
	string getType() const;
	string getSize() const;
	int getCalories() const;
	bool getHasSugar() const;
	float getPrice() const;

	bool isRefillable() const;
	bool isHot() const;
	bool isCold() const;
	bool isNormal() const;
	void print() const;

	~Drink();
};

#endif