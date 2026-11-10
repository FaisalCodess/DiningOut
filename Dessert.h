// Mohammad Hamad 20250003
// Faisal Al Quishawi 20250112
// Lemar Al Salman 20250466
// Mohammad Abu Roumi 20250512

#ifndef DESSERT_H
#define DESSERT_H

#include <string>

using namespace std;

class Dessert {
private:
    string name;
    float price;
    int calories;
    bool hasSugar;

public:
    Dessert(string name = "NA", float price = 0.0, int calories = 0, bool hasSugar = true);
    Dessert(const Dessert &d);

    void setName(string n);
    void setPrice(float p);
    void setCalories(int c);
    void setHasSugar(bool s);

    string getName() const;
    float getPrice() const;
    int getCalories() const;
    bool getHasSugar() const;

    void print();

    ~Dessert();
};

#endif