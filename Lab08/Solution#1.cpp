#include <iostream>
#include <string>
using namespace std;

int main() {
    int matrix1[5][5], matrix2[5][5];
    int i, j, n, m;
    float avg;

    cin >> n;
    cin >> m;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            avg = (float)(matrix1[i][j] + matrix2[i][j]) / 2;
            cout << avg << " ";

        }
    cout << endl;
    
    }
    
    return 0;

}