////
////  Stacks of Flapjacks.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/13.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void reverseArray(int a[], int j) {
//    for (int i=0; i<=j/2; i++) {
//        int temp = a[i];
//        a[i] = a[j-i];
//        a[j-i] = temp;
//    }
//}
//
//int main() {
//    int n;
//    int v[30], vSorted[30];
//    int h = 0;
//    while (cin >> n) {
//        v[h] = n;
//        h++;
//        if (getchar() != '\n') {
//            continue;
//        }
//        for (int i=0; i<h; i++)
//            cout << v[i] << ' ';
//        cout << endl;
//        copy(v, v+h, vSorted);
//        sort(vSorted, vSorted+h);
//        for (int i=h-1; i>0; i--) {
//            if (v[i] == vSorted[i])
//                continue;
//            for (int j=i-1; j>0; j--) {
//                if (vSorted[i] == v[j]) {
//                    cout << h-j << ' ';
//                    reverseArray(v, j);
//                    break;
//                }
//            }
//            cout << h-i << ' ';
//            reverseArray(v, i);
//        }
//        cout << "0\n";
//        h = 0;
//    }
//}
