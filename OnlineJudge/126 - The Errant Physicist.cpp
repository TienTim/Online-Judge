////
////  The Errant Physicist.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/16.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//string r1, r2;
//
//struct Term {
//    int coef, xExp, yExp;
//};
//
//void getTerm(string s, int &n, Term* terms) {
//    string term;
//    for (int i=0; i<s.length(); i++) {
//        char c = s[i];
//        bool isNewTerm = c == '+' || c == '-';
//        if ((isNewTerm && i) || i == s.length()-1) {
//            string subTerm = "";
//            vector<string> subTerms;
//            if (i == s.length() -1)
//                term += c;
//            for (char j : term) {
//                if (j == 'y' || j == 'x') {
//                    subTerms.push_back(subTerm);
//                    subTerm = "";
//                }
//                subTerm += j;
//            }
//            subTerms.push_back(subTerm);
//            for (string k : subTerms) {
//                char firstChar = k[0];
//                if (firstChar == 'x') {
//                    k = k.substr(1);
//                    terms[n].xExp = k == "" ? 1 : stoi(k);
//                } else if (firstChar == 'y') {
//                    k = k.substr(1);
//                    terms[n].yExp = k == "" ? 1 : stoi(k);
//                } else {
//                    if (k == "-")
//                        terms[n].coef = -1;
//                    else if (k == "+" || k == "")
//                        terms[n].coef = 1;
//                    else
//                        terms[n].coef = stoi(k);
//                }
//            }
//            term = "";
//        }
//        term += c;
//        n += (isNewTerm && i) || i == s.length()-1;
//    }
//}
//
//void buildR2(string is) {
//    r2 += is;
//    r1 += string(is.length(), ' ');
//}
//
//void buildR1(int i) {
//    if (i != 1) {
//        string is = to_string(i);
//        r1 += is;
//        r2 += string(is.length(), ' ');
//    }
//}
//
//int main() {
//    string s;
//    while (cin >> s && s != "#") {
//        const int DIM = 80;
//        Term terms1[DIM] = {};
//        int n=0;
//        getTerm(s, n, terms1);
//        cin >> s;
//        Term terms2[DIM] = {};
//        int m = 0;
//        getTerm(s, m, terms2);
//        const int EX_DIM = 200;
//        int coefficients[EX_DIM][EX_DIM] = {0};
//        int maxX = 0;
//        int maxY = 0;
//        for (int i=0; i<n; i++) {
//            for (int j=0; j<m; j++) {
//                int x = terms1[i].xExp + terms2[j].xExp;
//                int y = terms1[i].yExp + terms2[j].yExp;
//                maxX = max(maxX, x);
//                maxY = max(maxY, y);
//                coefficients[x][y] += terms1[i].coef * terms2[j].coef;
//            }
//        }
//        r1 = "";
//        r2 = "";
//        for (int i=maxX; i>=0; i--) {
//            for (int j=0; j<=maxY; j++) {
//                int coefficient = coefficients[i][j];
//                if (coefficient) {
//                    if (r1 != "")
//                        buildR2(coefficient > 0 ? " + " : " - ");
//                    else if (coefficient < 0)
//                        buildR2("-");
//                    int coefficientAbs = abs(coefficient);
//                    if (i==0 && j==0 && coefficientAbs == 1)
//                        buildR2("1");
//                    else if (coefficientAbs != 1)
//                        buildR2(to_string(coefficientAbs));
//                    if (i>0) {
//                        buildR2("x");
//                        buildR1(i);
//                    }
//                    if (j>0) {
//                        buildR2("y");
//                        buildR1(j);
//                    }
//                }
//            }
//        }
//        cout << r1 << endl << r2 << endl;
//    }
//}
