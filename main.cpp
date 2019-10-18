//
//  main.cpp
//  Eigth Numbers in a cross
//
//  Created by Nadine Rodriguez on 10/2/19.
//  Copyright © 2019 Nadine Rodriguez. All rights reserved.
//

#include <iostream>
using namespace std;

bool safe(int q[], int c){
    //Helper function
    int adj[8][5] ={
        {-1},
        {0, -1},
        {1, -1},
        {0, 1, 2, -1},
        {1, 2, 3, -1},
        {2, 4, -1},
        {0, 3, 4, -1},
        {3, 4, 5, 6, -1}
    };
    // Row Check
    for(int i = 0; i < c;i++){
         if(q[c] == q[i])
             return false;
    }
    for(int i = 0; adj[c][i]!=-1; i++){
       if(q[adj[c][i]]+1 == q[c] || q[adj[c][i]]-1 == q[c])
         return false;
    }
    return true;
}
void print(int q[]){
    cout << "Solution" << endl;
    cout << " " << " " << q[1] << q[2] << endl;
    cout << " " << q[0] << q[3] << q[4] << q[5] << endl;
    cout << " " << " " << q[6] << q[7] << endl;
    cout << endl;
}
void solution(int q[], int c){
   if (c == 8)
      print(q);
   else
       for(q[c] = 1; q[c] < 9; ++q[c])
           if (safe(q, c))
               solution(q, c+1);
}
        
int main(){
    int q[8];
    solution(q, 0);
    return 0;
}
