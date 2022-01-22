////
////  S10.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/14.
////
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void cS(string &pW, int &l) {
//    srand(time(0));
//    l = rand()%4 + 1;
//    for (int i=0; i<l; ++i) {
//        pW += 'a' + rand()%26;
//    }
//}
//enum S{L, H, R};
//void eV(string &pW, S &s) {
//    string g;
//    cin >> g;
//    if (pW == g)
//        s = R;
//    else if (g < pW)
//        s = L;
//    else
//        s = H;
//}
//
//int main() {
//    string iC = "y";
//    while (iC == "y" || iC == "Y") {
//        string pW;
//        int l;
//        cS(pW, l);
//        cout << pW << endl;
//        int j=1;
//        S s=L;
//        while (s!=R) {
//            switch (j) {
//                case 1:
//                    cout << "1st: ";
//                    break;
//                case 2:
//                    cout << "2nd: ";
//                    break;
//                case 3:
//                    cout << "3rd: ";
//                    break;
//                default:
//                    cout << j << "th: ";
//                    break;
//            }
//            eV(pW, s);
//            if (s==R) {
//                if (j > ceil(log2(pow(26, l))))
//                    cout << "Not goood" << endl;
//                else
//                    cout << "OK" << endl;
//            }
//            else if (s==L)
//                cout << "L" << endl;
//            else
//                cout << "H" << endl;
//            ++j;
//
//        }
//        cout << "Continue: ";
//        cin >> iC;
//        pW = "";
//        s = L;
//    }
//}
