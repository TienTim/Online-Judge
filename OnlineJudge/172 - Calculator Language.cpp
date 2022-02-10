////
////  172 - Calculator Language.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/5.
////
//
//#include <iostream>
//#include <map>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//string stack[100];
//map<string, int> preState;
//map<string, int> currentState;
//int idx, param;
//bool isNewParam;
//string s, t;
//
//void reduce() {
//    if (isNewParam) {
//        isNewParam = false;
//        string t = stack[idx--];
//        param = isalpha(t.front()) ? currentState[t] : stoi(t);
//    }
//    string sym = stack[idx];
//    if (sym != "(") // keep for replace later
//        idx--;
//    if (sym == "=") {
//        currentState[stack[idx--]] = param;
//    } else if (sym != "(") {    // if open parenthesis do nothing
//        t = stack[idx--];
//        int operand = isalpha(t.front()) ? currentState[t] : stoi(t);
//        if (sym == "+")
//            operand += param;
//        else if (sym == "-")
//            operand -= param;
//        else if (sym == "*")
//            operand *= param;
//        else
//            operand /= param;
//        param = operand;
//    }
//}
//
//int main() {
//    while (getline(cin, s) && s != "#") {
//        idx = -1;   // idx = len - 1
//        stringstream ss(s);
//        char c;
//        s = "";
//        while (ss >> c) {
//            if (isdigit(c) || c == '_') {   // number
//                s += c != '_' ? c : '-';
//                continue;
//            }
//            if (s.length()) {   // push back number
//                stack[++idx] = s;
//                s = "";
//            }
//            if (c != ')') {
//                t = c;
//                stack[++idx] = t;
//            } else {
//                isNewParam = true;
//                while (stack[idx] != "(") { // reduce parenthesis
//                    reduce();
//                }
//                stack[idx] = to_string(param);  // replace parenthesis
//            }
//        }
//        if (s.length()) // push back last number
//            stack[++idx] = s;
//        isNewParam = true;
//        while (idx > 0) {   // reduce stack
//            reduce();
//        }
//        idx = 0;    // idx = len
//        for (auto i : currentState) {
//            string key = i.first;
//            int value = i.second;
//            if ((preState.count(key) && preState[key] != value) || (!preState.count(key) && value)) {
//                stack[idx++] = key;
//            }
//            preState[key] = value;
//        }
//        sort(stack, stack + idx);
//        for (int i=0; i<idx; i++) {
//            if (i)
//                cout << ", ";
//            cout << stack[i] << " = " << preState[stack[i]];
//        }
//        if (!idx)
//            cout << "No Change";
//        cout << endl;
//    }
//}
//
