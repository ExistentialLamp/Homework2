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

void printNamesScores(){
    for(int i=0; i<names.size(); i++){
        cout << names.at(i) << " " << scores.at(i) << endl;
    }
}

void searchNames(){
    string searchQuery;
    cout << "Whose score do you want to find?";
    cin >> searchQuery;
    for(int i=0; i<names.size(); i++){
        if(names.at(i) == searchQuery){
            cout << names.at(i) << " has a score of " << scores.at(i) << endl;
            return;
        }
    }
    cout << "There is no student with the name " << searchQuery << ". (Note: names are case-sensitive)" << endl;
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
                printNamesScores();
                break;
            case 3:
                searchNames();
                break;
            case 4:
                break;
            default:
                run = false;
                break;
        }
    }
}