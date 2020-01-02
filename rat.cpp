#include <iostream>
using namespace std;

class Rat {
private:
    int n;
    int d;

public:
    // Constructors
    Rat() {
        n = 0;
        d = 1;
    }
    Rat(int i, int j) {
        n = i;
        d = j;
    }
    Rat(int i) {
        n = i;
        d = 1;
    }
    
    int getN() { return n; }
    int getD() { return d; }   
    void setN(int i) { n = i; }
    void setD(int i) { d = i; }
