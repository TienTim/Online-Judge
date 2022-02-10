////
////  170 - Clock Patience.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/4.
////
//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
//using namespace std;
//
//char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
//
//int main() {
//    string s;
//    while (cin >> s && s != "#") {
//        string cards[52];
//        cards[0] = s;
//        for (int i=1; i<52; i++) {
//            cin >> cards[i];
//        }
//        vector<string> piles[13];
//        int n=0;
//        for (int i=51; i>=0; i--) {
//            n %= 13;
//            piles[n].push_back(cards[i]);
//            n++;
//        }
//        int currentPile = 12;   // K - 1
//        n = 0;
//        string card;
//        while (!piles[currentPile].empty()) {
//            n++;
//            card = piles[currentPile].back();
////            piles[currentPile].pop_back();
//            currentPile = find(ranks, ranks + 13, card[0]) - ranks;
//        }
//        cout << setw(2) << setfill('0') << n << ',' << card << endl;
//    }
//}
//
