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

    // Operators
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
    friend ostream& operator << (ostream& os, Rat r);
    friend istream& operator >> (istream& is, Rat& r);
};
int gcd(int a, int b) {
    if(b == 0) // Base Case
        return a;
    else
        return gcd(b, a % b); // Recursive Call
}
ostream& operator << (ostream& os, Rat r) {
    if(r.n > r.d) {
        if(r.n % r.d == 0)
            os << r.n / r.d << endl;
        else
            os<<r.n/r.d<< " " << r.n%r.d  << " / " << r.d <<endl;
    }
    else
        os<< r.n / gcd(r.n, r.d) << " / " << r.d / gcd(r.n, r.d) <<endl;
    return os;
}
istream& operator >> (istream& is, Rat& r) {
    is>>r.n>>r.d;
    return is;
}
