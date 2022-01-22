#include <iostream>
#include <iomanip>
using namespace std;
/*
int main() {
    string s;
    while (cin >> s && s!= "0:00") {
        double h = stoi(s.size()==4? s.substr(0, 1) : s.substr(0, 2));
        double m = stoi(s.size()==4? s.substr(2) : s.substr(3));
        double x = (h+m/60)/12*360;
        double y = m/60*360;
        cout << fixed << setprecision(3);
        double r =abs(x-y);
        cout << (r<=180 ? r : 360-r) << endl;
    }
    return 0;
}
*/
