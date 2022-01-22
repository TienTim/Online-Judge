#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
/*
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int m, k;
        cin >> m >> k;
        const int v=1000;
        int u[v][v];
        for (int i=0; i<m; ++i) {
            for (int j=0; j<k; ++j) {
                cin >> u[i][j];
            }
        }
        int dp[v][v] = {0};
        dp[0][0] = u[0][0];
        for (int i=0; i<m; ++i) {
            dp[i][0] = dp[i-1][0] + u[i][0];
        }
        for (int j=0; j<k; ++j) {
            dp[0][j] = dp[0][j-1] + u[0][j];
        }
        for (int i=1; i<m; ++i) {
            for (int j=1; j<k; ++j) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + u[i][j];
            }
        }
        cout << dp[m-1][k-1] << endl;
    }
    return 0;
}
*/
/*
// Dijkstra's algorithm
bool isSafe(vector<vector<bool> > &p, int v, int h, vector<vector<int> >& u) {
    return !(v<0 || h<0 || v>=u.size() || h>=u[0].size() || p[v][h]);
}

void mazeHelper(vector<vector<int> >& u, vector<vector<bool> > &p, vector<int> &x, vector<int> &y, vector<int> &d) {
    int minD;
    int ind;
    while (true) {
        minD=INT16_MAX;
        ind=INT16_MAX;
        if (x.size()==1) {
            minD=d[0];
            ind=0;
        } else
            for (int i=0; i<x.size(); ++i) {
                if (d[i]<minD && !p[x[i]][y[i]]) {
                    minD=d[i];
                    ind=i;
                }
            }
        
        int v=x[ind];
        int h=y[ind];
        if (v==u.size()-1 && h==u[0].size()-1)
            return;
        p[x[ind]][y[ind]]=true;
        if (isSafe(p, v-1, h, u)) {
            x.push_back(v-1);
            y.push_back(h);
            d.push_back(minD+u[v-1][h]);
        }
        if (isSafe(p, v, h-1, u)) {
            x.push_back(v);
            y.push_back(h-1);
            d.push_back(minD+u[v][h-1]);
        }
        if (isSafe(p, v+1, h, u)) {
            x.push_back(v+1);
            y.push_back(h);
            d.push_back(minD+u[v+1][h]);
        }
        if (isSafe(p, v, h+1, u)) {
            x.push_back(v);
            y.push_back(h+1);
            d.push_back(minD+u[v][h+1]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int m, k;
        cin >> m >> k;
        vector<int> v(k, 0);
        vector<vector<int> > u(m, v);
        for (int i=0; i<m; ++i) {
            for (int j=0; j<k; ++j) {
                cin >> u[i][j];
            }
        }
        vector<bool> b(k, false);
        vector<vector<bool> > p(m, b);
        vector<int> x;
        vector<int> y;
        vector<int> d;
        x.push_back(0);
        y.push_back(0);
        d.push_back(u[0][0]);
        p[0][0]=true;
        mazeHelper(u, p, x, y, d);
        int minD=INT16_MAX;
        for (int i=0; i<x.size(); ++i) {
            if (d[i]<minD && !p[x[i]][y[i]]) {
                minD=d[i];
            }
        }
        cout << minD << endl;
    }
    return 0;
}
*/
/*
// A* algorithm
bool isSafe(vector<vector<bool> > &p, int v, int h, vector<vector<int> >& u) {
    return !(v<0 || h<0 || v>=u.size() || h>=u[0].size() || p[v][h]);
}

void mH(vector<vector<int> >& u, vector<int> &x, vector<int> &y, vector<int> &d, vector<int> &f, int v, int h, int minD, int minF) {
    int m=int(u.size()-1);
    int k=int(u[0].size()-1);
    x.push_back(v);
    y.push_back(h);
    d.push_back(minD+u[v][h]);
    f.push_back(minF+u[v][h]+m-v+k-h);
}

void mazeHelper(vector<vector<int> >& u, vector<vector<bool> > &p, vector<int> &x, vector<int> &y, vector<int> &d, vector<int> &f) {
    int minD, minF;
    int ind;
    int m=int(u.size()-1);
    int k=int(u[0].size()-1);
    while (true) {
//        int b=true;
//        for (int i=0; i<p.size(); ++i)
//            for (int j=0; j<p[0].size(); ++j)
//                b = b && p[i][j];
//        if (b)
//            return;
        minD=INT16_MAX;
        ind=INT16_MAX;
        minF=INT16_MAX;
        if (x.size()==1) {
            minF=f[0];
            minD=d[0];
            ind=0;
        } else
            for (int i=0; i<x.size(); ++i) {
                if (f[i]<minF && !p[x[i]][y[i]]) {
                    minF=f[i];
                    minD=d[i];
                    ind=i;
                }
            }
        
        int v=x[ind];
        int h=y[ind];
        if (v==m && h==k)
            return;
        p[x[ind]][y[ind]]=true;
        if (isSafe(p, v-1, h, u)) {
            mH(u, x, y, d, f, v-1, h, minD, minF);
        }
        if (isSafe(p, v, h-1, u)) {
            mH(u, x, y, d, f, v, h-1, minD, minF);
        }
        if (isSafe(p, v+1, h, u)) {
            mH(u, x, y, d, f, v+1, h, minD, minF);
        }
        if (isSafe(p, v, h+1, u)) {
            mH(u, x, y, d, f, v, h+1, minD, minF);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int m, k;
        cin >> m >> k;
        vector<int> v(k, 0);
        vector<vector<int> > u(m, v);
        for (int i=0; i<m; ++i) {
            for (int j=0; j<k; ++j) {
                cin >> u[i][j];
            }
        }
        vector<bool> b(k, false);
        vector<vector<bool> > p(m, b);
        vector<int> x;
        vector<int> y;
        vector<int> d;
        vector<int> f;
        x.push_back(0);
        y.push_back(0);
        d.push_back(u[0][0]);
        f.push_back(u[0][0]+m+k-2);
        p[0][0]=true;
        mazeHelper(u, p, x, y, d, f);
        int minD=INT16_MAX;
        for (int i=0; i<x.size(); ++i) {
            if (d[i]<minD && !p[x[i]][y[i]]) {
                minD=d[i];
            }
        }
        cout << minD << endl;
    }
    return 0;
}
*/
