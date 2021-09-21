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
        //Duplicate protection
        for(int i=0; i<scores.size(); i++){
            if(name == names.at(i)){
                cout << name << " is already entered" << endl;
                return;
            }
        }
        //Exit condition
        if(name == "NoName" && score == 0){
            return;
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

void searchScores(){
    int searchQuery;
    cout << "What score do you want to search?";
    cin >> searchQuery;
    int successfulFinds = 0;
    //search algo
    for(int i=0; i<scores.size(); i++) {
        if(scores.at(i) == searchQuery){
            cout << names.at(i) << endl;
            successfulFinds++;
        }
    }
    //Check to see if any students got specified score
    if (successfulFinds == 0) {
        cout << "There are no students with a score of " << searchQuery;
    } else{
        cout << "These students got a score of " << searchQuery;
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
                printNamesScores();
                break;
            case 3:
                searchNames();
                break;
            case 4:
                searchScores();
                break;
            default:
                run = false;
                break;
        }
    }
}