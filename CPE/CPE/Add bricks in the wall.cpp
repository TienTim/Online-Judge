#include <iostream>
using namespace std;
/*
int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int a[9][9];
        for (int i=0; i<9; i+=2) {
            for (int j=0; j<=i; j+=2) {
                cin >> a[i][j];
                if (i>=2 && j>=2){
                    a[i][j-1] = (a[i-2][j-2]-a[i][j-2]-a[i][j])/2;
                }
            }
            if (i>0) {
                for (int j=0; j<=i-1; ++j) {
                    a[i-1][j] = a[i][j]+a[i][j+1];
                }
            }
        }
        
        for (int i=0; i<9; ++i) {
            for (int j=0; j<=i; ++j)
                cout << a[i][j] << ' ';
            cout << endl;
        }
    }
    
    return 0;
}
*/
