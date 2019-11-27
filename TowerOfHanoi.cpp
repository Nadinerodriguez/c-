#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> t[3];

    int n, candidate, to, from, move=0;
    cout << "Please enter a number of rings to move: ";
    cin >> n;
    cout << endl;
    
    // Intitializes the 3 towers
    for(int i = n+1; i >= 1; i--)
        t[0].push_back(i);
    t[1].push_back(n+1);
    t[2].push_back(n+1);
    
    // Initializes towers and candidate
    if((n%2) == 1)
        to = 1;
    else
        to = 2;
    while(t[1].size() < n+1) {
        t[to].push_back(t[from].back());
        t[from].pop_back();
        cout << "Move number " << ++move << ": Transfer ring " << candidate << " from tower " << char(from+65) << " to tower " << char(to+65) << endl;
  
    return 0;
}
