////
////  S11.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/15.
////
//
//#include <iostream>
//#include <ctime>
//#include <iomanip>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//struct acc {
//    string fn;
//    string ln;
//    double b;
//    time_t t;
//};
//
//void r() {
//    ifstream f("f.txt");
//    if (!f) {
//        cout << "Not exist" << endl;
//        exit(1);
//    }
//    int n=0;
//    acc a;
//    while (f >> a.fn >> a.ln >> a.b >> a.t) {
//        cout << setw(15) << a.fn << setw(15) << a.ln << setw(7) << a.b << ' ' << ctime(&a.t);
//        ++n;
//    }
//    cout << "Number: " << n << endl;
//}
//
//void cR(fstream &f, string fn, string ln, int b) {
//    time_t ct;
//    time(&ct);
//    f << fn << ' ' << ln << ' ' << b << ' ' << ct << endl;
//}
//
//void rD(fstream &f, string n) {
//    f.open(n, ios::in);
//    vector<acc> a;
//    acc c;
//    while (f >> c.fn >> c.ln >> c.b >> c.t) {
//        bool f = false;
//        for (int i=0; i<a.size(); ++i) {
//            if (a[i].fn == c.fn && a[i].ln == c.ln) {
//                f = true;
//                a[i].b = c.b;
//                a[i].t = c.t;
//                break;
//            }
//        }
//        if (!f)
//            a.push_back(c);
//    }
//    f.close();
//    f.open(n, ios::out);
//    for (int i=0; i<a.size(); ++i) {
//        f << a[i].fn << ' ' << a[i].ln << ' ' << a[i].b << ' ' << a[i].t << endl;
//    }
//    f.close();
//}
//
//int main() {
//    string n = "f.txt";
//    fstream f;
//    f.open(n, ios::in);
//    if (f) {
//        cout << "Open " << endl;
//        r();
//    } else {
//        cout << "Create new" << endl;
//    }
//    f.close();
//    f.open(n, ios::app);
//    cout << "Enter: " << endl;
//    string fn, ln;
//    double b;
//    while (cin >> fn >> ln >> b) {
//        cR(f, fn, ln, b);
//    }
//    f.close();
//    rD(f, n);
//    r();
//}
