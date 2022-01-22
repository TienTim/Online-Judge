////
////  Climbing Trees.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/11.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//    map<string, string> dad;
//    string left, right;
//    while (cin >> left >> right && left != "no.child") {
//        dad[left] = right;
//    }
//    while (cin >> left >> right) {
//        if (dad.count(left) && dad[left] == right)
//            cout << "child";
//        else if (dad.count(right) && dad[right] == left)
//            cout << "parent";
//        else if (dad.count(right) && dad.count(left) && dad[right] == dad[left])
//            cout << "sibling";
//        else {
//            bool found = false;
//            string temp = left;
//            int level = 0;
//            while (dad.count(temp) && !found) {
//                level++;
//                temp = dad[temp];
//                found = temp == right;
//            }
//            if (found) {
//                for (int i=level; i>2; i--)
//                    cout << "great ";
//                cout << "grand child";
//            }
//            if (!found) {
//                temp = right;
//                level = 0;
//                while (dad.count(temp) && !found) {
//                    level++;
//                    temp = dad[temp];
//                    found = temp == left;
//                }
//                if (found) {
//                    for (int i=level; i>2; i--)
//                        cout << "great ";
//                    cout << "grand parent";
//                }
//            }
//            if (!found) {
//                vector<string> leftAncestors, rightAncestors;
//                temp = left;
//                while (dad.count(temp)) {
//                    temp = dad[temp];
//                    leftAncestors.push_back(temp);
//                }
//                temp = right;
//                while (dad.count(temp)) {
//                    temp = dad[temp];
//                    rightAncestors.push_back(temp);
//                }
//                int i, j;
//                for (i=0; i<leftAncestors.size() && !found; i++) {
//                    for (j=0; j<rightAncestors.size() && !found; j++) {
//                        found = leftAncestors[i] == rightAncestors[j];
//                    }
//                }
//                if (found) {
//                    cout << min(i, j)-1 << " cousin";   // for loop still increment before break
//                    if (i != j)
//                        cout << " removed " << abs(i-j);
//                }
//            }
//            if (!found)
//                cout << "no relation";
//        }
//        cout << endl;
//    }
//}
