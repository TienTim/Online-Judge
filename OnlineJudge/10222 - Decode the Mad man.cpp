////
////  10222 - Decode the Mad man.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/6/13.
////
//
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//    string keyboard = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
//    map<char, char> m;
//    for (int i=0; i<keyboard.length(); i++)
//        m[keyboard[i]] = keyboard[i-2];
//    string s;
//    while (getline(cin, s)) {
//        for (char c : s) {
//            cout << (c == ' ' ? ' ' : m[tolower(c)]);
//        }
//        cout << endl;
//    }
//}
