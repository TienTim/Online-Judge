////
////  Meta-Loopless Sorts.cpp
////  OnlineJudge
////
////  Created by Tien Do on 2021/5/7.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//const int MAX_DIM = 8;
//const string VARIABLE_NAMES = "abcdefgh";
//
//void printVariables(int variables[], int numVars) {
//    for (int i=0; i<numVars; i++) {
//        if (i != 0)
//            cout << ',';
//        cout << VARIABLE_NAMES[variables[i]];
//    }
//}
//
//void printDepth(int depth) {
//    cout << string(2*depth, ' ');
//}
//
//void compare(int depth, int numVars, int variables[]) {
//    if (depth == numVars) {
//        printDepth(depth);
//        cout << "writeln(";
//        printVariables(variables, numVars);
//        cout << ')' << endl;
//        return;
//    }
//    int childVars[MAX_DIM];
//    copy(variables, variables+numVars, childVars);
//    for (int i=depth-1; i>=0; i--) {
//        printDepth(depth);
//        if (i!=depth-1)
//            cout << "else ";
//        cout << "if " << VARIABLE_NAMES[childVars[i]] << " < "
//        << VARIABLE_NAMES[childVars[i+1]] << " then" << endl;
//        compare(depth+1, numVars, childVars);
//        swap(childVars[i], childVars[i+1]);
//    }
//    printDepth(depth);
//    cout << "else\n";
//    compare(depth+1, numVars, childVars);
//}
//
//int main() {
//    int m;
//    cin >> m;
//    while (m--) {
//        int numVars;
//        cin >> numVars;
//        cout << "program sort(input,output);" << endl;
//        cout << "var\n";
//        int variables[MAX_DIM];
//        for (int i=0; i<numVars; i++) {
//            variables[i] = i;
//        }
//        printVariables(variables, numVars);
//        cout << " : integer;\n";
//        cout << "begin\n";
//        cout << "  readln(";
//        printVariables(variables, numVars);
//        cout << ");\n";
//        if (numVars == 1) {
//            cout << "  writeln(a)\n";
//        } else
//            compare(1, numVars, variables);
//        cout << "end.\n";
//        if (m>0)
//            cout << endl;
//    }
//}
