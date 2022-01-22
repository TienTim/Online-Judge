////
////  147 - Dollars.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/20.
////
//
//#include <iostream>
//#include <iomanip>
//#include "math.h"
//using namespace std;
//
//int main() {
//    double n;
//    int nCol = 11;
//    int coins[] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000}; // 1 is 5c
//    int nRow = 300*100/5;   // $300 max
//    long long dp[nCol][nRow+1];
//    for (int i=0; i<nCol; i++) {
//        dp[i][0] = 1;
//    }
//    for (int j=0; j<nRow+1; j++) {
//        dp[0][j] = 1;
//    }
//    for (int i=1; i<nCol; i++) {
//        for (int j=1; j<nRow+1; j++) {
//            dp[i][j] = dp[i-1][j] + (j - coins[i] < 0 ? 0 : dp[i][j-coins[i]]);
//        }
//    }
//    while (cin >> n && n) {
//        cout << fixed << setprecision(2) << setw(6) << right << n << setw(17) << dp[nCol-1][int(n*20)] << endl;
//    }
//}
//
