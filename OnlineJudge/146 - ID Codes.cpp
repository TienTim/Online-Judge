////
////  146 - ID Codes.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/20.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string s;
//    while (getline(cin, s) && s != "#") {
//        int pos = -1;
//        char cur = '\0';
//        char nextChar = '\0';
//        for (int i=0; i<s.length()-1; i++) {
//            if (s[i] < s[i+1]) {
//                pos = i;
//                cur = s[i];
//                nextChar = s[i];
//            }
//        }
//        if (pos == -1)
//            cout << "No Successor\n";
//        else {
//            int nextPos = 0;
//            for (int i=pos+1; i<s.length(); i++) {
//                if (s[i] > cur) {
//                    if (nextChar == cur || s[i] < nextChar) {
//                        nextChar = s[i];
//                        nextPos = i;
//                    }
//                }
//            }
//            string t = cur + s.substr(pos+1, nextPos-pos-1) + s.substr(nextPos+1, s.length()-nextPos);
//            sort(t.begin(), t.end());
//            cout << s.substr(0, pos) << nextChar << t << endl;
//        }
//    }
//}
//
