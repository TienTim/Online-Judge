////
////  154 - Recycling.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/25.
////
//
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//    string s;
//    const int CITY_SIZE = 101;
//    char r[CITY_SIZE], o[CITY_SIZE], y[CITY_SIZE], g[CITY_SIZE], b[CITY_SIZE];
//    map<char, char*> m = {{'r',r}, {'o',o}, {'y',y}, {'g',g}, {'b',b}};
//    const int BIN_SIZE = 5;
//    string bins[] = {"r", "o", "y", "g", "b"};
//    string wastes[] = {"P", "G", "A", "S", "N"};
//    map<string, int> dist;
//    while (cin >> s && s != "#") {
//        int n = 0;
//        for (int i=0; i<BIN_SIZE; i++) {
//            for (int j=0; j<BIN_SIZE; j++) {
//                dist[bins[i] + wastes[j]] = 0;
//            }
//        }
//        do {
//            for (int i=0; i<BIN_SIZE; i++) {
//                char bin = s[i*4];
//                char waste = s[i*4+2];
//                m[bin][n] = waste;
//                string t;
//                t += bin;
//                t += waste;
//                dist[t]++;
//            }
//            n++;
//        } while (cin >> s &&  s[0] != 'e');
//        int least = 0xffffff;
//        int ans = 0;
//        for (int i=0; i<n; i++) {
//            int sum = n * BIN_SIZE;
//            for (int j=0; j<BIN_SIZE; j++) {
//                string t = bins[j] + m[bins[j][0]][i];
//                sum -= dist[t];
//            }
//            if (least > sum) {
//                least = sum;
//                ans = i;
//            }
//        }
//        cout << ans+1 << endl;
//    }
//}
//
