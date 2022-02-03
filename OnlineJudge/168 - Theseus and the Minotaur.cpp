////
////  168 - Theseus and the Minotaur.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/2.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//vector<char> lights;
//char mPos, tPos;
//
//bool isLight(char c) {
//    if (c == tPos)
//        return true;
//    for (char i : lights)
//        if (c == i)
//            return true;
//    return false;
//}
//
//int main() {
//    string s;
//    while (getline(cin, s) && s != "#") {
//        map<char, vector<char>> m;
//        lights.clear();
//        string t = s.substr(0, s.find("."));
//        while (true) {
//            int npos = t.find(";");
//            string u = t.substr(0, npos);
//            t = t.substr(npos+1);
//            char key, value;
//            stringstream ss(u);
//            ss >> key >> value;
//            while (ss >> value) {
//                m[key].push_back(value);
//            }
//            if (npos == -1) // last vertex
//                break;
//        }
//        stringstream ss(s.substr(s.find(".")+1));
//        int k;
//        ss >> mPos >> tPos >> k;
//        int n = 0;
//        while (true) {
//            if (n == k) {
//                lights.push_back(tPos);
//                n = 0;
//            }
//            n++;
//            char nextMPos = 0;
//            bool isTrapped = true;
//            for (char i : m[mPos]) {
//                isTrapped &= isLight(i);
//                if (isLight(i))
//                    continue;
//                if (!nextMPos)
//                    nextMPos = i;
//            }
//            if (isTrapped)
//                break;
//            tPos = mPos;
//            mPos = nextMPos;
//        }
//        for (char c : lights) {
//            cout << c << ' ';
//        }
//        cout << '/' << mPos << endl;
//    }
//}
//
