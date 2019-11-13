#include <iostream>
using namespace std;

string add(string a, string b)
{
    if(a.size() < b.size())
        swap(a, b);

    int j = a.size()-1;

    for(int i= b.size()-1; i>=0; i--, j--)
        a[j] += (b[i]-48); // 48 converts the string to integer

    for(int i= a.size()-1; i>0; i--)
    {
        if(a[i] > '9')
        {
            int carry = a[i]- 48;
            a[i-1] = ((a[i-1]-48) + carry/10) + 48;
            a[i] = (carry%10)+48;
        }
    }
    if(a[0] > '9')
    {
        string lastCarry;
        lastCarry += a[0];
        a[0] = ((a[0]-48)%10)+ 48;
        lastCarry[0] = ((lastCarry[0]-48)/10)+48;
        a = lastCarry+a;
    }
    return a;
}

