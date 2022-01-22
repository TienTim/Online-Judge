////
////  131 - The Psychic Poker Player.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/29.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Card {
//    int point;
//    char suit;
//};
//
//map<char, int> pointToInt {{'A', 1}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}};
//map<int, string> bestHand {
//    {1, "highest-card"},
//    {2, "one-pair"},
//    {3, "two-pairs"},
//    {4, "three-of-a-kind"},
//    {5, "straight"},
//    {6, "flush"},
//    {7, "full-house"},
//    {8, "four-of-a-kind"},
//    {9, "straight-flush"}
//};
//Card hand[5], desk[5], temp[5];
//vector<vector<Card> > sum;  // combination from 0 to 5 -> 32
//
//void inputCard(string s, Card &c) {
//    char firstChar = s[0];
//    c.point = isalpha(firstChar) ? pointToInt[firstChar] : firstChar - '0';
//    c.suit = s[1];
//}
//
//void structure(int keepedCards, int handCur, int tempCur) {
//    if (keepedCards == 0) {
//        for (int i=tempCur; i<5; i++) {
//            temp[i] = desk[i-tempCur];
//        }
//        vector<Card> t;
//        for (int i=0; i<5; i++) {
//            t.push_back(temp[i]);
//        }
//        sum.push_back(t);
//        return;
//    }
//    for (int i=handCur; i<=5-keepedCards; i++) {
//        temp[tempCur] = hand[i];
//        structure(keepedCards-1, i+1, tempCur+1);
//    }
//}
//
//int solve(vector<Card> cards) {
//    int straight = 0;
//    int points[5] = {0};
//    int pointCount[14] = {0};
//    for (int i=0; i<5; i++) {
//        points[i] = cards[i].point;
//        pointCount[cards[i].point]++;
//    }
//    sort(points, points+5);
//    if ((points[4]-points[3]==1 &&
//         points[3]-points[2]==1 &&
//         points[2]-points[1]==1 &&
//         points[1]-points[0]==1) ||
//        (points[0]==1 && points[1]==10 &&
//         points[2]==11 && points[3]==12 &&
//         points[4]==13)) {
//        straight = 1;
//    }
//    int flush = 1;
//    for (int i=1; i<5; i++) {
//        flush = flush && cards[i].suit == cards[0].suit;
//    }
//    if (flush && straight) return 9;
//    int four = 0, three = 0, two = 0;
//    for (int i=1; i<14; i++) {
//        two += pointCount[i] == 2;
//        three += pointCount[i] == 3;
//        four += pointCount[i] == 4;
//    }
//    if (four) return 8;
//    if (three && two) return 7;
//    if (flush) return 6;
//    if (straight) return 5;
//    if (three) return 4;
//    if (two == 2) return 3;
//    if (two) return 2;
//    return 1;
//}
//
//int main() {
//    string s;
//    while (cin >> s) {
//        cout << "Hand: ";
//        cout << s << ' ';
//        inputCard(s, hand[0]);
//        for (int i=1; i<5; i++) {
//            cin >> s;
//            cout << s << ' ';
//            inputCard(s, hand[i]);
//        }
//        cout << "Deck: ";
//        for (int i=0; i<5; i++) {
//            cin >> s;
//            cout << s << ' ';
//            inputCard(s, desk[i]);
//        }
//        sum.clear();
//        for (int i=0; i<=5; i++) {
//            structure(i, 0, 0);
//        }
//        int best = 1;
//        for (vector<Card> i: sum) {
//            best = max(best, solve(i));
//        }
//        cout << "Best hand: " << bestHand[best] << endl;
//    }
//}
