////
////  151 - Power Crisis.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/23.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    while (cin >> n && n) {
//        for (int i=1; i<=n; i++) {
//            int len = n-1;
//            int stations[len];
////            remove 1
//            for (int j=2; j<len+2; j++) {
//                stations[j-2] = j;
//            }
//            int lastPos = 0;
//            bool flag = false;
//            while (true) {
//                if (stations[0] == 13 && len == 1) {
//                    flag = true;
//                    break;
//                }
//                lastPos += i-1; // step after delete
//                lastPos %= len;
//                if (stations[lastPos] == 13) {
//                    break;
//                }
//                len--;
//                for (int j=lastPos; j<len; j++) {
//                    stations[j] = stations[j+1];
//                }
//            }
//            if (flag) {
//                cout << i << endl;
//                break;
//            }
//        }
//    }
//}
//
