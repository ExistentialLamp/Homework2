/*
 * names.cpp
 * Simon Bosse
 * 9/20/21
 *
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "money.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


//If i had the will to research something that i know will be taught i would put these into a class but alas

//asks the user for names 10 times
void getNames(vector<string>  &  reference) {
    for(int i=0; i<10; i++){
        string name;
        cout << "Enter a name: ";
        std::getline(cin, name);
        reference.push_back(name);
    }
}

//for loop that checks each string in the vector to see if it matches the test
bool doesNameExist(const string  &  testName, const vector<string>  &  reference){
    for(int i=0; i<reference.size(); i++){
        if(reference.at(i) == testName){
            return true;
        }
    }
    return false;
}

//oh god no please
void printNames(vector<string>  &  reference){
    cout << "here are the names printed out with just some god awful character substitutions please forgive me\n";
    cout << " (r's for w's, o's for 0's, e's for 3's, i's for 1's, l's for w's, t's for 7's, b's for 6's)\n";
    for(int i=0; i<reference.size(); i++){
        //character based analysis of each string replacing certain characters with another
        for(int j=0; j<reference.at(i).length(); j++){
            char & test = reference.at(i)[j];
            //oh god why forgive me
            switch (test) {
                case 'L':
                case 'l':
                case 'R':
                case 'r':
                    test = 'w';
                    break;
                case 'O':
                case 'o':
                    test = '0';
                    break;
                case 'E':
                case 'e':
                    test = '3';
                    break;
                case 'I':
                case 'i':

                    test = '1';
                    break;
                case 'T':
                case 't':
                    test = '7';
                    break;
                case 'B':
                case 'b':
                    test = '6';
                    break;
                default:
                    break;
            }

        }
        cout << reference.at(i) << endl;
    }
}

//encapsulates and runs all of the above once
void runNames() {
    vector<string> names;
    getNames(names);
    //hey thats my name wtf
    if(doesNameExist("Simon", names)){cout << "lmao who names their kid Simon";}
    //im sorry it had to be done
    printNames(names);

    cout << "\n\n\ndo you think god stays in heaven cause he too fears what he's created?";
};


//vector containing the known programs to run
vector<string> programs = {"Names", "Terminate"};

//Asks user and returns what program they want to run
string selectProgram(){
    //gives list of known programs
    cout << "Which program would you like to run? (case-sensitive): ";
    for(int i=0; i<programs.size(); i++) {
        cout << programs.at(i);
        if (i < programs.size() - 1) {
            cout << ", ";
        }
    }
    while(true){
        cout << endl;
        string selection;
        getline(cin, selection);
        for(int i=0; i<programs.size(); i++){
            if(selection == programs.at(i)){
                return selection;
            }
        }
        cout << "I didn't recognize that program, program names are case sensitive. Please try again.";
    }
}

//Takes a string and runs it based on answers from selectProgram(). It felt right to seperate the two functions idk
void runProgram(string selectedProgram){
    if(selectedProgram == programs.at(0)){
        runNames();
    }
}

int main() {
    //runProgram(selectProgram());
    askCount();
    return 0;
}
