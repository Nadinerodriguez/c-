//
//  main.cpp
//  8Queens
//
//  Created by Nadine Rodriguez on 9/9/19.
//  Copyright © 2019 Nadine Rodriguez. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
//2D array
    int b[8][8] = {0}, r, c =0, solutionCounter = 0;
        b[0][0]=1;

    NC: c++;
        if(c==8) goto print;
        r=-1;
    NR: r++;
        if(r==8) goto backtrack;
        //    row test
        for(int i = 0; i < c; i++)
            if(b[r][i]==1)
                goto NR;
        //    Up diagonal Check
        for(int i = 1; (r-i)>=0 && (c-i)>=0; i++)
            if (b[r-i][c-i]==1)
                goto NR;
        //    Down Diagonal Check
        for(int i = 1; (r+i)<8 && (c-i)>=0; i++)
            if(b[r+i][c-i] == 1)
                goto NR;
        b[r][c] = 1;
        goto NC;
    backtrack: c--;
        if(c == -1) return 0;
        r=0;
        while(b[r][c] != 1)
            r++;
        b[r][c] = 0;
    goto NR;
    print: solutionCounter++;
        cout <<"Solution: " << solutionCounter << endl;
        for (int r = 0; r < 8; r++){
            for (int c= 0; c < 8; c++){
                if(b[r][c] == 1)
                    cout << "1" << " ";
                else
                    cout << "0" << " ";
            }
           cout << endl;
        }
        cout << endl;
        goto backtrack;
    
// 1D array
//    int q[8], c = 0, solutionCounter = 0;
//    q[0] = 0;
//NC: c++;
//    if(c==8) goto print;
//    q[c] = -1;
//NR: q[c]++;
//    if(q[c]==8) goto backtrack;
//    for(int i = 0; i< c; i++){
//        if(q[i] == q[c] || (c-i) == abs(q[c]-q[i])) goto NR;
//    }
//    goto NC;
//
//backtrack: c--;
//        if(c == -1) return 0;
//        goto NR;
//print: solutionCounter++;
//    cout <<"Solution: " << solutionCounter << endl;
//    // Prints the sequence of the solution
//    for(int i = 0; i < 8; i++){
//        cout << q[i] << " ";
//    }
//    cout << endl;
//    cout << "---------------" << endl;
//    // Prints the visual representation of the solution
//    for(int i=0; i< 8; i++){
//        for(int j =0; j<8; j++){
//            if(i == q[j])
//                cout << "1" << " ";
//            else
//                cout <<"0" << " ";
//            }
//        cout << endl;
//    }
//    cout << endl;
//    goto backtrack;
    return 0;
}
