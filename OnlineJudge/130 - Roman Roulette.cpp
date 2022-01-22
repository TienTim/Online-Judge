////
////  130 - Roman Roulette.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/29.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, k;
//    while (cin >> n >> k && n != 0 && k != 0) {
//        if (n == 1) {
//            cout << n << endl;
//            continue;
//        }
//        vector<int> people;
//        for (int i=1; i<=n; i++) {
//            people.push_back(i);
//        }
//        for (int i=1; i<=n; i++) {
//            vector<int> remainders = people;
//            int cur = i - 2;    // 1 is 0 index, 1 is count himself
//            while (remainders.size() > 1) {
//                int kill = (cur + k) % remainders.size();
//                auto killIter = remainders.begin() + kill;
//                remainders.erase(killIter);
//                int bury = (kill + k - 1) % remainders.size();
//                remainders.insert(killIter, remainders[bury]);
//                auto lastBurier = remainders.begin() + bury + 1;
//                remainders.erase(lastBurier);
//                cur = bury >= kill ? kill : --kill;
//            }
//            if (remainders.front() == 1) {
//                cout << i << endl;
//                break;
//            }
//        }
//    }
//}
