////
////  171 - Car Trialling.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/4.
////
//
//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//string key[11] = {"instruction", "navigational", "directional", "how", "direction",
//    "when", "where", "time − keeping", "record", "change", "cas"};
//vector<string> terms[11] = {
//    {"navigational AND time − keeping", "navigational", "time − keeping"},
//    {"directional", "navigational AND THEN directional", "navigational AND THEN navigational"},
//    {"how direction where", "how direction"},
//    {"GO when", "GO", "KEEP"},
//    {"RIGHT", "LEFT"},
//    {"FIRST", "SECOND", "THIRD"},
//    {"AT sign"},
//    {"record", "change"},
//    {"RECORD TIME"},
//    {"cas TO nnn KMH"},
//    {"CHANGE AVERAGE SPEED", "CAS"},
//};
//unsigned long pos, tPos;
//
//bool isNumber(string word) {
//    for (char c : word)
//        if (!isdigit(c))
//            return false;
//    return true;
//}
//
//bool isSign(string word) {
//    if (!word.length() || word.front() == ' ' || word.back() == ' ')
//        // no space after the opening speech marks or before the closing speech marks.
//        return false;
//    string t = word;
//    while (t.find(".") != -1) { // no space before a period (.)
//        tPos = t.find(".");
//        if (t[tPos-1] == ' ')
//            return false;
//        if (tPos + 1 < t.length())
//            t = t.substr(tPos+1);
//        else
//            break;
//    }
//    for (char c : word)
//        if (!isupper(c) && c != '.' && c != ' ')
//            return false;
//    return true;
//}
//
//int main() {
//    string instruction;
//    bool isTrap;
//    int n = 0;
//    while (getline(cin, instruction) && instruction != "#") {
//        isTrap = false;
//        n++;
//        // eval sign
//        string t = instruction;
//        instruction = "";
//        string signs[75];
//        int m = 0;
//        while (t.find("\"") != -1) {
//            pos = t.find("\"");
//            instruction += t.substr(0, pos);
//            t = t.substr(pos+1);
//            pos = t.find("\"");
//            string sign = t.substr(0, pos);
//            if (pos != -1 && isSign(sign)) {
//                signs[m] = sign;
//                m++;
//                t = t.substr(pos+1);
//                instruction += "sign";
//            } else {
//                isTrap = true;
//                break;
//            }
//        }
//        instruction += t;
//        // remove spaces and eval number
//        stringstream ss(instruction);
//        string original;
//        instruction = "";
//        m = 0;
//        while (ss >> t) {
//            if (original.length()) {
//                original += ' ';
//                instruction += ' ';
//            }
//            original += t != "sign" ? t : ("\"" + signs[m] + "\"");
//            m += t == "sign";
//            if (isNumber(t)) {
//                instruction += "nnn";
//            } else {
//                if (t != "sign")
//                    for (char c : t) {
//                        if (isdigit(c) || islower(c)) {
//                            isTrap = true;
//                            break;
//                        }
//                    }
//                instruction += t;
//            }
//        }
//        // eval rules
//        for (int i=10; i>=0; i--) {
//            for (string term : terms[i]) {
//                while (instruction.find(term) != -1) {
//                    t = instruction;
//                    pos = instruction.find(term);
//                    instruction = t.substr(0, pos);
//                    instruction += key[i];
//                    pos = pos + 1 + term.length();
//                    if (pos < t.length()) {
//                        instruction += ' ';
//                        instruction += t.substr(pos);
//                    }
//                }
//            }
//        }
//        cout << setw(3) << n << ". " << (instruction == "instruction" && !isTrap ? original : "Trap!") << endl;
//    }
//}
//
