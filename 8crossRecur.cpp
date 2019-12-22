#include <iostream>
#include <cmath>
using namespace std;

bool test(int q[], int x) {
    static int helper[8][5] = {
        {-1},
        {0, -1},
        {1, -1},
        {0, 1, 2, -1},
        {1, 2, 3, -1},
        {2, 4, -1},
        {0, 3, 4, -1},
        {3, 4, 5, 6, -1}
    };
    for (int j = 0; j < x; j++) {
        for (int i = 0; helper[x][i] != -1; i++) {
            if (abs(q[x] - q[helper[x][i]]) == 1 || q[x] == q[j])
                return false;
        }
    }
    return true;
}

void print(int q[], int cap) {
    static int solution = 0;
    cout << "Soultion #" << ++solution << endl;
    cout << " " << q[1] << q[2] << endl;
    cout << q[0] << q[3] << q[4] << q[5] << endl;
    cout << " " << q[6] << q[7] << endl << endl;
    return;
}
void move(int * q, int i) {
  if (i == 8) {
    print(q,i);
    return;
  }
  for (int j = 1; j < 9; j++) {
      q[i] = j;
      if (test(q,i)) {
          move(q, i+1);
      }
  }
}

int main() {
    int q[8];
    move(q,0);
    return 0;
}

