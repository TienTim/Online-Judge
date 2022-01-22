////
////  128 - Software CRC.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/17.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    string s;
//    const int g = 34943;
//    while (getline(cin, s) && s != "#") {
//        if (s.length() == 0) {
//            cout << "00 00" << endl;
//            continue;
//        }
//        long n = s[0];
//        for (int i=1; i<s.size(); i++) {
//            n %= g;
//            n <<= 8;
//            n += s[i];
//        }
//        n <<= 16;
//        n = g - (n%g);
//        string hexNum="";
//        char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
//        while (n>0) {
//            int r = n%16;
//            hexNum = hex[r] + hexNum;
//            n /= 16;
//        }
//        hexNum = string(4-hexNum.length(), '0') + hexNum;
//        cout << hexNum[0] << hexNum[1] << ' ' << hexNum[2] << hexNum[3] << endl;
//    }
//}
