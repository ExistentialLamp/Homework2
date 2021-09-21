//
// Created by owner on 9/20/2021.
//

#include "money.h"
#include <iostream>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;

vector<int> count;

void askCountMoney(){
    cout << "Note answer in whole numbers.\n";
    for(int i=0; i<coins.size(); i++){
        cout << "How many " << coins.at(i) << " do you have? ";
        int response;
        cin >> response;
        count.push_back(response);
    }
    cout << endl;
}

void printCountPlusTotalMoney(){
    float total;
    for(int i=0; i<count.size(); i++){
        cout << "You have " << count.at(i) << " ";
        //checks to see if plural or singular case
        if(abs(count.at(i)) != 1){
            cout << coins.at(i);
        }
        else {
            cout << coin.at(i);
        }
        total += (count.at(i) * value.at(i));
        cout << endl;
    }
    cout << "\nYou have $" << total / 100;
}