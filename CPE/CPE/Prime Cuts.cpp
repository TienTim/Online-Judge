#include <iostream>
using namespace std;
/*
int main() {
    int n, m;
    while (cin >> n >> m) {
        int p[1000];
        int j = 0;
        for (int i=1; i<=n; ++i) {
            bool iP = true;
            for (int k=2; k<i-1; ++k) {
                if (i%k == 0)
                    iP = false;
            }
            if (iP) {
                p[j] = i;
                ++j;
            }
        }
        int s, e;
        if (j>2*m) {
            if (j%2==0) {
                s = j/2-m;
                e = j/2+m;
            } else {
                s = j/2+1-m;
                e = j/2+m;
            }
        } else {
            s = 0;
            e = j;
        }
        cout << n << ' ' << m << ": ";
        for (int i=s; i<e; ++i) {
            cout << p[i] << ' ';
        }
        cout << endl << endl;
    }
    return 0;
}
*/
