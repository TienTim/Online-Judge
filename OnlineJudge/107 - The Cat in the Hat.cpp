////
////  The Cat in the Hat.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/9.
////
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//    unsigned long long h, workers;
//    while (cin >> h >> workers) {
//        if (workers==0 && h==0)
//            break;
//        for (int n=1; ; n++) {
//            auto cats = 1;
//            auto sumHeight = h;
//            auto height = h;
//            int spawnTime = 0;
//            while (height != 1) {
//                if (height%(n+1) != 0)
//                    break;
//                spawnTime++;
//                height /= n+1;
//                cats += pow(n, spawnTime);
//                sumHeight += pow(n, spawnTime)*height;
//            }
//            if (height == 1 && cats >= workers) {
//                cout << cats-workers << ' ' << sumHeight << endl;
//                break;
//            }
//        }
//    }
//}
