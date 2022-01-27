////
////  157 - Route Finding.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/26.
////
//
//#include <iostream>
//#include <map>
//#include <set>
//#include <iomanip>
//using namespace std;
//
//map<string, set<string>> m;
//void dijsktra(string source, string dest) {
//    set<string> q;
//    map<string, int> dist;
//    map<string, string> prev;
//    for (auto pair : m) {
//        string v = pair.first;
//        dist[v] = 0xffffff;
//        prev[v] = "";
//        q.insert(v);
//        dist[source] = 0;
//    }
//    while (!q.empty()) {
//        int minDist = 0xffffff;
//        string u;
//        for (string v : q) {
//            if (minDist > dist[v]) {
//                minDist = dist[v];
//                u = v;
//            }
//        }
//        if (dist[dest] == minDist) {
//            cout << setw(3) << minDist << ": ";
//            int i = 0;
//            string p[10000];
//            p[i] = dest;
//            while (true) {
//                if (prev[dest] == "")
//                    break;
//                dest = prev[dest];
//                i++;
//                p[i] = dest;
//            }
//            cout << p[i];
//            for (int j=i-1; j>=0; j--) {
//                char route = p[j][0];
//                char station = p[j][1];
//                if (p[j+1][0] != route)
//                    cout << '=' << route;
//                cout << station;
//            }
//            cout << endl;
//            break;
//        }
////        remove u from q
//        auto iter = q.find(u);
//        if (iter != q.end())
//            q.erase(iter);
//        for (string v : m[u]) {
//            if (q.count(v)) {   // v still in q
//                int alt = dist[u] + (u[0] == v[0] ? 1 : 3);
//                if (alt < dist[v]) {
//                    dist[v] = alt;
//                    prev[v] = u;
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    string s;
//    while (n > 0) {
//        n--;
//        cin >> s;
//        char route = s[0];
//        for (int i=2; i<s.length()-1; i++) {
//            string start, end;
//            start += route;
//            end += route;
//            if (s[i+1] != '=') {
//                start += s[i];
//                end += s[i+1];
//            } else {
//                start += s[i];
//                i++;    // move one forward
//                set<string> alters;
//                while (s[i] == '=') {
//                    alters.insert(s.substr(i+1, 2));
//                    i += 3; // move one alter
//                }
//                if (i < s.length())
//                    end += s[i];
//                for (string u : alters) {
//                    m[start].insert(u);
//                    m[u].insert(start);
////                    connect all alters
//                    for (string v : m[u]) {
//                        bool isAlter = v[0] != u[0];
//                        if (isAlter && v != start) {
//                            m[start].insert(v);
//                            m[v].insert(start);
//                        }
//                    }
//                    for (string v : m[start]) {
//                        bool isAlter = v[0] != start[0];
//                        if (isAlter && v != u) {
//                            m[u].insert(v);
//                            m[v].insert(u);
//                        }
//                    }
//                }
//                i--;    // i++ in for loop
//            }
//            if (end.length() > 1) {   // have end
//                m[start].insert(end);
//                m[end].insert(start);
//            }
//        }
//    }
//    while (cin >> s && s != "#") {
//        dijsktra(s.substr(0, 2), s.substr(2, 2));
//    }
//}
//
