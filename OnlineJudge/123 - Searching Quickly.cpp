////
////  Searching Quickly.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/14.
////
//
//#include <iostream>
//#include <sstream>
//#include <map>
//#include <set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string s;
//    vector<string> keywords;
//    set<string> ignore;
//    map<string, vector<string> > m;
//    while (cin >> s && s != "::") {
//        ignore.insert(s);
//    }
//    while (getline(cin, s)) {
//        string t;
//        for (char i : s) {
//            t += tolower(i);
//        }
//        stringstream ss(t);
//        vector<string> words;
//        while (ss >> s) {
//            words.push_back(s);
//        }
//        for (int i=0; i<words.size(); i++) {
//            string word = words[i];
//            if (ignore.count(word))
//                continue;
//            keywords.push_back(word);
//            t = "";
//            for (int j=0; j<words.size(); j++) {
//                if (j!= 0)
//                    t += " ";
//                if (j != i) {
//                    t += words[j];
//                } else {
//                    s = "";
//                    for (char k : word) {
//                        s += toupper(k);
//                    }
//                    t += s;
//                }
//            }
//            m[word].push_back(t);
//        }
//    }
//    sort(keywords.begin(), keywords.end());
//    for (int i=0; i<keywords.size(); i++) {
//        string word = keywords[i];
//        if (i>0 && keywords[i-1] == word)
//            continue;
//        for (string title : m[word]) {
//            cout << title << endl;
//        }
//    }
//}
