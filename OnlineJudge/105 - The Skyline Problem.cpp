////
////  The Skyline Problem.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/5.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int leftCoordinate, height, rightCoordinate;
//    const int MAX_COORDINATE = 20000; // unit is 0.5
//    int skyline[MAX_COORDINATE] = {0};
//    vector<int> r;
//    while (cin >> leftCoordinate >> height >> rightCoordinate) {
//        for (int i=leftCoordinate; i<=rightCoordinate; i++) {
//            if (skyline[2*i] < height) {
//                skyline[2*i] = height;
//            }
//            if (i != rightCoordinate && skyline[2*i+1] < height) {
//                skyline[2*i+1] = height;
//            }
//        }
//    }
//    int heightTracking = 0;
//    for (int i=0; i<=MAX_COORDINATE; ++i) {
//        if (heightTracking != skyline[i]) {
//            r.push_back(heightTracking < skyline[i] ? i/2 : (i-1)/2);
//            heightTracking = skyline[i];
//            r.push_back(heightTracking);
//        }
//    }
//    for (int i = 0; i<r.size()-1; i++) {
//        cout << r[i] << ' ';
//    }
//    cout << r.back() << endl;
//}
