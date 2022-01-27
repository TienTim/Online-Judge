////
////  159 - Word Crosses.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/27.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    string s1, s2, s3, s4;
//    bool f = false;
//    while (cin >> s1 && s1 != "#") {
//        if (f)
//            cout << endl;
//        f = true;
//        cin >> s2 >> s3 >> s4;
//        char c1, c2;
//        int n1 = -1, n2 = -1, n3 = -1, n4 = -1;
//        for (int i=0; i<s1.length(); i++) {
//            c1 = s1[i];
//            n2 = s2.find(c1);
//            if (n2 != -1) {
//                n1 = i;
//                break;
//            }
//        }
//        for (int i=0; i<s3.length(); i++) {
//            c2 = s3[i];
//            n4 = s4.find(c2);
//            if (n4 != -1) {
//                n3 = i;
//                break;
//            }
//        }
//        if (n1 == -1 || n2 == -1 || n3 == -1 || n4 == -1) {
//            cout << "Unable to make two crosses" << endl;
//            continue;
//        }
//        int m = max(n2, n4);
////        top down, height - i -> idx
//        for (int i=m; i>0; i--) {
//            cout << setw(n1+1) << (n2-i >= 0 ? s2[n2-i] : ' ');
//            if (n4-i >= 0)
//                cout << setw(s1.length() - n1 + 3 + n3) << s4[n4-i];
//            cout << endl;
//        }
//        cout << s1 << "   " << s3 << endl;
//        m = max(s2.length()-n2, s4.length()-n4);
////        down top, pos + i -> idx
//        for (int i=1; i<m; i++) {
//            cout << setw(n1+1) << (n2+i < s2.length() ? s2[n2+i] : ' ');
//            if (n4+i < s4.length())
//                cout << setw(s1.length() - n1 + 3 + n3) << s4[n4+i];
//            cout << endl;
//        }
//    }
//}
//
