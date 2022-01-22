//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main () {
//    int x, y;
//    while (cin >> x >> y) {
//        int z[10][100];
//        int dp[10][100];
//        vector<int> path;
//        for (int i = 0; i < x; i++)
//            for (int j = 0; j < y; j++)
//                cin >> z[i][j];
//        for (int i = 0; i < x; i++)
//            dp[i][y-1] = z[i][y-1];
//        for (int j = y - 2; j >= 0; j--) {
//            for (int i = 0; i < x; i++) {
//                int a = dp[(i-1 + x) % x][j+1];
//                int b = dp[i][j+1];
//                int c = dp[(i+1 + x) % x][j+1];
//                dp[i][j] = min(a, min(b, c)) + z[i][j];
//            }
//        }
//        int best = dp[0][0];
//        int id = 0;
//        for (int i = 1; i < x; i++) {
//            if (dp[i][0] < best) {
//                best = dp[i][0];
//                id = i;
//            }
//        }
//        path.push_back(id);
//        for (int j = 1; j < y; j++) {
//            int temp = dp[id][j-1] - z[id][j-1];
//            int tempId = INT32_MAX;
//            int p = (id - 1+x) % x;
//            int q = (id + 1+x) % x;
//            if (dp[p][j] == temp) {
//                tempId = min(tempId, p);
//            }
//            if (dp[q][j] == temp) {
//                tempId = min(tempId, q);
//            }
//            if (dp[id][j] == temp) {
//                tempId = min(tempId, id);
//            }
//            id = tempId;
//            path.push_back(id);
//        }
//        for (int i=0; i<path.size(); i++) {
//            if (i != 0)
//                cout << ' ';
//            cout << path[i] + 1;
//        }
//        cout << endl << best << endl;
//    }
//}
