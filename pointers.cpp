//
//  main.cpp
//  Pointers
//
//  Created by Nadine Rodriguez on 10/24/19.
//  Copyright © 2019 Nadine Rodriguez. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
//    int b[3][2];
//    cout<< "1: "<<sizeof(b)<<endl; // 8 bits for each element 8x3 = 24
//    cout<< "2: "<<sizeof(b+1)<<endl;
//    cout<< "3: "<<sizeof(*(b+0))<<endl;
//    // the next line prints 0012FF68
//    cout<< "4: "<<"The address of b is: "<<b<<endl;
//    cout<< "5: "<<"The address of b+1 is: "<<b+1<<endl;
//    cout<< "1: "<<"The address of &b is: "<<&b<<endl;
//    cout<< "6: "<<"The address of &b+1 is: "<<&b+1<<endl;
    
    double b[3][2]= {10,20,30,40,50,60};
    cout << "Size in bytes of b as an array: " << sizeof(b) << endl;
    cout << "Size in bytes of b as a pointer: " << sizeof(b+0) << endl;
    cout << "Size in bytes of b[0] as an array: " << sizeof(b[0]) << endl;
    cout << "Size in bytes of b[0] as a pointer: " << sizeof(b[0]+1) << endl;
    cout << "Size in bytes of b[1] as an array: " << sizeof(b[0]) << endl;
    cout << "Size in bytes of b[1] as a pointer: " << sizeof(b[0]+1) << endl;
    cout << "Size in bytes of b[2] as an array: " << sizeof(b[0]) << endl;
    cout << "Size in bytes of b[2] as a pointer: " << sizeof(b[0]+1) << endl;
    cout << "Address of b[0]: " << &b[0] << endl;
    cout << "Value of b+0: " << b+0 << endl;
    cout << "Adress of b[1]: " <<&b[1] << endl;
    cout << "Value of b+1: " << b+1 << endl;
    cout << "Adress of b[2]: " <<&b[2] << endl;
    cout << "Value of b+2: " << b+2 << endl;
    int i;
    cout << sizeof(i) << endl;


    return 0;
}
