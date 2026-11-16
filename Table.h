// Mohammad Hamad 20250003
// Faisal Al Quishawi 20250112
// Lemar Al Salman 20250466
// Mohammad Abu Roumi 20250512

#ifndef TABLE_H
#define TABLE_H

using namespace std;

class Table {
private:
    int const tableNumber;
    int const capacity;
    bool isInUse;
    int ordered[50]; // assuming a maximum of 50 menu items per table
    bool wasUsed; // for the night report 
    int currentPeople; // for the night report
    int totalPeopleServed; // for the night report 
    // Only add currentPeople to totalPeopleServed upon completing the payment.
    
public:
    // CONSTRUCTOR: ////////////////////////////////
    Table(int number, bool InUse = false , bool WasUsed=false , int CurrentPeople=0 , int TotalPeopleServed=0); // (constructor) ** should we initialize the maxCapacity in the main by hand ? or determine the max capacity depending on the table number ? 
    // must use initializer list to initialize the const variables tableNumber and capacity.
    // and the maxCapacity should be determined by the table number.
    // SETTERS AND GETTERS: ////////////////////////////////////////////
    int getTableNumber() const;
    int getCapacity() const;
    void setInUse(bool InUse);
    bool getInUse() const;
    void orderItem(int itemNumber); // adds the item number to the ordered array array[itemNumber-1] += 1 
    void setWasUsed(bool wasUsed); // for the night report , and this should be used to trigger the wasUsed 
                                   // variable to true upon seating not upon paying .
    bool getWasUsed() const; 
    void setCurrentPeople(int currentPeople);
    int getCurrentPeople() const;
    void setTotalPeopleServed(int totalPeopleServed);
    int getTotalPeopleServed() const;  
    // FUNCTIONS : ////////////////////////////////////////////                             
    bool canBeUsed(int numberOfPeople) const ; // can only be used if the number of people is less than or equal to 
                                        // the table's capacity and the table is not already in use  
    bool orderItem(Menu& menu, int itemIndex, int quantity = 1);                                                                 


};
#endif