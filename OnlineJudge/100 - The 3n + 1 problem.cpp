////
////  100 - The 3n + 1 problem.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/2/23.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, y;
//    while (cin >> x >>  y) {
//        int m = INT32_MIN;
//        for (int i = min(x, y); i <= max(x, y); ++i) {
//            int c = 1;
//            int n = i;
//            while (n != 1) {
//                if ((n & 1) != 0)
//                    n = 3 * n + 1;
//                else
//                    n /= 2;
//                c++;
//            }
//            m = max(c, m);
//        }
//        cout << x << ' ' <<  y << ' ' << m << endl;
//    }
//}
//
