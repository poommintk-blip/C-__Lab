#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j, scores[2][5];
    int sumcolumns[5] = {0};

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 5; j++) {
            cin >> scores[i][j];

        }
    }
    for(j = 0; j < 5; j++) {
        sumcolumns[j] = 0;
        for(i = 0; i < 2; i++) {
            sumcolumns[j] += scores[i][j];
        }
    }

    for(j = 0; j < 5; j++) {
        cout << sumcolumns[j] << " ";
    }

    return 0;

}