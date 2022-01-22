////
////  S12.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/15.
////
//
//#include <iostream>
//using namespace std;
//
//template<typename T>
//void fS(T a[], int &n) {
//    for (int i=0; i<n; ++i) {
//        cin >> a[i];
//    }
//    T sL = a[0];
//    T l = a[0];
//    int loc = -1;
//    int ind = 0;
//    for (int i=1; i<n; ++i) {
//        if (a[i] > l) {
//            sL = l;
//            l = a[i];
//            loc = ind;
//            ind = i;
//        } else if (a[i] == l) {
//            ind = i;
//        } else {
//            if (a[i] >= sL) {
//                sL = a[i];
//                loc = i;
//            }
//        }
//    }
//    if (loc != -1) {
//        cout << sL << ' ' << loc << endl;
//    } else
//        cout << "##" << endl;
//}
//int main() {
//    int m;
//    cin >> m;
//    for (int i=0; i<m; ++i) {
//        string t;
//        cin >> t;
//        int n;
//        cin >> n;
//        if (t == "string") {
//            string *a = new string[n];
//            fS(a, n);
//        } else if (t == "int") {
//            int *a = new int[n];
//            fS(a, n);
//        } else {
//            double *a = new double[n];
//            fS(a, n);
//        }
//    }
//}
