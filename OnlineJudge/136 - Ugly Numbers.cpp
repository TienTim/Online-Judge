////
////  136 - Ugly Numbers.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/12/26.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int dp[1500] = {1};
//    int t2 = 0;
//    int t3 = 0;
//    int t5 = 0;
//    for (int i=1; i<1500; i++) {
//        while (dp[t2]*2 <= dp[i-1])
//            t2++;
//        while (dp[t3]*3 <= dp[i-1])
//            t3++;
//        while (dp[t5]*5 <= dp[i-1])
//            t5++;
//        int tmp = dp[t2]*2;
//        tmp = min(tmp, dp[t3]*3);
//        tmp = min(tmp, dp[t5]*5);
//        dp[i] = tmp;
//    }
//    cout << "The 1500'th ugly number is " << dp[1499] << '.' << endl;
//}
