#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
typedef pair<int, int> pPair;
const int rS = 20;

bool findP(vector<pPair> &co, pPair p) {
    bool f = false;
    for (int k=0; k<co.size(); ++k){
        if (co[k] == p)
            f = true;
    }
    return f;
}

bool checkP(vector<vector<pPair> > &cos, pPair p) {
    if (cos.empty()) return true;
    bool nF = true;
    for (int i=0; i<cos.size(); ++i) {
        nF = nF && !findP(cos[i], p);
    }
    return nF;
}
 
void findNeighbor(char v[][rS], vector<pPair> &co, pPair p, int r, int c) {
    int i = p.first;
    int j = p.second;
    if (v[i][j] == 'w') {
        return;
    } else {
        if (!findP(co, p)) {
            co.push_back(p);
            if (i>0) {
                pair<int, int> p(i-1, j);
                findNeighbor(v, co, p, r, c);
            }
            if (i<r-1) {
                pair<int, int> p(i+1, j);
                findNeighbor(v, co, p, r, c);
            }
            if (j>0) {
                pair<int, int> p(i, j-1);
                findNeighbor(v, co, p, r, c);
            }
            if (j<c-1) {
                pair<int, int> p(i, j+1);
                findNeighbor(v, co, p, r, c);
            }
        }
    }
}

int main() {
//    vector<int> res;
    while (true) {
        int r, c;
        cin >> r >> c;
        char v[rS][rS];
        for (int i=0; i<r; ++i) {
            for (int j=0; j<c; ++j) {
                cin >> v[i][j];
            }
        }
        pPair cP;
        cin >> cP.first >> cP.second;
        vector<vector<pPair> > cos;
        for (int i=0; i<r; ++i) {
            for (int j=0; j<c; ++j) {
                if (v[i][j] == 'l') {
                    pair<int, int> p(i, j);
                    if (checkP(cos, p)) {
                        vector<pPair> co;
                        findNeighbor(v, co, p, r, c);
                        if (!findP(co, cP))
                            cos.push_back(co);
                        continue;
                    }
                }
            }
        }
        int b = 0;
        for (int k=0; k<cos.size(); ++k) {
            b = max(b, int(cos[k].size()));
        }
        string l;
        cout << b << endl;
//        res.push_back(b);
        if (!getline(cin,l))
            break;
    }
//    for (int i=0; i<res.size(); ++i) {
//        cout << res[i] << endl;
//    }
    return 0;
}
*/
