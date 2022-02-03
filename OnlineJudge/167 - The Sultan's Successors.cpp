////
////  167 - The Sultan's Successors.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/2/2.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int map[8][8];
//int used[8];    // index is row, value is column
//int ans;
//
//void dfs(int x, int sum) {
//    if (x == 8) {
//        ans = max(ans, sum);
//        return;
//    }
//    for (int y=0; y<8; y++) {
//        bool notValid = false;
//        for (int i=0; i<8; i++) {
//            notValid |= used[i] == y;   // check column is used
//            if (used[i] != -1)
//                notValid |= abs(x - i) == abs(y - used[i]); // check diagonal x=y and x=-y of used
//        }
//        if (notValid)
//            continue;
//        used[x] = y;
//        dfs(x + 1, sum + map[x][y]);
//        used[x] = -1;
//    }
//}
//
//int main() {
//    int k;
//    cin >> k;
//    while (k--) {
//        for (int i=0; i<8; i++) {
//            used[i] = -1;
//            for (int j=0; j<8; j++) {
//                cin >> map[i][j];
//            }
//        }
//        ans = 0;
//        dfs(0, 0);
//        cout << setw(5) << ans << endl;
//    }
//}
//
