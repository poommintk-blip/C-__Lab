#include <iostream>
using namespace std;

int main() {
    int scores[2][5];
    int i, j, sumcolumns[5];

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
        cout << sumcolumns[i] << " ";
    }

    return 0;

}