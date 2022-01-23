////
////  147 - Dollars.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/20.
////
//
//#include <iostream>
//#include <sstream>
//#include <set>
//using namespace std;
//
//string dict[2001];
//string phrase;
//int ndict = 0, letter[128], len, ans[2001];
//set<string> words;
//
//void dfs(int ansIdx, int dictIdx) {
//    if (!len) {
//        cout << phrase << " =";
//        for (int i=0; i<ansIdx; i++) {
//            cout << ' ' << dict[ans[i]];
//        }
//        cout << endl;
//        return;
//    }
//    for (; dictIdx<ndict; dictIdx++) {
//        string word = dict[dictIdx];
//        if (words.find(word) != words.end())
//            continue;
//        int flag = true;
//        for (int j=0; j<word.length(); j++) {
//            char c = word[j];
//            letter[c]--;
//            len--;
//            if (letter[c] < 0) {
//                while (j >= 0) {
//                    letter[c]++;
//                    len++;
//                    j--;
//                }
//                flag = false;
//                break;
//            }
//        }
//        if (flag) {
//            ans[ansIdx] = dictIdx;
//            dfs(ansIdx+1, dictIdx+1);
//            for (int j=0; j<word.length(); j++) {
//                letter[word[j]]++;
//                len++;
//            }
//        }
//    }
//}
//
//int main() {
//    while (cin >> dict[ndict] && dict[ndict] != "#") {
//        ndict++;
//    }
//    getline(cin, phrase);
//    while (getline(cin, phrase) && phrase != "#") {
//        stringstream ss(phrase);
//        string word;
//        len = 0;
//        for (int j=0; j<128; j++) {
//            letter[j] = 0;
//        }
//        words.clear();
//        while (ss >> word) {
//            words.insert(word);
//            for (int i=0; i<word.length(); i++) {
//                letter[word[i]]++;
//                len++;
//            }
//        }
//        dfs(0, 0);
//    }
//}
//
