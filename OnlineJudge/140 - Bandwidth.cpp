////
////  140 - Bandwidth.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/12/29.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int findIdx(vector<char> v, char c) {
//    for (int i=0; i<v.size(); i++) {
//        if (v[i] == c)
//            return i;
//    }
//    return -1;
//}
//
//int main() {
//    string s;
//    while (getline(cin, s) && s != "#") {
//        map<char, vector<char>> adjList;
//        vector<char> nodes;
//        int bandwidth = 0xffff;
//        for (int i=0; i<s.length(); i++) {
//            char key = s[i];
//            if (findIdx(nodes, key) == -1)
//                nodes.push_back(key);
//            i += 2;
//            while (s[i] != ';' && s[i]) {
//                char adj = s[i];
//                if (findIdx(nodes, adj) == -1)
//                    nodes.push_back(adj);
//                adjList[key].push_back(adj);
//                i++;
//            }
//        }
//        sort(nodes.begin(), nodes.end());
//        vector<char> r;
//        do {
//            int maxDis = 0;
//            for (int i=0; i<nodes.size(); i++) {
//                char start = nodes[i];
//                vector<char> v = adjList[start];
//                for (int j=0; j<v.size(); j++) {
//                    char end = v[j];
//                    int dis = abs(findIdx(nodes, start) - findIdx(nodes, end));
//                    maxDis = max(maxDis, dis);
//                }
//            }
//            if (maxDis < bandwidth) {
//                bandwidth = maxDis;
//                r = nodes;
//            }
//        } while (next_permutation(nodes.begin(), nodes.end()));
//        for (int i=0; i<r.size(); i++) {
//            cout << r[i] << ' ';
//        }
//        cout << "-> " << bandwidth << endl;
//    }
//    
//}
