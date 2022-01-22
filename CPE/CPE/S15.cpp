////
////  S15.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/15.
////
//
//#include <iostream>
//using namespace std;
//
//void gD(string &in, string &iI) {
//    string s;
//    while (getline(cin, s) && s != "!@#$%") {
//        string t;
//        for (int i=0; i<s.length(); ++i) {
//            if (s[i] != ' ' && s[i] != '\t') {
//                t += s[i];
//            }
//        }
//        if (t!= "") {
//            in += s;
//            iI += t;
//        }
//    }
//}
//
//int main() {
//    string iC = "y";
//    while (iC == "y" || iC == "Y") {
//        fflush(stdin);
//        string in, ou, iI, oI;
//        gD(in, iI);
//        gD(ou, oI);
//        if (iI == oI) {
//            if (in == ou) {
//                cout << "R" << endl;
//            } else {
//                cout << "PE" << endl;
//            }
//        } else {
//            cout << "W" << endl;
//        }
//        cout << "Continue? ";
//        cin >> iC;
//    }
//}
