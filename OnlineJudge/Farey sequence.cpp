////
////  Farey sequence.cpp
////
////  Created by Tien Do on 2021/5/12.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    while (cin >> n) {
//        int a=0, b=1, c=1, d=n;
//        cout << a << '/' << b << ' ';
//        while (c <= n) {
//            int k = (n+b)/d, t1 = a, t2 = b;
//            a = c;
//            b = d;
//            c = k*c-t1;
//            d = k*d-t2;
//            cout << a << '/' << b << ' ';
//        }
//        cout << endl;
//    }
//}
