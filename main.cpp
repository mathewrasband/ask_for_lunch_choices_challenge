//
//  main.cpp
//  ask_for_lunch_choices_challenge
//
//  Created by Mathew Rasband on 4/9/21.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    vector<string> lunchItem(5); //List of menu items
    vector<double> itemPrice(4); //Prices of menu items
    int quantity      = 0;       //How many of each menu item
    int selection     = 0;       //Menu item selection
    double totalPrice = 0 ;      //Total price for print out
    
    lunchItem.at(0)   = "hotdog";
    lunchItem.at(1)   = "hamburger";
    lunchItem.at(2)   = "cheese burger";
    lunchItem.at(3)   = "salad";
    lunchItem.at(4)   = "exit";
    
    itemPrice.at(0)   = 2.50;
    itemPrice.at(1)   = 3.00;
    itemPrice.at(2)   = 3.50;
    itemPrice.at(3)   = 4.00;
    
    do{
        cout << "Choose an item from the menu: " << endl;
    
        //Prints out menu
        for (int i = 0; i < 5; ++i) {
            if (i == 4) {
                cout << i + 1 << " " <<lunchItem.at(i) << endl;
                break;
            }
            cout << i + 1 << " ";
            cout << setw(15) << fixed << setprecision(2) << left << lunchItem.at(i);
            cout << " " << "$" << itemPrice.at(i) << endl;
        }
        cin  >> selection; //Gets selection from menu
        
        if (selection == 5) //Exits program if 5 is selected from menu
            break;
        
        cout << "How many: " << endl;
        cin  >> quantity;   //Gets quantity of menu items desired.
       
        totalPrice += (itemPrice.at(selection - 1) * quantity); //Gets total price
        
        cout << "Your total cost is $" << totalPrice << "." << endl;
    }
    while (selection != 5);
    
    return 0;
}
