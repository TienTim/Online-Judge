#include <iostream>
#include <sstream>
using namespace std;
/*
int cD(char c) {
    return c-'0';
}

int dN(string n, int d) {
    int a=cD(n[0]);
    int b=0;
    string r=n.substr(0, 1);
    for (int i=1; i<n.size(); ++i) {
        a +=cD(n[i]);
            if (a >9) {
                if (r.size()==1)
                    r=to_string(a/10);
                else {
                    r.back()+=a/10;
                }
            }
            r+=('0'+b%10);
    }
    b = b%9;
    if (b!=0) {
        return d;
    } else {
        return dN(r, d+1);
    }
}

int main() {
    string n;
    while (cin >> n && n!="0") {
        int d = dN(n, 0);
        if (d==0) {
            cout << n << " is not a multiple of 9." << endl;
        } else {
            cout << n << " is a multiple of 9 and has 9-degree " << d << endl;
        }
    }
    return 0;
}
*/
