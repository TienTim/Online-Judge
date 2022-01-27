////
////  158 - Calendar.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/27.
////
//
//#include <iostream>
//#include <sstream>
//#include <iomanip>
//#include <map>
//#include <vector>
//using namespace std;
//
//int dateOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//int main() {
//    int year = 0;
//    cin >> year;
//    string s;
//    int n = 0;
//    const int SIZE = 10000;
//    int dates[SIZE], months[SIZE] , priorities[SIZE];
//    string events[SIZE];
//    char c;
//    getline(cin, s);
//    while (getline(cin, s) && s[0] != 'D') {
//        stringstream ss(s);
//        ss >> c >> dates[n] >> months[n] >> priorities[n] >> events[n];
//        auto pos = s.find(events[n]);
//        events[n] = s.substr(pos);
//        n++;
//    }
//    bool f = false;
//    do {
//        if (f)
//            cout << endl;
//        stringstream ss(s);
//        int d, m;
//        ss >> c >> d >> m;
//        cout << right << "Today is:" << setw(3) << d << setw(3) << m << endl;
//        map<int, map<int, vector<int>>> dict;
//        for (int i=0; i<n; i++) {
//            int month = months[i];
//            int date = dates[i];
//            if (date == d && month == m) {
//                cout << right << setw(3) << d << setw(3) << m << left << " *TODAY* " << events[i] << endl;
//                continue;
//            }
//            bool isNextMonth = month == m + 1 || (month == 1 && m == 12);
//            if (isNextMonth || month == m) {
//                if (isNextMonth)
//                    date += dateOfMonth[m] + (!(year % 4) && m == 2);
//                int dayAfter = date - d - 1;
//                int star = priorities[i] - dayAfter;
//                if (star > 0)
//                    dict[dayAfter][star].push_back(i);
//            }
//        }
//        for (int i=0; i<7; i++) {
//            map<int, vector<int>> dayNo = dict[i];
//            for (int j=7; j>0; j--) {
//                vector<int> starNo = dayNo[j];
//                for (int k : starNo)
//                    cout << right << setw(3) << dates[k] << setw(3) << months[k] << ' '
//                    << setw(8) << left << string(j, '*') << events[k] << endl;;
//            }
//        }
//        f = true;
//    } while (getline(cin, s) && s != "#");
//}
//
