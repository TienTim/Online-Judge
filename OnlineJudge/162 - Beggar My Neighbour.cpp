////
////  162 - Beggar My Neighbour.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/28.
////
//
//#include <iostream>
//#include <iomanip>
//#include <map>
//using namespace std;
//
//string dealer[52], player[52], desk[52];
//int dealerNo, playerNo, deskNo;
//map<char, int> faces = {{'A', 4}, {'K', 3}, {'Q', 2}, {'J', 1}};
//char suit;
//
//void play(bool dealerTurn) {
//    int &cardNo = dealerTurn ? dealerNo : playerNo;
//    cardNo--;
//    desk[deskNo] = dealerTurn ? dealer[dealerNo] : player[playerNo];
//    suit = desk[deskNo][1];
//    deskNo++;
//}
//
//int main() {
//    string s;
//    while (cin >> s && s != "#") {
//        player[0] = s;
//        dealerNo = 26;
//        playerNo = 26;
//        deskNo = 0;
//        for (int i=1; i<52; i++) {
//            cin >> (i%2 ? dealer[i/2] : player[i/2]);
//        }
//        bool dealerTurn = false;    // first player turn
//        while ((dealerNo || !dealerTurn) && (playerNo || dealerTurn)) { // De Morgan
//            play(dealerTurn);
//            dealerTurn ^= 1;
//            if (suit != 'A' && suit != 'K' && suit != 'Q' && suit != 'J')
//                continue;
//            int cover = faces[suit];
//            while (cover) {
//                if ((!dealerNo && dealerTurn) || (!playerNo && !dealerTurn))
//                    break;
//                play(dealerTurn);
//                if (suit == 'A' || suit == 'K' || suit == 'Q' || suit == 'J') { // De Morgan
//                    dealerTurn ^= 1;
//                    cover = faces[suit];
//                } else
//                    cover--;
//            }
//            if (!cover) {
//                dealerTurn ^= 1;
//                string *cards = dealerTurn ? dealer : player;
//                int &cardNo = dealerTurn ? dealerNo : playerNo;
//                cardNo += deskNo;
//                for (int i=cardNo - 1; i>=0; i--) {
//                    cards[i] = i>=deskNo ? cards[i - deskNo] : desk[deskNo - 1 - i];
//                }
//                deskNo = 0;
//            }
//        }
//        cout << (!dealerTurn ? 1 : 2) << setw(3) << (!dealerTurn ? dealerNo : playerNo) << endl;
//    }
//}
//
