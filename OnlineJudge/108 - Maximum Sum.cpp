////
////  Maximum Sum.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/6.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    const int MAX_DIM = 101;
//    int a[MAX_DIM][MAX_DIM];
//    for (int i=1; i<=n; i++) {
//        for (int j=1; j<=n; j++) {
//            cin >> a[i][j];
//        }
//    }
//    int r = INT16_MIN;
//    int sumRectangle[MAX_DIM][MAX_DIM] = {0};
//    for (int i=1; i<=n; i++) {
//        for (int j=1; j<=n; j++) {
//            sumRectangle[i][j] = sumRectangle[i-1][j] + sumRectangle[i][j-1] + a[i][j] - sumRectangle[i-1][j-1];
//        }
//    }
//    for (int i=1; i<=n; i++) {
//        for (int j=1; j<=n; j++) {
//            for (int k=0; k<i; k++) {
//                for (int m=0; m<j; ++m) {
//                    int subRectangle = sumRectangle[i][j] - sumRectangle[k][j] - sumRectangle[i][m] + sumRectangle[k][m];
//                    r = max(r, subRectangle);
//                }
//            }
//        }
//    }
//    cout << r << endl;
//}
