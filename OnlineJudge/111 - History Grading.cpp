////
////  History Grading.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/9.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//int main() {
//    int m;
//    int n = 0;
//    const int MAX_DIM = 21;
//    map<int, int> order;
//    int seq[MAX_DIM];
//    char c = '\n';
//    int id = 0;
//    while (cin >> m) {
//        char t = getchar();
//        if (c == '\n' && t == '\n') {
//            n = m;
//            order.clear();
//            for (int i=1; i<=n; i++) {
//                cin >> m;
//                order[i] = m;
//            }
//            continue;
//        }
//        c = t;
//        seq[m] = ++id;
//        if (c == '\n') {
//            for (int i=1; i<=n; i++) {
//                seq[i] = order[seq[i]];
//            }
//            int r = 0;
//            vector<int> dp(MAX_DIM, 1);
//            for (int i=2; i<=n; i++) {
//                for (int j=1; j<i; j++) {
//                    if (seq[i] > seq[j])
//                        dp[i] = max(dp[i], dp[j]+1);
//                }
//                r = max(r, dp[i]);
//            }
//            cout << r << endl;
//            id = 0;
//        }
//    }
//}
