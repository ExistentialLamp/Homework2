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

void printNames(vector<string>  &  reference){
    cout << "here are the names printed out with just some god awful character substitutions please forgive me";
    cout << " (r's for w's, o's for 0's, e's for 3's, i's for 1's, l's for w's, t's for 7's, b's for 6's)\n";
    for(int i=0; i<reference.size(); i++){
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

int main() {
    vector<string> names;
    getNames(names);
    //cout << doesNameExist("name", names) << endl;
    printNames(names);

    cout << "\n\n\ndo you think god stays in heaven cause he too fears what he's created?";
    return 0;
}
