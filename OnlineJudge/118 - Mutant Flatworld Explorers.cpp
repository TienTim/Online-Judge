////
////  Mutant Flatworld Explorers.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/12.
////
//
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    string orientations = "NESW";
//    map<char, int> oriToInt;
//    map<int, char> intToOri;
//    for (int i=0; i<orientations.length(); i++) {
//        oriToInt[orientations[i]] = i;
//        intToOri[i] = orientations[i];
//    }
//    const int MAX_DIM = 50;
//    bool scent[MAX_DIM][MAX_DIM];
//    int x, y;
//    char orientation;
//    string instruction;
//    while (cin >> x >> y >> orientation >> instruction) {
//        int oriInt = oriToInt[orientation];
//        bool isLost = false;
//        for (char i : instruction) {
//            if (i == 'R')
//                oriInt = (oriInt+1)%4;
//            else if (i == 'L')
//                oriInt = (oriInt-1+4)%4;
//            else {
//                orientation = intToOri[oriInt];
//                int yt = y + (orientation == 'N') - (orientation == 'S');
//                int xt = x + (orientation == 'E') - (orientation == 'W');
//                if (xt>n || yt>m || xt<0 || yt<0) {
//                    if (!scent[x][y]) {
//                        isLost = true;
//                        scent[x][y] = true;
//                        break;
//                    }
//                } else {
//                    x = xt;
//                    y = yt;
//                }
//            }
//        }
//        cout << x << ' ' << y << ' ' << intToOri[oriInt] << (isLost ? " LOST\n" : "\n");
//    }
//}
