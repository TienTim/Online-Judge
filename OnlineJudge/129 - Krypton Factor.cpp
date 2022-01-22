////
////  129 - Krypton Factor.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/19.
////
//
//#include <iostream>
//using namespace std;
//
//char a[81];
//int n, l, len;
//
//bool check(int cur) {
//    for (int i=1; i*2 <= cur+1; i++) {  // size is cur+1
//        bool same = true;
//        int p = cur;
//        int k = cur-i;
//        for (int j=0; j<i; j++) {
//            if (a[p--] != a[k--])   // compare start from current
//                same = false;
//        }
//        if (same) return false;
//    }
//    return true;
//}
//
//void dfs(int cur) {
//    if (cur && --n == 0) {  // Only descrement after second recursion
//        len = cur;
//    }
//    for (char i='A'; i<'A'+l && n; i++) {   // Halt all loop when n = 0
//        a[cur] = i;
//        if (!check(cur))
//            continue;
//        dfs(cur+1);
//    }
//}
//
//int main() {
//    while (cin >> n >> l && n != 0) {
//        dfs(0);
//        for (int i=0; i<len; i++) {
//            if (i && i%64==0) cout << endl;
//            else if (i && i%4==0) cout << ' ';
//            cout << a[i];
//        }
//        cout << endl << len << endl;
//    }
//}
