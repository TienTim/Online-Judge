////
////  main.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2020/12/31.
////
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//typedef pair<double, double> cor;
//
//int main(int argc, const char * argv[]) {
//    int n;
//    while (cin >> n) {
//        int x, y;
//        cor *pp = new cor[n];
//        for (int i=0; i<n; ++i) {
//            cin >> x >> y;
//            pair<double, double> p(x, y);
//            pp[i] = p;
//        }
//        double lg = 0;
//        int f = 0;
//        int l = 0;
//        for (int i=0; i<n; ++i) {
//            for (int j=i+1; j<n; ++j) {
//                double t = sqrt(pow(pp[i].first-pp[j].first, 2) + pow(pp[i].second-pp[j].second, 2));
//                if (t>lg) {
//                    lg = t;
//                    f = i;
//                    l = j;
//                }
//            }
//        }
//        double a = pp[l].second-pp[f].second;
//        double b = pp[f].first-pp[l].first;
//        double c = -(a*pp[l].first + b*pp[l].second);
//        double h = 0;
//        double k = 0;
//        for (int i=0; i<n; ++i) {
//            double t = (a*pp[i].first + b*pp[i].second + c)/sqrt(a*a + b*b);
//            if (t>h)
//                h = t;
//            if (t<k)
//                k = t;
//        }
//        cout << fixed << setprecision(1) << ((h+abs(k))*lg/2) << endl;
//    }
//    return 0;
//}
