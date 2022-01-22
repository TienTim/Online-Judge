////
////  S9.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/14.
////
//
//#include <iostream>
//using namespace std;
//
//int rD() {
//    int d1 = rand()%6 + 1;
//    int d2 = rand()%6 +1;
//    return d1+d2;
//}
//
//string cF() {
//    enum S{W, L, C};
//    S s;
//    int n = rD();
//    switch (n) {
//        case 7:
//        case 8:
//        case 9:
//        case 10:
//        case 11:
//            s = W;
//            break;
//        case 2:
//        case 3:
//        case 12:
//            s = L;
//            break;
//        default:
//            s = C;
//            break;
//    }
//    while (s == C) {
//        int m = rD();
//        if (m==n) {
//            s = W;
//        } else if (m == 7) {
//            s = L;
//        }
//    }
//    return s==W ? "W" : "L";
//}
//
//int main() {
//    int n;
//    cout << "Number: ";
//    cin >> n;
//    string iC = "y";
//    double mP=0;
//    while (iC == "y" || iC == "Y") {
//        int p=0;
//        for (int i=0; i<n; i++) {
//            p += cF() == "W";
//        }
//        double q = double(p)/n;
//        cout << "Win: " << p << " Probability: " << q << endl;
//        mP = max(mP, q);
//        cout << "Continue: ";
//        cin >> iC;
//    }
//    cout << "Max: " << mP << endl;
//}
