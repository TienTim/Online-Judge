////
////  133 - The Dole Queue.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/6/1.
////
//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int n, k, m;
//    while (cin >> n >> k >> m && n != 0) {
//        vector<int> people;
//        for (int i=1; i<=n; i++) {
//            people.push_back(i);
//        }
//        int first = 0;
//        int second = n-1;
//        int firstMove = k-1;
//        int secondMove = m-1;
//        bool isStart = true;
//        while (!people.empty()) {
//            int firstAdjust = isStart ? 0 : second < first;
//            int secondAdjust = isStart ? 0 : 1 + (first < second);
//            isStart = false;
//            first = first - firstAdjust + firstMove;
//            auto peopleSize = people.size();
//            while (first < 0)
//                first += peopleSize;
//            second = second - secondAdjust - secondMove;
//            while (second < 0)
//                second += peopleSize;
//            first %= peopleSize;
//            second %= peopleSize;
//            auto begin = people.begin();
//            if (first == second) {
//                cout << setw(3) << people[first];
//                people.erase(begin + first);
//            } else {
//                cout << setw(3) << people[first] << setw(3) << people[second];
//                people.erase(begin + max(first, second));
//                people.erase(begin + min(first, second));
//            }
//            cout << (people.empty() ? '\n' : ',');
//        }
//    }
//}
