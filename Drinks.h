// Mohammad Hamad 20250003
// Faisal Al Quishawi 20250112
// Lemar Al Salman 20250466
// Mohammad Abu Roumi 20250512

#ifndef DRINKS_H
#define DRINKS_H

#include <iostream>
#include <string>

using namespace std;

class Drinks {
private :
	float temp;
	string type;
	string size;
	
public:
	void setTemp(float t);

	void setType(string t);

	void setSize(string s);

	float getTemp() const;

	string getType() const;

	string getSize() const;

	Drinks(float t = 0.0, string type = "NA", string size = "NA");
    
    Drinks(const Drinks &d);

	bool isRefillable() const;

	bool isHot() const;

	bool isCold() const;

	bool isNormal() const;

	void print();
};

#endif