////
////  Numbering Paths.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/16.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int m;
//    int city = 0;
//    while (cin >> m) {
//        int n = 0;
//        const int DIM = 30;
//        int dp[DIM][DIM] = {0}; // must be initialized to 0
//        int a, b;
//        for (int i=0; i<m; i++) {
//            cin >> a >> b;
//            dp[a][b] = 1;
//            n = max(n, a);
//            n = max(n, b);
//        }
//        n++;
//        for (int k=0; k<n; k++) {
//            for (int i=0; i<n; i++) {
//                for (int j=0; j<n; j++) {
//                    dp[i][j] += dp[i][k] * dp[k][j];
//                }
//            }
//        }
//        for (int k=0; k<n; k++) {
//            if (dp[k][k])
//                for (int i=0; i<n; i++) {
//                    for (int j=0; j<n; j++) {
//                        if (dp[i][k] && dp[k][j])
//                            dp[i][j] = -1;
//                    }
//                }
//        }
//        cout << "matrix for city " << city++ << endl;
//        for (int i=0; i<n; i++) {
//            for (int j=0; j<n; j++) {
//                if (j)
//                    cout << ' ';
//                cout << dp[i][j];
//            }
//            cout << endl;
//        }
//    }
//}
