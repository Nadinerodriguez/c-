//
//  main.cpp
//  Stable Marriage
//
//  Created by Nadine Rodriguez on 10/4/19.
//  Copyright © 2019 Nadine Rodriguez. All rights reserved.
//

#include <iostream>
using namespace std;
int mp[3][3] = {0,2,1,
                0,2,1,
                1,2,0};
int wp[3][3] = {2,1,0,
                0,1,2,
                2,0,1};
    
bool ok(int q[], int c){
    int i;
    for(i=0; i<c;i++){
        if(q[c]==q[i])
            return false;
    }
    for(i=0; i<c; i++){
        if((mp[c][q[i]] < mp[c][q[c]]) && (wp[q[i]][c] < wp[q[i]][i]))
            return false;
        if((wp[q[c]][i] < wp[q[c]][c])&& (mp[i][q[c]] < mp[i][q[i]]))
            return false;
        }
        return true;
    }
void backtrack(int &c){
    c--;
    if(c==-1) exit(1);
    }
void print(int q[]){
    cout<< "Man" <<"  "<< "Woman"<< endl;
    for(int i=0;i<3;i++){
        cout<<" "<<i<<"     "<<q[i]<<endl;
    }
}
int main(){
    int q[3];
    q[0]=0;
    int c=1;
    bool fromBacktrack=false;
    
    while(1){
        while(c<3){
            if(!fromBacktrack)
                q[c]=-1;
                fromBacktrack=false;
                while(q[c]<3){
                q[c]++;
                while(q[c]==3){
                    backtrack(c);
                    q[c]++;
                }
                if(ok(q, c))
                    break;
              }
            c++;
     }
     print(q);
     backtrack(c);
     fromBacktrack=true;
    }
}
