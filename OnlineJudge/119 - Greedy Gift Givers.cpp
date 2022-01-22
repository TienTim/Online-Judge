////
////  Greedy Gift Givers.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/13.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//    string s;
//    int n;
//    int count = 0;
//    while (cin >> n) {
//        vector<string> names;
//        map<string, int> r;
//        string name;
//        for (int i=0; i<n; i++) {
//            cin >> name;
//            names.push_back(name);
//            r[name] = 0;
//        }
//        for (int i=0; i<n; i++) {
//            int money, p;
//            cin >> name >> money >> p;
//            if (p != 0) {
//                r[name] -= (money/p)*p;
//                for (int i=0; i<p; i++) {
//                    cin >> name;
//                    r[name] += money/p;
//                }
//            }
//        }
//        if (count != 0)
//            cout << endl;
//        for (string name : names) {
//            cout << name << ' ' << r[name] << endl;
//        }
//        count++;
//    }
//}
