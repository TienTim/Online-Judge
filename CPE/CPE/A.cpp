//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//    for (int v=0; v<t; ++v) {
//        int n, m, k;
//        cin >> n >> m >> k;
//        int *a = new int[n];
//        a[0] = 1;
//        a[1] = 2;
//        a[2] = 3;
//        for (int i=3; i<n; ++i)
//            a[i] = (a[i-1]+a[i-2]+a[i-3])%m + 1;
//        bool *b = new bool[k];
//        for (int i=0; i<k; ++i)
//            b[i] = false;
//        int r = INT_MAX;
//        bool f = true;
//        for (int i=0; i<n; ++i) {
//            int u = 0;
//            for (int j=i; j<n; ++j) {
//                if (a[j]-1 < k && !b[a[j]-1]) {
//                    b[a[j]-1] = true;
//                    ++u;
//                }
//                if (u == k) {
//                    if (j-i+1 < r)
//                        r = j-i+1;
//                    break;
//                }
//            }
//            for (int i=0; i<k; ++i)
//                b[i] = false;
//            if (i==0 && u < k) {
//                f = false;
//                break;
//            }
//        }
//        cout << "Case " << v+1 << ": ";
//        if (f)
//            cout << r << endl;
//        else
//            cout << "sequence nai" << endl;
//    }
//}
