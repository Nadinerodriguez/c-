#include <iostream>
#include <cstdlib>

using namespace std;

bool ok(int q[], int c) {
    for(int i = 0; i< c; i++)
        if(q[i] == q[c] || (c-i) == abs(q[c]-q[i]))
            return false;
    return true;
}
