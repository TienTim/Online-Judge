////
////  Tree Summing.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/10.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int sumNumbers(vector<int> numbers) {
//    int s=0;
//    for (int i : numbers)
//        s += i;
//    return s;
//}
//
//int main() {
//    int n;
//    while (cin >> n) {
//        int parentheses = 0;    // for count parentheses
//        vector<int> numbers;
//        string t;
//        char c;
//        bool hasNumber = false;
//        int countNotHasNumber = 0;
//        bool found = false;
//        while (cin >> c) {
//            if (isdigit(c) || c == '-')
//                t += c;
//            else if (t.length()>0) {
//                numbers.push_back(stoi(t));
//                hasNumber = true;
//                countNotHasNumber = 0;
//                t = "";
//            }
//            if (c == '(') {
//                parentheses++;
//                hasNumber = false;
//            }
//            if (c == ')') {
//                if (!hasNumber)
//                    countNotHasNumber++;
//                else {
//                    numbers.pop_back();
//                    countNotHasNumber = 0;
//                }
//                if (countNotHasNumber == 2) {
//                    if (n == sumNumbers(numbers)) {
//                        found = true;
//                    }
//                    countNotHasNumber = 0;
//                }
//                parentheses--;
//                hasNumber = true;   // for pop back numbers
//                if (parentheses == 0)   // end of tree
//                    break;
//            }
//        }
//        cout << (found ? "yes" : "no") << endl;
//    }
//}
