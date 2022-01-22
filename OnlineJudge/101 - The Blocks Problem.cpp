////
////  The Blocks Problem.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/2/23.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Node {
//    bool atOriginal;
//    int prev, next;
//    Node(): prev(-1), next(-1), atOriginal(true) {};
//};
//
//bool checkValid(int c, vector<Node> &blocks, int b) {
//    while (c != -1 && c != b) {
//        c = blocks[c].next;
//    }
//    return c != b;
//}
//
//void returnAnyBlock(vector<Node> &blocks, int b) {
//    int current = blocks[b].next;
//    while (current != -1) {
//        blocks[current].atOriginal = true;
//        blocks[current].prev = -1;
//        int temp = blocks[current].next;
//        blocks[current].next = -1;
//        current = temp;
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<Node> blocks(n);
//    string firstCommand;
//    cin >> firstCommand;
//    while (firstCommand != "quit") {
//        int a, b;
//        string secondCommand;
//        cin >> a >> secondCommand >> b;
//        bool isValid = a!=b && checkValid(a, blocks, b) && checkValid(b, blocks, a);
//        if (!isValid) {
//            cin >> firstCommand;
//            continue;
//        }
//        if (secondCommand == "onto") {
//            returnAnyBlock(blocks, b);
//        } else {
//            // move to top of b
//            while (blocks[b].next != -1) {
//                b = blocks[b].next;
//            }
//        }
//        if (firstCommand == "move") {
//            returnAnyBlock(blocks, a);
//            blocks[a].next = -1;
//        }
//        // move a off of previous
//        if (blocks[a].prev != -1)
//            blocks[blocks[a].prev].next = -1;
//        // put a on top of b
//        blocks[b].next = a;
//        blocks[a].prev = b;
//        blocks[a].atOriginal = false;
//        cin >> firstCommand;
//    }
//    for (int i=0; i<n; i++) {
//        cout << i << ':';
//        if (blocks[i].atOriginal) {
//            int x = i;
//            while (x != -1) {
//                cout << ' ' << x;
//                x = blocks[x].next;
//            }
//        }
//        cout << endl;
//    }
//}
