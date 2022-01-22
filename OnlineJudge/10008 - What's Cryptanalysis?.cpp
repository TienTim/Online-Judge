////
////  10008 - What's Cryptanalysis?.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/6/13.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool cmp(pair<char, int> l, pair<char, int> r) {
//    return l.second > r.second ||
//    (l.second == r.second && l.first < r.first);
//}
//
//int main() {
//    int n;
//    cin >> n;
//    map<char , int> m;
//    string s;
//    getline(cin, s);
//    while (n-- > 0) {
//        getline(cin, s);
//        for (char c : s) {
//            if (!isalpha(c)) continue;
//            c = toupper(c);
//            if (m.count(c))
//                m[c]++;
//            else
//                m[c] = 1;
//        }
//    }
//    vector<pair<char, int>> v {m.begin(), m.end()};
//    sort(v.begin(), v.end(), cmp);
//    for (pair<char, int> i : v)
//        cout << i.first << ' ' << i.second << endl;
//}
