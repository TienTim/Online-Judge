////
////  155 - All Squares.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/25.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int k, x, y;
//int n = 0;
//int centerX = 1024, centerY = 1024;
//
//void recurseDraw(int centerX, int centerY, int k) {
//    if (k == 0)
//        return;
//    n += centerX-k <= x && centerY-k <= y && centerX+k >= x && centerY+k >= y;
//    recurseDraw(centerX-k, centerY-k, k/2);
//    recurseDraw(centerX-k, centerY+k, k/2);
//    recurseDraw(centerX+k, centerY-k, k/2);
//    recurseDraw(centerX+k, centerY+k, k/2);
//}
//
//int main() {
//    while (cin >> k >> x >> y && (k || x || y)) {
//        n = 0;
////        2k + 1 but ‘k div 2’ and bottom right (2048,2048) -> use int for calculation
//        centerX = 1024;
//        centerY = 1024;
//        recurseDraw(centerX, centerY, k);
//        cout << setw(3) << n << endl;
//    }
//}
//
