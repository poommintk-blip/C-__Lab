#include <iostream>
#include <ctype.h>

using namespace std;

int main()  {
    char ch;
    cin >> ch;
    ch = tolower(ch);
    switch(ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    
    cout << "Vowel" << endl;
    break;
 
    default:   
    if(isalpha(ch)) {
        cout << "Consonant" << endl;
        break;
    }
}
    return 0;
}