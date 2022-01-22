#include <iostream>
#include <sstream>
using namespace std;
/*
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        int c =1;
        while (true) {
            string s;
            stringstream ss;
            ss<<a;
            ss>>s;
            reverse(s.begin(), s.end());
            a = a + stoi(s);
            ss.clear();
            ss<<a;
            ss>>s;
            string r = s;
            reverse(r.begin(), r.end());
            if (s == r) {
                cout << c << ' ' << a << endl;
                break;
            }
            c++;
        }
        
    }
    return 0;
}
*/
