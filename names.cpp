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

vector<string> names;

void getNames() {
    for(int i=0; i<10; i++){
        string name;
        cout << "Enter a name: ";
        cin >> name;
        names.push_back(name);
    }
}

int main() {
    getNames();
    //for debugging remove later uahg;adkg;asjgk
    cout << names.size() << endl;
    for(int i=0; i<names.size(); i++){
        cout << names.at(i);
    }
    return 0;
}
