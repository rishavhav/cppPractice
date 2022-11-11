#include<math.h>
#include<iostream>
using namespace std;


int main() {
    cout << "enter the num";
    int n, i = 0;
    cin >> n;
    bool isPositive = n > 0 ? true : false;
    long long int rev = 0;
    while(n) {
        int x = n%10;
        rev = 10*rev + x;
        if(rev > INT_MAX || rev < INT_MIN)
            return 0;
        n = n/10;
    }
    

    rev = isPositive ? rev : -rev;
    cout << "reverse is: "<< rev;
    return 0;
}