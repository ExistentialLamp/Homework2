//
// Created by owner on 9/20/2021.
//

#include "scores.h"
#include <vector>
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//initializes names and scores vector pair
vector<string> names;
vector<int> scores;

void getNamesScores(){
    cout << "To end data entry, type 'NoName' and '0' for name and score respectively\n";
    while(true){
        //gets name
        string name;
        cout << "Enter the name: ";
        cin >> name;
        //gets score
        int score;
        cout << "Enter their score: ";
        cin >> score;
        //Checks to see if exit condition is met
        if(name == "NoName" && score == 0){
            break;
        } else{
            names.push_back(name);
            scores.push_back(score);
        }
    }
}

void optionSelect(){
    bool run = true;
    while(run) {
        cout << "Would you like to: " << endl;
        cout << "[1] Continue data entry" << endl;
        cout << "[2] Print the names and scores" << endl;
        cout << "[3] Search for a name" << endl;
        cout << "[4] Search for a score" << endl;
        cout << "Enter any other number to exit." << endl;
        int response;
        cin >> response;
        switch (response) {
            case 1:
                getNamesScores();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                run = false;
                break;
        }
    }
}