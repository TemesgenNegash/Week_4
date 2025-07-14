#pragma once
#include <string>
using namespace std;

class Item {
private:
    string name;
    int quantity;

public:
    Item();                             // Default constructor
    Item(string itemName, int itemQty); // Parameterized constructor
    void display();                     // Method to display item info
};


