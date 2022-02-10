////
////  173 - Network Wars.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/5.
////
//
//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//using namespace std;
//
//const string PASKILL = "Paskill", LISPER = "Lisper";
//
//map<char, set<char>> graph;
//char pPos, lPos;
//set<char> pVisited, lVisited;
//
//bool isTrapped(string program) {
//    char &pos = program == PASKILL ? pPos : lPos;
//    set<char> &visited = program == PASKILL ? pVisited : lVisited;
//    bool trap = true;
//    int minDist = 0xffffff;
//    char nextPos = pos; // save next position
//    for (char i : graph[pos]) {
//        if (visited.count(i) || (program == PASKILL && lVisited.count(i)))
//            continue;
//        trap = false;
//        int dist = program == PASKILL ? ((i>pos ? i : i+26) - pos) :    // Paskill goes forward
//        ((pos>i ? pos : pos+26) - i);   // Lisper goes backward
//        if (minDist > dist) {
//            nextPos = i;
//            minDist = dist;
//        }
//    }
//    if (!trap) {
//        pos = nextPos;
//        visited.insert(pos);
//    }
//    return trap;
//}
//
//int main() {
//    string s;
//    while (getline(cin, s) && s != "#") {
//        graph.clear();
//        pVisited.clear();
//        lVisited.clear();
//        string t = s.substr(0, s.find("."));
//        while (true) {
//            int pos = t.find(";");
//            string u = t.substr(0, pos);
//            t = t.substr(pos+1);
//            char sNode, node;
//            stringstream ss(u);
//            ss >> sNode >> node;
//            while (ss >> node) {
//                graph[sNode].insert(node);
//                graph[node].insert(sNode);
//            }
//            if (pos == -1) // last vertex
//                break;
//        }
//        stringstream ss(s.substr(s.find(".")+1));
//        ss >> pPos >> lPos;
//        // initialize, cannot insert in function (Paskill escapes)
//        pVisited.insert(pPos);
//        lVisited.insert(lPos);
//        while (true) {
//            if (lPos == pPos) { // check at beginning
//                cout << "Both annihilated in node " << pPos << endl;
//                break;
//            }
//            bool pTrap = false;
//            if (isTrapped(PASKILL)) {
//                cout << PASKILL << " trapped in node " << pPos;
//                pTrap = true;
//            }
//            if (isTrapped(LISPER) || lPos == pPos || pVisited.count(lPos)) {
//                if (pTrap)
//                    cout << ' ';
//                if (lPos == pPos)
//                    cout << "Both annihilated";
//                else
//                    cout << LISPER << (pVisited.count(lPos) ? " destroyed" : " trapped");
//                cout << " in node " << lPos << endl;
//                break;
//            }
//            if (pTrap) {
//                cout << endl;
//                break;
//            }
//        }
//    }
//}
