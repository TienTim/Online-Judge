////
////  156 - Ananagrams.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/26.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string s;
//    string words[1001];
//    string sortedWords[1001];
//    int n = 0;
//    while (cin >> s && s != "#") {
//        words[n] = s;
//        string t;
//        for (int i=0; i<s.length(); i++) {
//            t += tolower(s[i]);
//        }
//        sort(t.begin(), t.end());
//        sortedWords[n] = t;
//        n++;
//    }
//    string ananagrams[1001];
//    int m = 0;
//    for (int i=0; i<n; i++) {
//        bool unique = true;
//        for (int j=0; j<n; j++) {
//            if (i == j)
//                continue;
//            if (sortedWords[i] == sortedWords[j])
//                unique = false;
//        }
//        if (unique) {
//            ananagrams[m] = words[i];
//            m++;
//        }
//    }
//    sort(ananagrams, ananagrams+m);
//    for (int i=0; i<m; i++) {
//        cout << ananagrams[i] << endl;
//    }
//}
//
