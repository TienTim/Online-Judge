////
////  S14.cpp
////  CPE
////
////  Created by Tien Do on 2021/1/15.
////
//
//#include <iostream>
//#include <vector>
//#include <fstream>
//using namespace std;
//
//void dA(vector<int> &aN, vector<string> &fN, vector<string> &lN, vector<double> &aB, vector<string> &d, vector<string> &t, vector<string> &v, vector<string> &a, vector<bool> k) {
//    int n=0;
//    int z = 15;
//    for (int i=0; i<aN.size(); ++i) {
//        if (k[i]) {
//            cout << setw(10) << setfill('0') << aN[i] << setw(7) << setfill(' ') << fN[i] << setw(7) << lN[i] << setw(z) << aB[i] << setw(z) << d[i] << setw(z) << t[i] << setw(z) << v[i] << setw(7) << a[i] << endl;
//            ++n;
//        }
//    }
//    cout << "Number: " << n << endl;
//}
//
//void gD(string n, vector<int> &aNV, vector<string> &fNV, vector<string> &lNV, vector<double> &aBV, vector<string> &dV, vector<string> &tV, vector<string> &vV, vector<string> &aV, vector<bool> &kV) {
//    ifstream f(n);
//    int aN;
//    string fN, lN, d, t, v, a;
//    double aB;
//    while (f >> aN >> fN >> lN >> aB >> d >> t >> v >> a) {
//        bool f = false;
//        bool k = false;
//        for (int i=0; i<aNV.size(); ++i) {
//            if (aN == aNV[i]) {
//                f = true;
//                if (fN == fNV[i] && lN == lNV[i] && d == dV[i] && a == "true" && aV[i] == "true") {
//                    aBV[i] += aB;
//                    if (t >= tV[i]) {
//                        tV[i] = t;
//                        if (v > vV[i])
//                            vV[i] = v;
//                    }
//                } else {
//                    cout << "Inconsistent: " << aN << endl;
//                    k = true;
//                    kV[i] = true;
//                }
//                break;
//            }
//        }
//        if (!f || k) {
//            aNV.push_back(aN);
//            fNV.push_back(fN);
//            lNV.push_back(lN);
//            aBV.push_back(aB);
//            dV.push_back(d);
//            tV.push_back(t);
//            vV.push_back(v);
//            aV.push_back(a);
//            kV.push_back(k);
//        }
//    }
//}
//
//template<typename T>
//vector<T> sI(vector<int> a, vector<int> b, vector<T> c) {
//    vector<T> r;
//    vector<bool> f(a.size(), false);
//    for (int i=0; i<a.size(); i++) {
//        for (int j=0; j<b.size(); ++j) {
//            if (a[i] == b[j] && !f[j]) {
//                r.push_back(c[j]);
//                f[j] = true;
//            }
//        }
//    }
//    return r;
//}
//
//int main(int argc, char **argv) {
//    vector<int> aNV;
//    vector<string> fNV;
//    vector<string> lNV;
//    vector<double> aBV;
//    vector<string> dV;
//    vector<string> tV;
//    vector<string> vV;
//    vector<string> aV;
//    vector<bool> kV;
//    gD(argv[1], aNV, fNV, lNV, aBV, dV, tV, vV, aV, kV);
//    gD(argv[2], aNV, fNV, lNV, aBV, dV, tV, vV, aV, kV);
//    vector<int> aNVC = aNV;
//    sort(aNVC.begin(), aNVC.end());
//    fNV = sI(aNVC, aNV, fNV);
//    lNV = sI(aNVC, aNV, lNV);
//    aBV = sI(aNVC, aNV, aBV);
//    dV = sI(aNVC, aNV, dV);
//    tV = sI(aNVC, aNV, tV);
//    vV = sI(aNVC, aNV, vV);
//    aV = sI(aNVC, aNV, aV);
//    kV = sI(aNVC, aNV, kV);
//    dA(aNVC, fNV, lNV, aBV, dV, tV, vV, aV, kV);
//    ofstream f("Medge_file.txt");
//    for (int i=0; i<aNVC.size(); ++i) {
//        f << aNVC[i] << ' ' << fNV[i] << ' ' << lNV[i] << ' ' << aBV[i] << ' ' << dV[i] << ' ' << tV[i] << ' ' << vV[i] << ' ' << aV[i] << ' ' << endl;
//    }
//    f.close();
//}
