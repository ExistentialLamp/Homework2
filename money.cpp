//
// Created by owner on 9/20/2021.
//

#include "money.h"
#include <iostream>
using std::vector;
using std::cout;
using std::cin;
using std::string;

vector<int> count;

vector<int> askCount(){
    cout << "Note answer in whole numbers.\n";
    for(int i=0; i<coins.size(); i++){
        cout << "How many " << coins.at(i) << " do you have? ";
        int response;
        cin >> response;
        count.push_back(response);
    }
    return count;
}