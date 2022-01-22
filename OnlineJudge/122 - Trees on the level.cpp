////
////  Trees on the level.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/14.
////
//
//#include <iostream>
//#include <sstream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//bool comparePair(pair<int, string> p1, pair<int, string> p2) {
//    string path1 = p1.second;
//    string path2 = p2.second;
//    return path1.length() < path2.length() ||
//         (path1.length() == path2.length() && path1 < path2);
//}
//
//int main() {
//    string s;
//    const int MAX_NODE = 256;
//    pair<int, string> nodes[MAX_NODE];
//    set<string> checkComplete;
//    int m=0;
//    bool isComplete = true;
//    while (cin >> s) {
//        if (s.length() > 2) {
//            stringstream ss(s);
//            char c;
//            int n;
//            ss >> c >> n >> c >> s;
//            s = s.substr(0, s.length()-1);
//            nodes[m] = make_pair(n, s);
//            if (checkComplete.count(s))
//                isComplete = false;
//            else
//                checkComplete.insert(s);
//            m++;
//        } else {
//            if (!isComplete) {
//                cout << "not complete\n";
//            } else {
//                sort(nodes, nodes+m, comparePair);  // m is size
//                for (int i=m-1; i>=0; i--) {
//                    s = nodes[i].second;
//                    s = s.substr(0, s.length()-1);
//                    if (!checkComplete.count(s)) {
//                        cout << "not complete\n";
//                        isComplete = false;
//                        break;
//                    }
//                }
//                if (isComplete) {
//                    for (int i=0; i<m; i++) {
//                        if (i != 0)
//                            cout << ' ';
//                        cout << nodes[i].first;
//                    }
//                    cout << endl;
//                }
//            }
//            m = 0;
//            isComplete = true;
//            checkComplete.clear();
//        }
//    }
//}
