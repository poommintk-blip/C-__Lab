#include <iostream>

using namespace std;

int main()  {
    float num1, num2, result;
    char mark;
    
    cin >> num1 >> num2 >> mark;
    
    switch(mark) {
    case '+':
        result = num1+num2;
        cout << result << endl;
        break;
    case '-': 
        result = num1-num2;
        cout << result << endl;
        break;
    case '*':
    result = num1*num2;
        cout << result << endl;
        break;
    case '/':
    result = num1/num2;
        cout << result << endl;
        break;
    case '>':
    exit(0);
    break;
 
    default:  
    cout << "Invalid mark!!" << endl;
}
    return 0;
}