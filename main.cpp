//
//  main.cpp
//  8QueensNoGoto
//
//  Created by Nadine Rodriguez on 9/23/19.
//  Copyright © 2019 Nadine Rodriguez. All rights reserved.
//

#include <iostream>
using namespace std;

void printBoard(int q[]){
    // Prints the sequence of the solution
    for(int i = 0; i < 8; i++){
        cout << q[i] << " ";
    }
    cout << endl;
    cout << "---------------" << endl;
    // Prints the visual representation of the solution
    for(int i=0; i< 8; i++){
        for(int j =0; j<8; j++){
            if(i == q[j])
                cout << "1" << " ";
            else
                cout <<"0" << " ";
            }
        cout << endl;
    }
    cout << endl;
}
bool isSafe(int q[], int c){
    for(int i = 0; i< c; i++)
    if(q[i] == q[c] || (c-i) == abs(q[c]-q[i]))
        return false;
    return true;
}
void backtrack(int &c){
    c--;
    if(c == -1) exit(1);
}
int main() {
    int solution = 0;
    int q[8]={0};
    int c = 0;
    bool fromBacktrack = false;
    
    while(true){
        while(c<8){
            if(!fromBacktrack){
                c++;
                if (c==8) break;
                q[c] = -1;
            }
            fromBacktrack = false;
            while(q[c] < 8){
                q[c]++;
                if (q[c] == 8){
                    backtrack(c);
                    fromBacktrack = true;
                }
                if(isSafe(q,c) == true) break;
            }
        }
        solution++;
        cout << "Solution: " << solution << endl;
        printBoard(q);
        backtrack(c);
        fromBacktrack = true;
    }
    return 0;
}
