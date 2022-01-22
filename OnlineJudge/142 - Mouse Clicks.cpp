////
////  142 - Mouse Clicks.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/3.
////
//
//#include <iostream>
//#include <sstream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    string s;
//    pair<int, int> icons[50];
//    int regions[25][4];
//    int obscured[50] = {0};
//    int nPoint = 0;
//    int nRegion = 0;
//    while (getline(cin, s) && s != "#") {
//        stringstream ss(s);
//        char c;
//        ss >> c;
//        int x, y;
//        if (c == 'I') {
//            ss >> x >> y;
//            pair<int, int> p(x, y);
//            icons[nPoint] = p;
//            nPoint++;
//            continue;
//        }
//        if (c == 'R') {
//            for (int i=0; i<4; i++) {
//                ss >> regions[nRegion][i];
//            }
//            nRegion++;
//            continue;
//        }
//        for (int i=0; i<nPoint; i++) {
//            pair<int, int> t = icons[i];
//            for (int j=0; j<nRegion; j++)
//                if (regions[j][0] <= t.first && regions[j][1] <= t.second && regions[j][2] >= t.first && regions[j][3] >= t.second)
//                    obscured[i] = 1;
//        }
//        ss >> x >> y;
//        int re = -1;
//        for (int i=0; i<nRegion; i++) {
//            if (regions[i][0] <= x && regions[i][1] <= y && regions[i][2] >= x && regions[i][3] >= y)
//                re = i;
//        }
//        if (re != -1) {
//            cout << char('A' + re) << endl;
//            continue;
//        }
//        int pt[50];
//        int u = 0;
//        double minDis = 0xffff;
//        for (int i=0; i<nPoint; i++) {
//            if (obscured[i])
//                continue;
//            pair<int, int> t = icons[i];
//            double dis = pow((t.first - x), 2) + pow((t.second - y), 2);
//            if (dis < minDis) {
//                minDis = dis;
//                u = 0;
//            }
//            if (dis <= minDis) {
//                pt[u] = i;
//                u++;
//            }
//        }
//        for (int i=0; i<u; i++) {
//            cout << setw(3) << pt[i] + 1;
//        }
//        cout << endl;
//    }
//}
