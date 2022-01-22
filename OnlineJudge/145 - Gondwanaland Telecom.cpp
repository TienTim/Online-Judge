////
////  145 - Gondwanaland Telecom.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/20.
////
//
//#include <iostream>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//double charge[5][3] = {
//    {0.1, 0.06, 0.02},
//    {0.25, 0.15, 0.05},
//    {0.53, 0.33, 0.13},
//    {0.87, 0.47, 0.17},
//    {1.44, 0.80, 0.30}
//};
//int dr = 0, er = 0, nr = 0;
//double f = 0.0;
//
//bool isDayRate(int h) {
//    return h >= 8 && h < 18;
//}
//
//bool isEveningRate(int h) {
//    return h >= 18 && h < 22;
//}
//
//bool isNightRate(int h) {
//    return h >= 22 || h < 8;
//}
//
//void cal(int i, char c) {
//    dr += isDayRate(i);
//    er += isEveningRate(i);
//    nr += isNightRate(i);
//    int lev = c-'A';
//    f += isDayRate(i)*charge[lev][0] + isEveningRate(i)*charge[lev][1] + isNightRate(i)*charge[lev][2];
//}
//
//int main() {
//    string s;
//    while (getline(cin, s) && s!= "#") {
//        stringstream ss(s);
//        char c;
//        string n;
//        int startHour, startMin, endHour, endMin;
//        ss >> c >> n >> startHour >> startMin >> endHour >> endMin;
//        int i, j;
//        if (startHour < endHour || (startHour == endHour && startMin < endMin)) {
//            for (i=startHour; i<=endHour; i++) {
//                int maxJ = i==endHour ? endMin : 60;
//                j = i==startHour ? startMin+1 : 1;
//                for (; j<=maxJ; j++) {
//                    cal(i, c);
//                }
//            }
//        } else {
//            for (i=startHour; i<=23; i++) {
//                j = i==startHour ? startMin+1 : 1;
//                for (; j<=60; j++) {
//                    cal(i, c);
//                }
//            }
//            for (i=0; i<=endHour; i++) {
//                int maxJ = i<endHour ? 60 : endMin;
//                for (j=1; j<=maxJ; j++) {
//                    cal(i, c);
//                }
//            }
//        }
//        cout << setw(10) << right << n << setw(6) << dr << setw(6) << er << setw(6) << nr <<
//        setw(3) << c << setw(8) << fixed << setprecision(2) << f << endl;
//        dr = 0;
//        er = 0;
//        nr = 0;
//        f = 0.0;
//    }
//}
//
