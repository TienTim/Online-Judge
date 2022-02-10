////
////  179 - Code Breaking.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/9.
////
//
//#include <iostream>
//#include <algorithm>
//#include <set>
//#include "math.h"
//using namespace std;
//
//int perBuffer[81], per[81], k, patternPos;
//set<int> posSet;
//string p, c1, c2, plaintext, cyphertext;
//bool found;
//
//bool checkK() {
//    if (p.length() % k)   // must be divisible by k
//        return false;
//    int maxDiff = 0;
//    for (int i=0; i<p.length()/k; i++) {
//        string t = p.substr(i*k, k);
//        string v = c1.substr(i*k, k);
//        sort(t.begin(), t.end());
//        sort(v.begin(), v.end());
//        if (t != v) // check all pair k length
//            return false;
//        int diff = 0;
//        for (int j=0; j<k-1; j++) {
//            diff += (t[j] != t[j+1]);
//        }
//        if (diff > maxDiff) {   // the most different characters
//            maxDiff = diff;
//            patternPos = i;
//        }
//    }
//    return true;
//}
//
//bool checkPattern() {
//    for (int i=0; i<c1.length()/k; i++) {
//        string t;
//        string v = c1.substr(i*k, k);
//        for (int j=0; j<v.length(); j++) {
//            t += v[perBuffer[j]];
//        }
//        v = p.substr(i*k, k);
//        if (t != v)
//            return false;
//    }
//    return true;
//}
//
//void dfs(int idx) { // permutation
//    if (found || idx == k) {
//        if (checkPattern()) {
//            found = true;
//            for (int i=0; i<k; i++) {
//                per[i] = perBuffer[i];
//            }
//        }
//        return;
//    }
//    for (int i=0; i<k; i++) {
//        if (plaintext[idx] == cyphertext[i] && !posSet.count(i)) {
//            posSet.insert(i);
//            perBuffer[idx] = i;
//            dfs(idx + 1);
//            posSet.erase(i);
//        }
//    }
//}
//
//int main() {
//    while (getline(cin, p) && p != "#") {
//        getline(cin, c1);
//        found = false;
//        for (int i=2; i<=p.length(); i++) {
//            k = i;
//            if (!checkK())
//                continue;
//            posSet.clear();
//            plaintext = p.substr(patternPos*k, k);
//            cyphertext = c1.substr(patternPos*k, k);
//            dfs(0);
//            if (found)
//                break;
//        }
//        getline(cin, c2);
//        if (!found || p == c1) {
//            cout << c2 << endl;
//            continue;
//        }
//        int l = ceil((double)c2.length()/k);
//        for (int i=0; i<l; i++) {
//            cyphertext = c2.substr(i*k, k);
//            for (int j=0; j<k; j++) {
//                int idx = per[j];
//                cout << (idx < cyphertext.length() ? cyphertext[idx] : '?');
//            }
//        }
//        cout << endl;
//    }
//}
//
