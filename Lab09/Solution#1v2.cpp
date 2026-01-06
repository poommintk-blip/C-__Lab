#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int isValidID (string id);

int main() {
    string id[3];
    for(int i = 0; i < 3; i++){
        cin >> id[i];
        if (isValidID(id[i])) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}

int isValidID(string id){
    if(id.length() != 8)

    return 0;

char firstChar = id[0];
    if(!isalpha(firstChar) || !isupper(firstChar))
        return 0;

    for(int i = 1; i < 8; i++){
        if(!isdigit(id[i]))
            return 0;
    }

    return 1;
}