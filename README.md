DiningOut, This is for the OOP Project

Faisal Al Quishawi 20250112

Mohammad Hamad 20250003

Lemar Al Salman 20250466

Mohammad AbuRoumi 20250512



// must reject orders for empty/available tables
// using an array with the same size as the number of menu items and initialize it to 0

/*
Before accepting an order and updating the table's array (and reducing the menu item's stock),
 verify that The selected menu item index actually exists on the menu 0 <= itemIndex < listedItemsCount
 The requested quantity is less than or equal to the item's current available stock and greater than 0
*/

/*getprice functions should handle quantity , getprice(quantity)*/

/*
ONLY FOR CLASSES THAT HAVE A MAXIMUM LIMIT : 
Any shared maximum boundaries or limits that apply across an entire class 
(for example, a maximum menu capacity of 50 or rating bounds of 1 to 5) should be declared as 
static constants inside that class. 

Provide a static getter function (accessor) to read those limits without needing an object instance
*/

/* 
specifically for menuitem class"
we should keep track of the alive objects 

must create a static int nextCode function that auto-generates unique, 
sequential IDs for each new MenuItem's const item code.

the getter functions for both counters must also be declared static allowing you to
 call MenuItem::getLiveItems() directly via the class name even when zero MenuItem objects
 have been instantiated. (Note: static member functions cannot have const at the end of their signature
 because they have no this pointer—being read-only here means 
they simply return the value without modifying it.)

*/

// Chainable setters are setter functions that return  *this (returns the object itself) instead of void.

//double calculateTotal(double tipPercent = 0.0) const; (IN TABLE CLASS)

/*
Global functions in paying.h :

1  addTip  changes the bill passed by reference and accepts an optional whole-number percentage
2  splitBill it reads the final bill by const reference and produces equal shares, distributing leftover fils as specified above. Document
how it reports invalid input or insufficient output space
3  printReceipt reads an item by const reference and prints its quantity and line total;
 use it as part of the complete table receipt. (Prints a single item with the quantity ordered )
 since it only works for one item, it should be called from within a loop that iterates through the table's order array.
*/

//Always validate all preconditions first at the very top of your function before mutating any data , 
// Choose one consistent way to report failure, such as a bool result  Invalid operations must
//leave the relevant state unchanged.

State important preconditions, limits, ownership rules and failure behaviour in short comments
Explain valid initial states and which constructors must be callable without arguments 
(We must use comments frequently ) 