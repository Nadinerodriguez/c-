#include <iostream>
#include <cstdlib>

using namespace std;

bool ok(int q[], int c) {
    for(int i = 0; i< c; i++)
        if(q[i] == q[c] || (c-i) == abs(q[c]-q[i]))
            return false;
    return true;
}
int nqueens(int n) {
  int *q = new int[n];
  q[0] = 0;   
  int c = 0;       // Start on the first column
  int counter=0;
   while (c >= 0) { // End the loop if you backtrack from the first column
      c++;
      if (c == n) { // If you are in the last column, print and backtrack
         counter++;
         c--;
      }
      else                
         q[c] = -1;
      while (c >= 0) {
         q[c]++;           
         if (q[c] == n)     // If you have passed the end of the column, backtrack
            c--;
         else if (ok(q, c)) break;
      }
   }

    delete []q;  // Delete the array.
      return counter;
}
int main() {
    int n;
    cout << "Enter the number of queens you want: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cout << "There are " << nqueens(i) << " solution(s) to the " << i << " queen(s) problem." << endl;
    return 0;
}
