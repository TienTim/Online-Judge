////
////  152.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/24.
////
//
//#include <iostream>
//#include "math.h"
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int SIZE = 5001;    // 1 more for "0 0 0", otherwise get wrong answer
//    int x[SIZE], y[SIZE], z[SIZE];
//    int n = 0;
//    while (cin >> x[n] >> y[n] >> z[n] && (x[n] || y[n] || z[n])) {
//        n++;
//    }
//    int histogram[10] = {0};
//    for (int i=0; i<n; i++) {
//        double minDist = 10.0;
//        for (int j=0; j<n; j++) {
//            if (i == j)
//                continue;
//            double dist = sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2) + pow(z[i]-z[j], 2));
//            minDist = min(minDist, dist);
//        }
//        if (minDist < 10)
//            histogram[(int)minDist]++;
//    }
//    for (int i=0; i<10; i++) {
//        cout << setw(4) << histogram[i];
//    }
//    cout << endl;
//}
//
