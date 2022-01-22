////
////  Arbitrage.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/8.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    const int MAX_DIM = 20;
//    while (cin >> n) {
//        double a[MAX_DIM][MAX_DIM][MAX_DIM] = {0}; // for floyd-warshall
//        int path[MAX_DIM][MAX_DIM][MAX_DIM] = {0};
//        for (int i=0; i<n; i++) {
//            for (int j=0; j<n; j++) {
//                path[i][j][0] = i;
//                if (i == j) {
//                    a[i][j][0] = 1.0;
//                    continue;
//                }
//                cin >> a[i][j][0];
//            }
//        }
//        for (int l=1; l<n; l++) {   // floyd-warshall algorithm
//            for (int k=0; k<n; k++) {
//                for (int i=0; i<n; i++) {
//                    for (int j=0; j<n; j++) {
//                        double x = a[i][k][l-1]*a[k][j][0];
//                        if (a[i][j][l] < x) {
//                            a[i][j][l] = x;
//                            path[i][j][l] = k;  // depth
//                        }
//                    }
//                }
//            }
//        }
//        bool found = false;
//        for (int l=1; l<n && !found; l++) {
//            for (int i=0; i<n; i++) {
//                if (a[i][i][l] > 1.01) {
//                    vector<int> minLength;
//                    minLength.push_back(path[i][i][l]);
//                    for (int j=l-1; j>=0; j--) {
//                        minLength.push_back(path[i][minLength.back()][j]);
//                    }
//                    int temp = minLength.back();
//                    while (!minLength.empty()) {
//                        cout << minLength.back()+1 << ' ';
//                        minLength.pop_back();
//                    }
//                    cout << temp+1 << endl;
//                    found = true;
//                    break;
//                }
//            }
//        }
//        if (!found)
//            cout << "no arbitrage sequence exists" << endl;
//    }
//    
//}
