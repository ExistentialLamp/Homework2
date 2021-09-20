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
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void getNames(vector<string>  &  reference) {
    for(int i=0; i<10; i++){
        string name;
        cout << "Enter a name: ";
        std::getline(cin, name);
        reference.push_back(name);
    }
}

bool doesNameExist(const string  &  testName, const vector<string>  &  reference){
    for(int i=0; i<reference.size(); i++){
        if(reference.at(i) == testName){
            return true;
        }
    }
    return false;
}

void printNames(const vector<string>  &  reference){
    for(int i=0; i<reference.size(); i++){
        cout << reference.at(i) << endl;
    }
}

int main() {
    vector<string> names;
    getNames(names);
    cout << doesNameExist("name", names) << endl;
    printNames(names);
    return 0;
}
