////
////  153 - Permalex.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/24.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int gcd(int x, int y) {
//    while (x%y) {
//        int t = x;
//        x = y;
//        y = t%x;
//    }
//    return y;
//}
//
//int main() {
//    string s;
//    while (cin >> s && s != "#") {
//        int letterDist[26] = {0};
//        int len = s.length();
//        for (int i=0; i<len; i++) {
//            letterDist[s[i]-'a']++;
//        }
//        long long n = 0;
//        for (int i=0; i<len; i++) {
//            for (int j=0; j<s[i]-'a'; j++) {
//                if (!letterDist[j])
//                    continue;
//                letterDist[j]--;
//                int choiceNo[30] = {0};
//                for (int k=2; k<len-i; k++) {
//                    choiceNo[k] = k;
//                }
//                for (int k=0; k<26; k++) {
//                    // divide by letterDist[k]!
//                    for (int l=2; l<=letterDist[k]; l++) {
//                        int t = l;
//                        for (int m=2; m<len-i; m++) {
//                            if (choiceNo[m] == 1)
//                                continue;
//                            int u = gcd(t, choiceNo[m]);
//                            t /= u;
//                            choiceNo[m] /= u;
//                            if (t == 1)
//                                break;
//                        }
//                    }
//                }
//                long long perNo = 1;
//                for (int k=2; k<len-i; k++) {
//                    perNo *= choiceNo[k];
//                }
//                n += perNo;
//                letterDist[j]++;
//            }
//            letterDist[s[i]-'a']--;
//        }
//        cout << setw(10) << n+1 << endl;
//    }
//}
//
