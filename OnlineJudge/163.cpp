////
////  163.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2022/1/29.
////
//
//#include <iostream>
//#include <sstream>
//using namespace std;
//
//string directions[8] = {"E", "NE", "N", "NW", "W", "SW", "S", "SE"};
//int dx[8], dy[8];
//
//int checkFaceDir(int x, int y, int shiftDir) {
//    int vx = dx[shiftDir], vy = dy[shiftDir];
//    return (!vy || x%50) &&     // not on avenue
//            (!vx || y%50) &&    // not on street
//            (!vx || !vy || x+y) &&  // not on y=-x
//            (!vx || !vy || y-x);    // not on y=x
//}
//
//
//int main() {
//    string s;
//    for (int i=0; i<8; i++) {
//        dx[i] = (directions[i].find('E') != -1) - (directions[i].find('W') != -1);
//        dy[i] = (directions[i].find('N') != -1) - (directions[i].find('S') != -1);
//    }
//    while (getline(cin, s) && s != "END") {
//        stringstream ss(s);
//        string a, b, c;
//        ss >> a >> b >> c;
//        int x = stoi(a.substr(1, a.length()-2)) * (a[a.length()-1] == 'E' ? 1 : -1);
//        int y = stoi(b.substr(1, b.length()-2)) * (b[b.length()-1] == 'N' ? 1 : -1);
//        int d = 0;
//        for (int i=0; i<8; i++) {
//            if (directions[i] == c) {
//                d = i;
//                break;
//            }
//        }
//        while (getline(cin, s) && s != "STOP") {
//            stringstream ss(s);
//            ss >> a;
//            if (a == "TURN") {
//                ss >> b >> c;
//                int vx = x, vy = y, vd = d;
//                vx += dx[vd];
//                vy += dy[vd];
//                if (b == "SHARP" || b == "HALF") {
//                    int e = b == "HALF" ? 1 : 3;
//                    int f = c == "LEFT" ? 1 : -1;
//                    vd = (vd + f * e + 8) % 8;
//                    int g = checkFaceDir(vx, vy, vd) && checkFaceDir(x, y, d);
//                    if ((dx[d] && dy[d]) || (dx[vd] && dy[vd]))
//                        g = 0;
//                    if (b == "SHARP" && c == "LEFT")
//                        g = 1;
//                    if (dx[vd] == dy[vd] && !((vx+vy)%50))  // boulevards y=-x, y=-x+50, y=-x-50
//                        g = 0;
//                    if (dx[vd] == -dy[vd] && !((vx-vy)%50)) // boulevards y=x, y=x+50, y=x-50
//                        g = 0;
//                    if (dx[vd] && dy[vd] && (vx+vy)%50 && (vx-vy)%50)   // not on boulevards but move diagonal
//                        g = 0;
//                    if (vx == vy || vx == -vy) {    // on the throughway
//                        g = 1;
//                        if (vx%50 && (b != "SHARP" || c != "LEFT")) // cannot exit
//                            g = 0;
//                        if (vx) {
//                            if (vx == 50 && vy == 50)
//                                vd = 5;
//                            else if (vx == 50 && vy == -50)
//                                vd = 3;
//                            else if (vx == -50 && vy == 50)
//                                vd = 7;
//                            else if (vx == -50 && vy == -50)
//                                vd = 1;
//                        }
//                    }
////                    if (b == "SHARP" && c == "LEFT" && (vx == vy || vx == -vy))
////                        g = 1;
//                    if (g) {
//                        x = vx;
//                        y = vy;
//                        d = vd;
//                    }
//                } else {
//                    int e = 2;
//                    int f = b == "LEFT" ? 1 : -1;
//                    vd = (vd + f * e + 8) % 8;
//                    int g = checkFaceDir(vx, vy, vd) && checkFaceDir(x, y, d);
//                    if (b == "LEFT")
//                        g = 1;
//                    if ((dx[d] && dy[d]) || (dx[vd] && dy[vd]))
//                        g = 0;
//                    if (dx[vd] == dy[vd] && !((vx+vy)%50))  // boulevards y=-x, y=-x+50, y=-x-50
//                        g = 0;
//                    if (dx[vd] == -dy[vd] && !((vx-vy)%50)) // boulevards y=x, y=x+50, y=x-50
//                        g = 0;
//                    if (!(vx%50) || !(vy%50)) {   // on the throughway
//                        g = 1;
//                        if (vx%50 || vy%50)
//                            g = 0;
//                        if (b == "LEFT")
//                            g = 1;
//                    }
//                    if (g) {
//                        x = vx;
//                        y = vy;
//                        d = vd;
//                    }
//                }
//            } else if (a == "GO") {
//                int n = 0;
//                if (s.find("STRAIGHT") != -1) {
//                    ss >> b >> n;
//                } else {
//                    ss >> n;
//                }
//                if (n > 0 && n < 100) {
//                    x += dx[d] * n;
//                    y += dy[d] * n;
//                }
//            }
//            cout << 'A' << abs(x);
//            if (x)
//                cout << (x<0 ? 'W' : 'E');
//            cout << ' ' << 'S' << abs(y);
//            if (y)
//                cout << (y<0 ? 'S' : 'N');
//            cout << ' ' << directions[d] << endl;
//        }
//        if (checkFaceDir(x, y, d)) {
//            cout << 'A' << abs(x);
//            if (x)
//                cout << (x<0 ? 'W' : 'E');
//            cout << ' ' << 'S' << abs(y);
//            if (y)
//                cout << (y<0 ? 'S' : 'N');
//            cout << ' ' << directions[d] << endl;
//        } else
//            cout << "Illegal stopping place" << endl;
//        cout << endl;
//    }
//}
//
