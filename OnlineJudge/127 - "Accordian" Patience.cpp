////
////  127 - "Accordian" Patience.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/17.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    string s;
//    while (cin >> s && s != "#") {
//        vector<string> pile(1, s);
//        vector<vector<string> > piles(1, pile);
//        for (int i=0; i<51; i++) {
//            cin >> s;
//            pile.clear();
//            pile.push_back(s);
//            piles.push_back(pile);
//            bool makeMove = true;
//            while (makeMove) {
//                makeMove = false;
//                for (int j=1; j<piles.size(); j++) {
//                    string top = piles[j].back();
//                    if (j>2 && (top[0] == piles[j-3].back()[0] || top[1] == piles[j-3].back()[1])) {
//                        piles[j-3].push_back(top);
//                        piles[j].pop_back();
//                        makeMove = true;
//                        break;
//                    } else if (top[0] == piles[j-1].back()[0] || top[1] == piles[j-1].back()[1]) {
//                        piles[j-1].push_back(top);
//                        piles[j].pop_back();
//                        makeMove = true;
//                        break;
//                    }
//                }
//                if (makeMove) {
//                    for (int j=0; j<piles.size(); j++) {
//                        if (piles[j].empty()) {
//                            piles.erase(piles.begin()+j);
//                        }
//                    }
//                }
//            }
//        }
//        cout << piles.size() << (piles.size() == 1 ? " pile" : " piles") << " remaining:";
//        for (vector<string> s : piles) {
//            cout << ' ' << s.size();
//        }
//        cout << endl;
//    }
//}
