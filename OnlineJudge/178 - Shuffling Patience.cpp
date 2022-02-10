////
////  178 - Shuffling Patience.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/9.
////
//
//#include <iostream>
//#include <set>
//#include <iomanip>
//#include <map>
//#include <sstream>
//using namespace std;
//
//string pileTop[16];
//int pileSize[16] = {0}, pileNo = 0, cover[3], coverNo = 0, cards[16], cardNo = 0;
//map<char, int> faces = {{'A', 1}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}};
//
//bool checkDesk() {
//    set<int> cardSet;
//    for (int i=0; i<pileNo; i++) {
//        char face = pileTop[i].front();
//        cards[i] = isdigit(face) ? face - '0' : faces[face];
//        cardSet.insert(cards[i]);
//    }
//    for (int i=0; i<pileNo; i++) {
//        if (cards[i] < 11) {
//            int pair = 11 - cards[i];
//            if (!cardSet.count(pair))
//                continue;
//            cover[coverNo++] = i;
//            for (int j=i+1; j<pileNo; j++) {
//                if (pair == cards[j]) {
//                    cover[coverNo++] = j;
//                    return true;
//                }
//            }
//        }
//        int triple[3] = {11, 12, 13};   // J Q K
//        triple[cards[i] - 11] = 0;  // set card to 0 for not check
//        bool exist = true;
//        for (int j=0; j<3; j++)
//            exist &= !triple[j] || cardSet.count(triple[j]);
//        if (!exist)
//            continue;
//        cover[coverNo++] = i;
//        for (int j=i+1; j<pileNo; j++) {
//            int all = true;
//            for (int k=0; k<3; k++) {
//                if (cards[j] == triple[k]) {
//                    cover[coverNo++] = j;
//                    triple[k] = 0;
//                }
//                all &= !triple[k];  // check after change value
//            }
//            if (all)
//                return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    string s, v;
//    int deskNo = 0, w = 4;
//    while (getline(cin, s) && s != "#") {
//        // must cin all card because of overflow case
//        if (--w) {
//            v += s + " ";
//            continue;
//        }
//        v += s;
//        stringstream ss(v);
//        v = "";
//        w = 4;
//        while (ss >> s) {
//            cardNo++;
//            if (pileNo == 16)
//                break;
//            pileTop[pileNo] = s;
//            pileSize[pileNo++]++;   // expand pile size then enlarge pile number
//            while (checkDesk()) {   // cover all pair and triple
//                int coverSize = coverNo;
//                while (coverNo && ss >> s) {
//                    cardNo++;
//                    int pileIdx = cover[coverSize-coverNo]; // index increase 0, 1, ...
//                    coverNo--;
//                    pileTop[pileIdx] = s;    // add to top of pile
//                    pileSize[pileIdx]++;
//                }
//                if (cardNo == 52)   // outer loop also break because entire deal
//                    break;
//            }
//        }
//        cout << setw(3) << ++deskNo << ':';
//        if (cardNo != 52)
//            cout << " Overflowed on card no" << setw(3) << cardNo;
//        else
//            for (int i=0; i<pileNo; i++) {
//                cout << setw(3) << pileSize[i];
//            }
//        cout << endl;
//        // reset
//        for (int i=0; i<pileNo; i++) {
//            pileSize[i] = 0;
//        }
//        pileNo = 0;
//        cardNo = 0;
//        coverNo = 0;    // play entire desk
//    }
//}
//
