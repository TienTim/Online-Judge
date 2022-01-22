////
////  Fermat vs.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/8.
////
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int gcd(int a, int b) {
//    return b ? gcd(b, a%b) : a;
//}
//
//int main() {
//    int n;
//    const int MAX_NUM = 1e6;
//    while (cin >> n) {
//        bool flag[MAX_NUM+1] = {false};
//        int count1 = 0;
//        int count2 = 0;
//        for (int a=1; a<=(int)sqrt(n); a++) {
//            for (int b=a+1; a*a+b*b<=n; b++) {
//                if (gcd(a, b) == 1 && a%2 != b%2) {
//                    count1++;
//                    int x = 2*a*b;
//                    int y = b*b-a*a;
//                    int z = b*b+a*a;
//                    for (int k=1; k*z<=n; k++) {
//                        flag[k*x] = flag[k*y] = flag[k*z] = true;
//                    }
//                }
//            }
//        }
//        for (int i=1; i<=n; i++) {
//            count2 += !flag[i];
//        }
//        cout << count1 << ' ' << count2 << endl;
//    }
//}
