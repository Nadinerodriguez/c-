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
   int* q = new int[n];
   q[0] = 0;
   int c = 0, solutions = 0;
   while (c >= 0) {
      if (c == n - 1) {
         ++solutions;
         --c;
      }
      else
         q[++c] = -1;
      while (c >= 0) {
         ++q[c];
         if (q[c] == n)
            --c;
         else if (ok(q, c))
            break;
      }
   }
   delete[] q;
   return solutions;
}
