////
////  Following Orders.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/15.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//map<char, bool> visited;
//map<char, vector<char> > biggers;
//vector<char> chars;
//
//bool isValid(char c) {
//    for (char bigger : biggers[c]) {
//        if (visited[bigger])
//            return false;
//    }
//    return true;
//}
//
//void generateCombination(string comb) { // permutation
//    if (comb.length() == chars.size())
//        cout << comb << endl;
//    for (char c : chars) {
//        if (visited[c])
//            continue;
//        visited[c] = true;
//        if (isValid(c))
//            generateCombination(comb + c);
//        visited[c] = false;
//    }
//}
//
//int main() {
//    char a, b;
//    string s;
//    int i=0;
//    while (getline(cin, s)) {
//        if (i!=0)
//            cout << endl;
//        i++;
//        visited.clear();
//        biggers.clear();
//        chars.clear();
//        stringstream ss(s);
//        while (ss >> a) {
//            chars.push_back(a);
//        }
//        sort(chars.begin(), chars.end());
//        getline(cin, s);
//        ss.clear();
//        ss.str(s);
//        while (ss >> a >> b) {
//            biggers[a].push_back(b);
//        }
//        generateCombination("");
//    }
//}
