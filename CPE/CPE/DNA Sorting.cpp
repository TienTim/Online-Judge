#include <iostream>
using namespace std;
/*
int main() {
    int t;
    cin >> t;
    for (int i = 0; i<t; ++i) {
        string l;
        getline(cin, l);
        int n, m;
        cin >> n >> m;
        const int M = 100;
        string s[M];
        int o[M] = {};
        int p[M] = {};
        for (int i=0; i<m; ++i) {
            cin >> s[i];
            l = s[i];
            for (int j=0; j<n; ++j) {
                for (int k=j+1; k<n; ++k) {
                    if (l[j] > l[k])
                        o[i] += 1;
                }
            }
            p[i] = o[i];
        }
        for (int i=0; i<m; ++i) {
            for (int j=i+1; j<m; ++j) {
                if (p[i] > p[j]) {
                    int t = p[i];
                    p[i] = p[j];
                    p[j] = t;
                }
            }
        }
        for (int i=0; i<m; ++i) {
            for (int j=0; j<m; ++j) {
                if (o[j] == p[i]) {
                    cout << s[j] << endl;
                    o[j] = -1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
*/
