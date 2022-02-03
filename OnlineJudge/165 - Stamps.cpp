////
////  165 - Stamps.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/31.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int h, k;
//// value table row is value can be maked, column is the stamp
//int valueTable[200][10] = {0};  // 0 is cannot make value, 1 is can make value
//int stamps[10], stampsBuffer[10];
//int ans;
//
//void dfs(int idx, int lastStamp) {
//    bool can = true;
//    int maxI = 0;
//    while (can) {
//        maxI++; // i = 0 always can
//        can = false;
//        for (int j=0; j<=h; j++) {
//            can |= valueTable[maxI][j];
//        }
//    }
//    maxI--; // for last cannot
//    if (idx == k) {
//        if (maxI > ans) {
//            ans = maxI;
//            for (int j=0; j<k; j++) {
//                stamps[j] = stampsBuffer[j];
//            }
//        }
//        return;
//    }
//    for (int i=lastStamp + 1; i<maxI + 2; i++) {    // upper bound j + maxI + 2 creates gap 1
//        int t[200][10]; // stack variable
//        for (int j=0; j<200; j++) {
//            for (int l=0; l<10; l++) {
//                t[j][l] = valueTable[j][l];
//            }
//        }
//        for (int j=0; j<=100; j++) { //  add one stamp i to previous combination
//            for (int l=0; l<h; l++) {
//                if (valueTable[j][l] && !valueTable[j+i][l+1])
//                    valueTable[j+i][l+1] = 1;
//            }
//        }
//        stampsBuffer[idx] = i;
//        dfs(idx+1, i);  // last stamp i
//        for (int j=0; j<200; j++) {
//            for (int l=0; l<10; l++) {
//                valueTable[j][l] = t[j][l];
//            }
//        }
//    }
//}
//
//int main() {
//    while (cin >> h >> k && h && k) {
//        // start initialise
//        for (int i=0; i<200; i++) {
//            for (int j=0; j<10; j++) {
//                valueTable[i][j] = 0;
//            }
//        }
//        ans = 0;
//        valueTable[0][0] = 1;
//        // end initialise
//        dfs(0, 0);
//        for (int i=0 ;i<k ; i++) {
//            cout << setw(3) << stamps[i];
//        }
//        cout << " ->" << setw(3) << ans << endl;
//    }
//}
//
