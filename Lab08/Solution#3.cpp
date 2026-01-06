#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j, k, n, m, p;
    string name[10][10][10];

    cin >> n;
    cin >> m;
    cin >> p;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            for(k = 0; k < p; k++) {
                cin >> name[i][j][k];
            }
        }
    }

    cout << "Elements in the matrix: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            for(k = 0; k < p; k++) {
                  cout << "name[" << i << "][" << j << "][" 
            << k << "]: " << name[i][j][k] << endl;
            }

        }
    }

    cout << "\nElements in the matrix:";
        for(i = 0; i < n; i++){
            cout << "\nname[" << i << "][][]: " ;
          for(j = 0; j < m; j++) {
               for(k = 0; k < p; k++) {
                   cout << name[i][j][k] << " " ;
            }
        }
    }

    return 0;
}