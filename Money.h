// Mohammad Hamad 20250003
// Faisal Al Quishawi 20250112
// Lemar Al Salman 20250466
// Mohammad Abu Roumi 20250512

#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

using namespace std;

class Money {
private:
    float amount;
    string currency;

public:
    Money(float amount = 0.0, string currency = "JOD") ;

    float getAmount()const ;
    
    void setAmount(float amt) ;
    
    string getCurrency()const ;
    
    void setCurrency(string curr) ;
    
    Money  addAmount(const Money& other) const;
    
    Money  subtractAmount(const Money& other) const;
    
    Money multiplyBy(float m) const;
    
    Money divideBy(int d) const;
    
    void print() {};
    
    ~Money() ;
};

#endif