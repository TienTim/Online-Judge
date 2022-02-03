////
////  161 - Traffic Lights.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/28.
////
//
//#include <iostream>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    string s;
//    int times[101] = {0};
//    int n = 0;
//    int minTime = 100;
//    while (getline(cin, s) && s != "0 0 0") {
//        stringstream ss(s);
//        while (ss >> times[n]) {
//            if (times[n])
//                minTime = min(minTime, times[n]);
//            n++;
//            if (times[n-1])
//                continue;
//            n--;    // remove last 0
//            bool isFail = true;
//            int fiveHours = 5 * 60 * 60;
//            for (int i=minTime - 5; i<=fiveHours; i++) {
//                bool isSync = true;
//                for (int j=0; j<n; j++) {
//                    int t = i % (2 * times[j]);
//                    if (t >= (times[j] - 5)) {
//                        isSync = false;
//                        break;
//                    }
//                }
//                int t = i;
//                if (isSync) {
//                    cout << setw(2) << setfill('0') << t/3600 << ':';
//                    t %= 3600;
//                    cout << setw(2) << setfill('0') << t/60 << ':';
//                    t %= 60;
//                    cout << setw(2) << setfill('0') << t << endl;
//                    isFail = false;
//                    break;
//                }
//            }
//            n = 0;
//            minTime = 100;
//            if (isFail)
//                cout << "Signals fail to synchronise in 5 hours" << endl;
//        }
//    }
//}
//
