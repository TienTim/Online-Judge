////
////  166 - Making Change.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/2.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int getCoin[101] = {0};    // unit 5c, 5$/5c = 100
//    const int coins[6] = {1, 2, 4, 10, 20, 40};
//    for (int i=0; i<101; i++) {
//        int t = i;
//        for (int j=5; j>=0; j--) {
//            getCoin[i] += t/coins[j];
//            t %= coins[j];
//        }
//    }
//    while (true) {
//        int coinNo[6] = {0};
//        int sum = 0;
//        for (int i=0; i<6; i++) {
//            cin >> coinNo[i];
//            sum += coinNo[i] * coins[i];
//        }
//        if (!sum)   // all 0s
//            break;
//        double t;
//        cin >> t;
//        int trans = (t * 100 + 1) / 5;  // 1 for cast int
//        int payCoin[101] = {0};
//        int upperBound = min(sum, 100);
//        for (int i=trans; i<=upperBound; i++) {
//            int value = i;
//            int coinNoC[6];
//            for (int j=0; j<6; j++) {
//                coinNoC[j] = coinNo[j];
//            }
//            for (int j=5; j>=0; j--) {
//                while (value >= coins[j] && coinNoC[j]) {
//                    value -= coins[j];
//                    payCoin[i]++;
//                    coinNoC[j]--;
//                }
//            }
//            if (value)  // cannot combine coins for value i
//                payCoin[i] = 0;
//        }
//        int ans = 0xffffff;
//        for (int i=trans; i<=upperBound; i++) {
//            if (!payCoin[i])
//                continue;
//            ans = min(ans, payCoin[i] + getCoin[i-trans]);  // pay i then receive i-transaction
//        }
//        cout << setw(3) << ans << endl;
//    }
//}
//
