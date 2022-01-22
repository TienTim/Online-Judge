////
////  S13.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/15.
////
//
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//const int nt=11;
//const int ns=201;
//const int nf=12;
//
//void rG(ifstream &f, int sG[][nt], int &n, int &m) {
//    string fn;
//    cout << "Input file: ";
//    cin >> fn;
//    f.open(fn);
//    f >> n >> m;
//    int s;
//    int i=0;
//    int j=0;
//    while (f >> s) {
//        sG[i][j] = s;
//        sG[i][nt-1] += s;
//        sG[ns-1][j] += s;
//        if (j<m-1) {
//            ++j;
//        } else {
//            ++i;
//            j = 0;
//        }
//    }
//}
//
//void p(int a[], int &m, double av) {
//    for (int j=0; j<m; ++j) {
//        cout << setw(7) << a[j];
//    }
//    cout << setw(7) << av << endl;
//}
//
//void oG(int sG[][nt], int &n, int &m) {
//    cout << "Student: " << n << endl;
//    cout << "Test: " << m << endl;
//    int mi[nt] = {};
//    int ma[nt] = {};
//    double miA = INT32_MAX;
//    double maA = INT32_MIN;
//    double s = 0;
//    for (int i=0; i<nt; ++i) {
//        mi[i] = INT32_MAX;
//    }
//    for (int i=0; i<n; ++i) {
//        for (int j=0; j<m; ++j) {
//            cout << setw(7) << sG[i][j];
//            mi[j] = min(mi[j], sG[i][j]);
//            ma[j] = max(ma[j], sG[i][j]);
//        }
//        double a = double(sG[i][nt-1])/m;
//        cout << fixed << setprecision(2) << setw(7) << a;
//        miA = min(miA, a);
//        maA = max(maA, a);
//        s += a;
//        cout << endl;
//    }
//    int avg[nt] = {};
//    for (int j=0; j<m; ++j) {
//        avg[j] = sG[ns-1][j]/n;
//    }
//    p(avg, m, s/n);
//    p(mi, m, miA);
//    p(ma, m, maA);
//}
//
//void fF(int f[], int sG[][nt], int &n, int &m) {
//    for (int i=0; i<n; ++i) {
//        for (int j=0; j<m; ++j) {
//            int g = sG[i][j];
//            if (g/10 < 10) {
//                f[g==0 ? 0 : g/10+1]++;
//            } else {
//                f[nf-1]++;
//            }
//        }
//    }
//}
//
//void oHB(int f[]) {
//    for (int i=0; i<nf; ++i) {
//        cout << setw(7) << i << ": " << string(f[i], '*');
//        if (f[i] != 0)
//            cout << ' ' << f[i];
//        cout << endl;
//    }
//}
//
//void oVB(int f[]) {
//    int t[nf] = {};
//    int m = INT32_MIN;
//    for (int i=0; i<nf; ++i) {
//        m = max(m, f[i]);
//    }
//    for (int i=0; i<=m; ++i) {
//        for (int j=0; j<nf; ++j) {
//            if (f[j] == 0) {
//                cout << string(7, ' ');
//            } else if (t[j] < f[j]) {
//                cout << setw(7) << '*';
//                t[j]++;
//            } else {
//                cout << setw(7) << f[j];
//                f[j] = 0;
//            }
//        }
//        cout << endl;
//    }
//    
//}
//
//int main() {
//    int n, m;
//    int sG[ns][nt] = {};
//    ifstream f;
//    rG(f, sG, n, m);
//    oG(sG, n, m);
//    int fr[nf] = {};
//    fF(fr, sG, n, m);
//    oHB(fr);
//    oVB(fr);
//}
