#include <iostream>
#include <cstdlib>

using namespace std;

bool ok(int q[], int c) {
    for(int i = 0; i< c; i++)
        if(q[i] == q[c] || (c-i) == abs(q[c]-q[i]))
            return false;
    return true;
}

int main() {
    int n;
    cout << "Enter the number of queens you want: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cout << "There are " << nqueens(i) << " solution(s) to the " << i << " queen(s) problem." << endl;
    return 0;
}
