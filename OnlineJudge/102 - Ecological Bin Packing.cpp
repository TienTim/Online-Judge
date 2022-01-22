////
////  Ecological Bin Packing.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/2/26.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[10];
//    const string COLORS = " BGC";
//    while (cin >> a[1]) {
//        for (int i=2; i<=9; ++i) {
//            cin >> a[i];
//        }
//        int minMove = INT32_MAX;
//        string r = "";
//        for (int i=1; i<=3; ++i) {
//            int moveLastTwo = a[3+i] + a[6+i];
//            for (int j=1; j<=3; ++j) {
//                if (j == i) continue;
//                int addMoveFirstThird = moveLastTwo + a[j] + a[6+j];
//                for (int k=1; k<=3; ++k) {
//                    if (k == i || k == j) continue;
//                    int addMoveFirstTwo = addMoveFirstThird + a[k] + a[3+k];
//                    if (minMove >= addMoveFirstTwo) {
//                        string temp = "";
//                        temp += COLORS[i];
//                        temp += COLORS[j];
//                        temp += COLORS[k];
//                        if (minMove > addMoveFirstTwo || r == "" || r > temp)
//                            r = temp;
//                        minMove = addMoveFirstTwo;
//                    }
//                }
//            }
//        }
//        
//        cout << r << ' ' << minMove << endl;
//    }
//}
