#include <iostream>
#include <vector>
using namespace std;
/*
bool fH(int a[], int b[], vector<int> &c, vector<bool> &v, vector<int> &p) {
    if (c.size() == v.size()-1 && p.back()==p[0])
        return true;
    for (int i=2; i<v.size(); ++i) {
        if ((a[i]==p.back() || b[i] ==p.back()) && !v[i]) {
            if (a[i]==p.back())
                p.push_back(b[i]);
            else
                p.push_back(a[i]);
            v[i]=true;
            c.push_back(i);
            if (fH(a, b, c, v, p))
                return true;
            c.pop_back();
            v[i]=false;
            p.pop_back();
        }
    }
    return false;
}

int main() {
    int x;
    int a[1995];
    int b[1995];
    int m=0;
    int n=1;
    while (true) {
        cin >> x;
        if (x!=0) {
            if (m==2) {
                m=0;
                n=1;
            }
            int y, z;
            cin >> y >> z;
            a[z]=x;
            b[z]=y;
            ++n;
        } else {
            ++m;
            if (m==2) {
                vector<bool> v(n, false);
                vector<int> c;
                vector<int> p;
                if (a[1] < b[1]) {
                    p.push_back(a[1]);
                    p.push_back(b[1]);
                } else {
                    p.push_back(b[1]);
                    p.push_back(a[1]);
                }
                c.push_back(1);
                v[1] =true;
                if (fH(a, b, c, v, p)) {
                    cout << c[0];
                    for (int i=1; i<c.size();++i) {
                        cout << ' ' << c[i];
                    }
                    cout << endl;
                } else {
                    cout << "Round trip does not exist." << endl;
                }
                cout << endl;
            }
            if (m==4) {
                break;
            }
        }
    }
    return 0;
}
*/
