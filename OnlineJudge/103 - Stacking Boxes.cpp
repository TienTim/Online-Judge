////
////  Stacking Boxes.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/2/26.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compareBox(const vector<int> &l, const vector<int> &r) {
//    for (int i=0; i<l.size()-1; i++) {   // except boxId
//        if (l[i] == r[i]) continue;
//        return l[i] > r[i];
//    }
//    return true;
//}
//
//bool canFit(const vector<int> &large, const vector<int> &small) {
//    for (int i=0; i<large.size()-1; i++) {
//        if (large[i] <= small[i])
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    int n, dim;
//    while (cin >> n >> dim) {
//        vector<vector<int>> boxes;
//        vector<int> len(n, 1);
//        vector<int> prev(n, -1);
//        for (int i=0; i<n; i++) {
//            vector<int> box(dim, 0);
//            for (int j=0; j<dim; j++) {
//                cin >> box[j];
//            }
//            sort(box.begin(), box.end(), greater<int>());
//            box.push_back(i+1); // box.back() boxId
//            boxes.push_back(box);
//        }
//        sort(boxes.begin(), boxes.end(), compareBox);
//        for (int i=0; i<n; i++) {
//            for (int j=i+1; j<n; j++) {
//                if (canFit(boxes[i], boxes[j]) && len[i]+1 >= len[j]) {
//                    len[j] = len[i] + 1;
//                    prev[j] = i;
//                }
//            }
//        }
//        int maxLen = 0;
//        int maxIdx = 0;
//        for (int i=0; i<n; i++) {
//            if (len[i] > maxLen) {
//                maxLen = len[i];
//                maxIdx = i;
//            }
//        }
//        cout << maxLen << endl;
//        int t = maxIdx;
//        while (prev[t] != -1) {
//            cout << boxes[t].back() << ' ';
//            t = prev[t];
//        }
//        cout << boxes[t].back() << endl;
//    }
//}
