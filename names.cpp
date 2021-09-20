/*
 * names.cpp
 * Simon Bosse
 * 9/20/21
 *
 */
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void getNames(vector<string>  &  reference) {
    for(int i=0; i<10; i++){
        string name;
        cout << "Enter a name: ";
        cin >> name;
        reference.push_back(name);
    }
}

bool doesNameExist(const string  &  testName, const vector<string>  &  reference){
    for(int i=0; i<10; i++){
        if(reference.at(i) == testName){
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> names;
    getNames(names);
    cout << doesNameExist("name", names);
    return 0;
}
