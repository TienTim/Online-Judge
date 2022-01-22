////
////  134 - Loglan-A Logical Language.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/6/4.
////
//
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//set<char> vowel {'a', 'e', 'i', 'o', 'u'};
//enum SYMBOL {A, MOD, BA, DA, LA, NAM, PREDA, SE, PC, P, PN, PS, ST, VP, UN};
//static SYMBOL convertTable[14][4] = {
//    {UN, PREDA, UN, PS},
//    {UN, PS, PS, PS},   // after first convert all PREDA become PS
//    {UN, LA, PS, PN},
//    {UN, NAM, UN, PN},
//    {UN, MOD, PS, VP},
//    {UN, PS, UN, P},
//    {P, A, P, P},
//    {UN, DA, P, PC},
//    {PN, BA, P, PC},
//    {PN, VP, UN, ST},   // must convert the previous two parts firstly
//    {UN, ST, PN, ST},
//    {UN, ST, UN, SE},
//    {UN, PC, UN, SE}
//};
//
//SYMBOL wordToSymbol(string s) {
//    if (!vowel.count(s.back()))
//        return NAM;
//    auto len = s.length();
//    switch (len) {
//        case 1:
//            return A;
//            break;
//        case 2:
//            switch (s.front()) {
//                case 'g': return MOD;
//                case 'b': return BA;
//                case 'd': return DA;
//                case 'l': return LA;
//                default: return UN;
//            }
//        case 5:
//            if ((!vowel.count(s[0]) && !vowel.count(s[1]) && vowel.count(s[2]) && !vowel.count(s[3]) && vowel.count(s[4])) ||
//                (!vowel.count(s[0]) && vowel.count(s[1]) && !vowel.count(s[2]) && !vowel.count(s[3]) && vowel.count(s[4])))
//                return PREDA;
//            else
//                return UN;
//        default:
//            return UN;
//            break;
//    }
//}
//
//int main() {
//    string s;
//    vector<SYMBOL> v;
//    while (cin >> s && s != "#") {
//        if (s.back() != '.') {
//            v.push_back(wordToSymbol(s));
//            continue;
//        }
//        v.push_back(wordToSymbol(s.substr(0, s.size() - 1)));
//        for (int i=0; i<14; i++) {
//            SYMBOL *state = convertTable[i];
//            for (int j=0; j<v.size();) {
//                SYMBOL sym = v[j];
//                if (sym != state[1] ||
//                    (state[0] != UN && (j == 0 || v[j-1] != state[0])) ||
//                    (state[2] != UN && (j == v.size()-1 || v[j+1] != state[2]))) {
//                    j++;
//                    continue;
//                }
//                if (state[2] != UN)
//                    v.erase(v.begin() + j + 1);
//                if (state[0] != UN) {
//                    v.erase(v.begin() + j - 1);
//                    j--;
//                }
//                v[j] = state[3];
//            }
//        }
//        cout << (v.size() == 1 && v.back() == SE ? "Good" : "Bad!") << endl;
//        v.clear();
//    }
//}
