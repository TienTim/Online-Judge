////
////  143 - Orchard Trees.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/17.
////
//
//#include <iostream>
//#include <iomanip>
//#include "math.h"
//using namespace std;
//
//double crossProduct(double x1, double y1, double x2, double y2, double x3, double y3) {
//    return (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
//}
//
//bool inTriangle(double x1, double y1, double x2, double y2, double x3, double y3, double i, double j) {
//    if (round(crossProduct(x1, y1, x2, y2, i, j)*crossProduct(x1, y1, x3, y3, i, j)*100)>0)
//        return false;
//    if (round(crossProduct(x2, y2, x1, y1, i, j)*crossProduct(x2, y2, x3, y3, i, j)*100)>0)
//        return false;
//    if (round(crossProduct(x3, y3, x1, y1, i, j)*crossProduct(x3, y3, x2, y2, i, j)*100)>0)
//        return false;
//    return true;
//}
//
//int main() {
//    double x1, y1, x2, y2, x3, y3;
//    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 && (x1 || y1 || x2 || y2 || x3 || y3)) {
//        double minX, minY, maxX, maxY;
//        minX = min(x1, x2);
//        minX = min(minX, x3);
//        minY = min(y1, y2);
//        minY = min(minY, y3);
//        maxX = max(x1, x2);
//        maxX = max(maxX, x3);
//        maxY = max(y1, y2);
//        maxY = max(maxY, y3);
//        int lx = max(ceil(minX), 1.0);
//        int rx = min(maxX, 99.0);
//        int ly = max(ceil(minY), 1.0);
//        int ry = min(maxY, 99.0);
//        int numberOfTree = 0;
//        for (int i=lx; i<=rx; i++) {
//            for (int j=ly; j<=ry; j++) {
//                numberOfTree += inTriangle(x1, y1, x2, y2, x3, y3, i, j);
//            }
//        }
//        cout << setw(4) << right << numberOfTree << endl;
//    }
//}
