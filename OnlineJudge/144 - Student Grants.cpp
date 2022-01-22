////
////  144 - Student Grants.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/20.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int n, k;
//    while (cin >> n >> k && n && k) {
//        int grant[n];
//        for (int i=0; i<n; i++) {
//            grant[i] = 40;
//        }
//        int store = 0;
//        int currentPerson = 0;
//        int countCompleted = 0;
//        while (true) {
//            store++;
//            while (!grant[currentPerson])
//                currentPerson = (currentPerson+1)%n;
//            if (grant[currentPerson] > store) {
//                grant[currentPerson] -= store;
//                currentPerson = (currentPerson+1)%n;
//            } else {
//                int t = store;
//                while (t > 0) {
//                    if (countCompleted == n)
//                        break;
//                    while (!grant[currentPerson])
//                        currentPerson = (currentPerson+1)%n;
//                    if (grant[currentPerson] <= t) {
//                        t -= grant[currentPerson];
//                        grant[currentPerson] = 0;
//                        cout << setw(3) << right << currentPerson+1;
//                        countCompleted++;
//                    } else {
//                        grant[currentPerson] -= t;
//                        t = 0;
//                    }
//                    currentPerson = (currentPerson+1)%n;
//                }
//            }
//            if (countCompleted == n) {
//                cout << endl;
//                break;
//            }
//            if (store == k)
//                store = 0;
//        }
//        
//    }
//}
