////
////  160 - Factors and Factorials.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/27.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int n;
//    while (cin >> n && n) {
//        int prime[100] = {0};
//        int dist[100] = {0};
//        int m = 0;
//        for (int i=2; i<=n; i++) {
//            bool f = true;
//            for (int j=2; j<i; j++) {
//                f = f && i%j;
//            }
//            if (f) {
//                prime[m] = i;
//                m++;
//            }
//        }
//        for (int i=2; i<=n; i++) {
//            int t = i;
//            for (int j=0; j<m; j++) {
//                while (!(t % prime[j])) {
//                    dist[j]++;
//                    t /= prime[j];
//                }
//                if (t == 1)
//                    break;
//            }
//        }
//        cout << setw(3) << n << "! =";
//        int j = 0;
//        for (int i=0; i<m; i++) {
//            if (j == 15)
//                cout << endl << setw(6) << ' ';
//            cout << setw(3) << dist[i];
//            j++;
//        }
//        cout << endl;
//    }
//}
//
