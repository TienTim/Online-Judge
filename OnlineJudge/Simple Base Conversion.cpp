////
////  Simple Base Conversion.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/3/20.
////
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//string b = "0123456789ABCDEF";
//
//void convertFromDecimal(long long int n, int base) {
//    int ss[100];
//    int l = 0;
//    while (n>0) {
//        ss[l] = n%base;
//        n = n/base;
//        ++l;
//    }
//    if (base == 16)
//        cout << "0x";
//    for (int i=l-1; i>=0; --i) {
//        cout << b[ss[i]];
//    }
//    cout << endl;
//}
//
//void convertToDecimal(string s, int base) {
//    if (base == 16)
//        s = s.substr(2, s.length()-2);
//    int r=0;
//    int l = int(s.length())-1;
//    for (int i=l; i>=0; --i) {
//        int a = s[i] >= 'A' && s[i] <='F' ? s[i] - 'A' + 10 : s[i] - '0';
//        r += a * pow(base, l-i);
//    }
//    cout << r << endl;
//}
//
//int main() {
//    string b = "0123456789ABCDEF";
//    string s;
//    while (cin >> s && s[0] != '-') {
//        if (s[0] != '0') {
//            long long int n = stoi(s);
//            convertFromDecimal(n, 16);
//        } else {
//            convertToDecimal(s, 16);
//        }
//    }
//}
