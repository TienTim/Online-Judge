////
////  174 - Strategy.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/7.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//string programs[10];
//int n = 0;
//string memories[2][2], firstStrategy, secondStrategy;
//const string CHEAT = "CHEAT", TRADE = "TRADE", NONE = "NULL", IF = "IF",
//THEN = "THEN", ELSE = "ELSE", AND = "AND", OR = "OR", MY = "MY";
//
//void reduceStatement(string stat, bool isPlayerOne) {
//    while (stat.rfind(IF) != -1) {  // find from right
//        int pos = stat.rfind(IF);
//        string ifStat = stat.substr(pos+2);
//        stat = !pos ? "" : stat.substr(0, pos);
//        pos = ifStat.rfind(ELSE);
//        string elseStat = ifStat.find(ELSE) != pos ? ifStat.substr(pos) : "";  // find multiple else
//        pos = ifStat.rfind(THEN);
//        string thenStat = ifStat.substr(pos);
//        string condStat = ifStat.substr(0, pos);
//        bool cond = true, first = true, op = true;  // op save operator back to left condition
//        while (condStat.length()) {
//            int andPos = condStat.rfind(AND);   // < condition > ::= < cond > < op > < condition >
//            int orPos = condStat.rfind(OR);
//            bool andOp = orPos == -1 || (andPos != -1 && andPos > orPos);   // if both then choose last one
//            bool noOp = andPos == -1 && orPos == -1;
//            // reduce condition statement
//            string condStatEle = noOp ? condStat : condStat.substr(andOp ? andPos + 3 : orPos + 2);
//            condStat = noOp ? "" : condStat.substr(0, andOp ? andPos : orPos);
//            // solve condition statement element
//            bool isMine = !condStatEle.find(MY);
//            string *memory = ((isPlayerOne && isMine) || (!isPlayerOne && !isMine)) ? memories[0] : memories[1]; // player 1 memory 0
//            string t = condStatEle.substr(isMine ? 6 : 8);
//            string left = t.front() == '1' ? memory[0] : memory[1];
//            char compare = t[1];
//            string right = t.substr(2);
//            bool equal = left == right;
//            bool condEle = compare == '=' ? equal : !equal;
//            cond = first ? condEle : (op ? condEle && cond : condEle || cond);  // op is the and operator
//            if (first)
//                first = false;
//            op = andOp;
//        }
//        thenStat = thenStat.substr((cond ? thenStat.find(THEN) : thenStat.find(ELSE)) + 4, 5);
//        stat += thenStat + elseStat;    // no else statement -> only command
//    }
//    string &strategy = isPlayerOne ? firstStrategy : secondStrategy;
//    strategy = stat;
//}
//
//int main() {
//    string s = "", t;
//    while (getline(cin, t) && t != "#") {
//        s += t; // begin s = ""
//        if (s.back() == '.') {
//            t = s;
//            s = "";
//            for (char i : t) {
//                if (isalnum(i) || i == '=' || i == '#') // remove all space to uniform program
//                    s += i;
//            }
//            programs[n++] = s;
//            s = "";
//        }
//    }
//    for (int i=0; i<n; i++) {
//        int score = 0;
//        for (int j=0; j<n; j++) {
//            if (i == j)
//                continue;
//            memories[0][0] = NONE;
//            memories[0][1] = NONE;
//            memories[1][0] = NONE;
//            memories[1][1] = NONE;
//            string firstStat = programs[i];
//            string secondStat = programs[j];
//            int times = 10;
//            while (times--) {
//                reduceStatement(firstStat, true);
//                reduceStatement(secondStat, false);
//                // update after reduce
//                memories[0][1] = memories[0][0];
//                memories[0][0] = firstStrategy;
//                memories[1][1] = memories[1][0];
//                memories[1][0] = secondStrategy;
//                // for player 1
//                score += firstStrategy == TRADE ? (secondStrategy == TRADE ? 1 : -2) : (secondStrategy == TRADE ? 2 : -1);
//            }
//        }
//        cout << setw(3) << score << endl;
//    }
//}
//
