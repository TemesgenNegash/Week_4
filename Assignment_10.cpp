// Assignment_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
using namespace std;

int main() {
    Item item1("Notebook", 10);
    Item item2("Pencil", 50);

    item1.display();
    item2.display();

    return 0;
}
/*Item: Notebook, Quantity: 10
Item: Pencil, Quantity: 50

C:\CIS-25\Assignment_10\x64\Debug\Assignment_10.exe (process 6524) exited with code 0 (0x0).
Press any key to close this window . . .*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
