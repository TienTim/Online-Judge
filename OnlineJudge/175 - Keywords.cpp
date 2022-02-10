////
////  175 - Keywords.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/6.
////
//
//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//int thresholds[51], profileNo = 1, titleNo = 1;
//vector<string> profiles[51];
//string titles[251], s, t;
//
//bool findTitle(int i, int k) {
//    vector<string> keywords = profiles[i];
//    string keyword = keywords[k];
//    t = s;
//    while (t.find(keyword) != -1) {
//        t = t.substr(t.find(keyword) + keyword.length());
//        stringstream ss(t);
//        int threshold = thresholds[i];
//        string word;
//        while (threshold-- >= 0) { // smallest distance 0
//            ss >> word;
//            for (int j=0; j<keywords.size(); j++)
//                if (j != k && word == keywords[j])
//                    return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    while (getline(cin, s) && s != "#") {
//        if (s.front() == 'P') {
//            stringstream ss(s.substr(3));
//            ss >> thresholds[profileNo];
//            while (ss >> t) {
//                profiles[profileNo].push_back(t);
//            }
//            profileNo++;
//            continue;
//        }
//        if (s.front() == 'T')   // start or add
//            t = s.substr(3);
//        else
//            t += s;
//        if (s.back() != '|')
//            continue;
//        s = "";
//        for (char c : t) {
//            if (isalpha(c) || c == ' ')
//                s += tolower(c);
//        }
//        titles[titleNo] = s;
//        titleNo++;
//    }
//    for (int i=1; i<profileNo; i++) {
//        cout << i << ": ";
//        bool first = true;
//        for (int j=1; j<titleNo; j++) {
//            s = titles[j];
//            for (int k=0; k<profiles[i].size(); k++) {
//                if (findTitle(i, k)) {
//                    if (first)
//                        first = false;
//                    else
//                        cout << ',';
//                    cout << j;
//                    break;
//                }
//            }
//        }
//        cout << endl;
//    }
//}
//
