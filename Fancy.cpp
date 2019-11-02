#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c) {
   for (int i = 0; i < c; ++i)
      if (q[i] == q[c] || abs(q[i] - q[c]) == c - i)
         return false;
   return true;
}
void backtrack(int &c){
    c--;
    if(c==-1){
        exit(0);
    }
}
void print(int q[]) {
   int solution = 0;
   int i, j, k, l;
   typedef char box[5][7];
   box bb, wb, wq, bq, *board[8][8];

   for (i=0; i<5; i++)
      for (j=0; j<7; j++) {
          if(i !=0 && i != 4 && j != 0 && j !=6){
              if((i == 1) && (j %2 == 0)){
                  wq[i][j] = ' ';
                  bq[i][j] = char(219);
              }
              else {
                  wq[i][j] = char(219);
                  bq[i][j] = ' ';
              }
          }
          else {
              wq[i][j] = ' ';
              bq[i][j] = char(219);

          }
         wb[i][j] = ' ';
         bb[i][j] = char(219);
      }


   for(i=0; i<8; i++)
      for(j=0; j<8; j++)
         if((i+j)%2 == 0)
            board[i][j] = &wb;
         else
            board[i][j] = &bb;

   for(int i = 0; i < 8; i++){
        if ((q[i]+ i)%2==0)
            board[q[i]][i]=&wq;
        else
            board[q[i]][i]=&bq;
   }

   // Print upper border
   cout << "   ";
   for (i=0; i<7*8; i++)
      cout << '_';
   cout << endl;

   // Print the board
   for (i=0; i<8; i++)
      for (k=0; k<5; k++) {
         cout <<"   " << char(179);
         for (j=0; j<8; j++)
            for (l=0; l<7; l++)
               cout << (*board[i][j])[k][l];
         cout << char(179) << endl;
      }

   // Print lower border
   cout << " ";
   for (i=0; i<7*8; i++)
      cout << char(196);
   cout << endl;
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
                if(ok(q,c) == true) break;
            }
        }
        solution++;
        cout << "Solution: " << solution << endl;
        print(q);
        backtrack(c);
        fromBacktrack = true;
    }
    return 0;
}
