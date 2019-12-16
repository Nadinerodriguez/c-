#include <iostream>
#include <cmath>
using namespace std;

bool ok(int * q, int c) {
    int mp[3][3]= {0,2,1,
                  0,2,1,
                  1,2,0};
    int wp[3][3]= {2,1,0,
                  0,1,2,
                  2,0,1};
    for (int i = 0; i < c; i++) {
        if (q[c] == q[i])
            return false;
        if((mp[c][q[i]] < mp[c][q[c]]) && (wp[q[i]][c] < wp[q[i]][i]))
            return false;
        if((wp[q[c]][i] < wp[q[c]][c])&& (mp[i][q[c]] < mp[i][q[i]]))
            return false;
        if (q[c] == 3)
            return false;
    }
    return true;
}
void print(int *q) {
    static int count = 0;
    cout << "Solution #" << ++count << ":"<<endl;
    for (int k = 0; k < 3; k++)
        cout << q[k] << " ";
    cout << endl;
}
void move(int* q, int i) {
    if(i == 3) {
        print(q);
        return;
    }
    for(int j = 0;j < 3; j++) {
        q[i] = j;
        if(ok(q,i))
            move(q,i+1);
    }
}

int main() {
     int q[3];
     q[0] = 0;
     move(q,0);
    return 0;
}
