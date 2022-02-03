////
////  164 - String Computer.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/30.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//enum Action {copyChar, deleteChar, insertChar, changeChar};
//int dp[21][21];
//Action arg[21][21];
//string s1, s2;
//
//void stackCout(int i, int j) {
//    if (i == 0 && j == 0)
//        return;
//    Action act = arg[i][j];
//    if (act == copyChar) {
//        stackCout(i-1, j-1);
//    } else if (act == deleteChar) {
//        stackCout(i-1, j);
//        cout << 'D' << s1[i-1] << setw(2) << setfill('0') << j+1;   // position relate with s2
//    } else if (act == insertChar) {
//        stackCout(i, j-1);
//        cout << 'I' << s2[j-1] << setw(2) << setfill('0') << j; // char index = dp index - 1
//    } else {
//        stackCout(i-1, j-1);
//        cout << 'C' << s2[j-1] << setw(2) << setfill('0') << j;
//    }
//}
//
//int main() {
//    while (cin >> s1 && s1 != "#") {
//        cin >> s2;
//        for (int i=0; i<=s1.length(); i++) {
//            for (int j=0; j<=s2.length(); j++) {
//                dp[i][j] = 0xffffff;
//            }
//        }
//        dp[0][0] = 0;   // start no action
//        for (int i=0; i<=s1.length(); i++) {
//            for (int j=0; j<=s2.length(); j++) {
//                if (s1[i] == s2[j] && dp[i+1][j+1] > dp[i][j]) {    // if have step
//                    dp[i+1][j+1] = dp[i][j];    // reduce step
//                    arg[i+1][j+1] = copyChar;
//                }
//                if (dp[i+1][j] > dp[i][j] + 1) {    // if have more than 1 step
//                    dp[i+1][j] = dp[i][j] + 1;  // reduce step
//                    arg[i+1][j] = deleteChar;
//                }
//                if (dp[i][j+1] > dp[i][j] + 1) {
//                    dp[i][j+1] = dp[i][j] + 1;
//                    arg[i][j+1] = insertChar;
//                }
//                if (dp[i+1][j+1] > dp[i][j] + 1) {
//                    dp[i+1][j+1] = dp[i][j] + 1;
//                    arg[i+1][j+1] = changeChar;
//                }
//            }
//        }
//        stackCout(s1.length(), s2.length());
//        cout << 'E' << endl;
//    }
//}
//
