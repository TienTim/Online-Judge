//
//  177 - Paper Folding.cpp
//  OnlineJudge
//
//  Created by Tien Do on 2022/2/8.
//

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

map<int, set<pair<int, int>>> p;
int maxY, minX;
int TRANS[] = {2, 3, 1, 0};

void build(int n) {
    int a[1 << 15];     // 2^15
    // 0 up, 1 down, 2 left, 3 right
    int m = 1;
    a[0] = 3;
    for (int i=1; i<=n; i++) {
        for (int j=m-1, k=m; j>=0; j--, k++) {
            a[k] = TRANS[a[j]];
        }
        m = m << 1;
    }
    int x = -1, y = 0, px = 0, py = 0;
    p.clear();
    for (int i=0; i<m; i++) {
        pair<int, int> b;
        if (a[i] == 0) {
            x = px << 1;
            y = py;
            b.second = 0;
            py++;
        } else if (a[i] == 1) {
            x = px << 1;
            y = py - 1;
            b.second = 1;
            py--;
        } else if (a[i] == 2) {
            x = (px << 1) - 1;
            y = py;
            b.second = 2;
            px--;
        } else {
            x = (px << 1) + 1;
            y = py;
            b.second = 3;
            px++;
        }
        maxY = max(maxY, y);
        minX = min(minX, x);
        b.first = x;
        p[y].insert(b);
    }
}

int main() {
    int n;
    while (cin >> n && n) {
        maxY = -0xffffff;
        minX = 0xffffff;
        build(n);
        for (auto it = p.rbegin(); it != p.rend(); it++) {
            int i = minX;
            set<pair<int, int>> s = it->second;
            for (auto jt = s.begin(); jt != s.end(); jt++) {
                int x = jt->first;
                while (i++ < x) {
                    cout << ' ';
                }
                int type = jt->second;
                cout << (type == 0 || type == 1 ? '|' : '_');
            }
            cout << endl;
        }
        cout << '^' << endl;;
    }
}

