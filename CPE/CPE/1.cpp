#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Re {
    string n;
    string id;
};

int main(int argc, char **argv)
{
    if (argc < 4) {
        cout << "Not enough input";
        exit(1);
    }
    fstream f(argv[1], ios::in);
    if (!f) {
        cout << "Input file " << argv[1] << " does not exist.";
        exit(2);
    }
    Re r;
    vector<Re> rV;
    while (f >> r.id >> r.n) {
        rV.push_back(r);
    }
    f.close();
    int *sC = new int[rV.size()-1];
    for (int i=0; i<rV.size()-1; ++i) {
        sC[i] = 0;
    }
    for (int i=0; i<rV.size()-2; ++i) {
        for (int j = rV.size()-1; j>i; --j) {
            string u = rV[j-1].n;
            string v = rV[j].n;
            if (u > v) {
                Re t = rV[j-1];
                rV[j-1] = rV[j];
                rV[j] = t;
                sC[i]++;
            }
        }
    }
    f.open(argv[2], ios::out);
    for (int i=0; i<rV.size(); ++i) {
        f << rV[i].n << "         " << rV[i].id << endl;
        cout << rV[i].n << "         " << rV[i].id << endl;
    }
    cout << "The above is the content of the file storing sorted records. Below is the file storing the number of swaps made in each pass." << endl;
    f.close();
    f.open(argv[3], ios::out);
    for (int i=0; i<rV.size()-1; ++i) {
        f << sC[i] << endl;
        cout << sC[i] << endl;
    }
}
