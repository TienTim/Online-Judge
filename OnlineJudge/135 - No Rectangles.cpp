////
////  135 - No Rectangles.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/12/24.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int k, cases = 0;
//    while(cin >> k) {
//        if(cases++)
//            cout << endl;
//        int m = k-1;
//        for(int i = 0; i < k; i++) {
//            cout << 1;
//            for(int j = 1; j < k; j++)
//                cout << ' ' << i * m + j + 1;
//            cout << endl;
//        }
//        
//        for(int i = 0; i < m; i++) {
//            for(int j = 0; j < m; j++) {
//                cout << i+2;
//                for(int s = 0; s < m; s++) {
////                    cout << '\n' << i << ' ' << j << ' ' << s;
////                    cout << '\n' << (j + s * i)%m << ' ' << s*m << ' ' << K + 1 << endl;
//                    cout << ' ' << (j + s * i)%m + s*m + k + 1;
//                }
//                cout << endl;
//            }
//        }
//    }
//}
