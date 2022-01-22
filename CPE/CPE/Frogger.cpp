#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/*
double fH(int a[], int b[], int x, double r, int n) {
    if (x==1) {
        return r;
    } else {
        double t=INT16_MAX;
        int y=x;
        for (int i=0; i<n; ++i) {
            if (a[i] ==-1 || i==x)
                continue;
            double q =sqrt(pow((double)a[i]-(double)a[x], 2) + pow((double)b[i]-(double)b[x], 2));
            if (q < t) {
                t = q;
                y = i;
            }
        }
        a[x] = -1;
        b[x]=-1;
        cout << y << ' ' << max(r, t) << endl;
        return fH(a, b, y, max(r, t), n);
    }
}

int main() {
    int j=0;
    int n;
    while (cin >> n && n!=0) {
        ++j;
        int a[200] = {-1};
        int b[200] = {-1};
        for (int i=0; i<n; ++i) {
            cin >> a[i] >> b[i];
        }
        cout << fixed << setprecision(3);
        cout << "Scenario #" << j << endl;
        cout << "Frog Distance = " << fH(a, b, 0, 0, n) << endl;
        cout << endl;
         
    }
    return 0;
}
*/
