#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (((a+b)>c) && ((b+c)>a) && ((c+a)>b)) 

  if ((a==b) && (b==c) && (c==a)) {
    cout << "Equilateral" << endl;

      
  } else if ((a!=b) && (b!=c) && (c!=a)) {
    cout << "Scalene" << endl;
      
  } else {
    cout << "Isosceles" << endl;
  } else {
      cout << "No" << endl;
  }
    return 0;

}