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
    // Getters & Setters
    int getN() { return n; }
    int getD() { return d; }   
    void setN(int i) { n = i; }
    void setD(int i) { d = i; }
    
    Rat operator+(Rat r){
        Rat t;
        t.n = n*r.d + d*r.n;
        t.d = d*r.d;
        return t;
    }
    Rat operator-(Rat r) {
        Rat t;
        t.n = n*r.d - d*r.n;
        t.d = d*r.d;
        return t;
    }
    Rat operator*(Rat r) {
        Rat t;
        t.n = n*r.n;
        t.d = d*r.d;
        return t;
    }
    Rat operator/(Rat r) {
        Rat t;
        t.n = n*r.d;
        t.d = d*r.n;
        return t;
    }
