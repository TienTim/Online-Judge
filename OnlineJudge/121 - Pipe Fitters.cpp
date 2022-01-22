////
////  Pipe Fitters.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/14.
////
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//    double a, b;
//    while (cin >> a >> b) {
//        int s = 0;
//        double reduceHeight = 1 - 0.5*sqrt(3);
//        int numberRows = (int)((a - reduceHeight) / (1 - reduceHeight));
//        int b1 = (int)b;
//        int sumBySkew = numberRows*b1 - (b-b1 < 0.5) * numberRows/2;
//        s = max(s, sumBySkew);
//        numberRows = (int)((b - reduceHeight) / (1 - reduceHeight));
//        int a1 = (int)a;
//        sumBySkew = numberRows*a1 - (a-a1 < 0.5) * numberRows/2;
//        s = max(s, sumBySkew);
//        if (a1*b1 >= s)
//            cout << a1*b1 << " grid\n";
//        else
//            cout << s << " skew\n";
//    }
//}
