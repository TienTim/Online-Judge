////
////  139 - Telephone Tangles.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/12/29.
////
//
//#include <iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//
//int main() {
//    const int N = 1e7;
//    string code[N];
//    string country[N];
//    double price[N];
//    string t;
//    int idx = 0;
//    while (getline(cin, t) && t != "000000") {
//        string::size_type c = t.find(' ');
//        code[idx] = t.substr(0, c);
//        string::size_type d = t.find('$');
//        country[idx] = t.substr(c+1, d-c-1);
//        price[idx] = stoi(t.substr(d+1));
//        idx += 1;
//    }
//    while (cin >> t && t != "#") {
//        double duration;
//        cin >> duration;
//        if (t[0] != '0') {
//            cout << left << setw(16) << t << setw(25) << "Local" << right << setw(10) << t << setw(5)
//            << setprecision(0) << fixed << duration << setw(6) << "0.00" << setw(7) << "0.00" << endl;
//            continue;
//        }
//        for (int i=0; i<=idx; i++) {
//            string c = code[i];
//            if (i == idx) {
//                cout << left << setw(16) << t << setw(25) << "Unknown" << right << setw(10) << " " << setw(5)
//                << setprecision(0) << fixed << duration << setw(6) << " " << setw(7) << "-1.00" << endl;
//                break;
//            }
//            if (t.length() < c.length())
//                continue;
//            else if (t.substr(0, c.length()) == c) {
//                double p = price[i]/100;
//                double f = p*duration;
//                string subscribe = t.substr(c.length(), t.length()-c.length());
//                if (t[1] == '0' && (subscribe.length() < 4 || subscribe.length() > 10)) {
//                    continue;
//                } else if (t[1] != '0' && (subscribe.length() < 4 || subscribe.length() > 7)) {
//                    continue;
//                } else
//                    cout << left << setw(16) << t << setw(25) << country[i] << right << setw(10) << subscribe << setw(5)
//                    << setprecision(0) << fixed << duration << setw(6) << setprecision(2) << p << setw(7) << f << endl;
//                break;
//            }
//        }
//    }
//}
