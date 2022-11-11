#include<iostream>
using namespace std;

int main() {
    cout << "enter the number:\n";
    int n;
    cin >> n;
    int x  = 2;
    while(x <= n/2+1) {
        if(n%x == 0) { 
            cout << "is not a Prime\n";
            return 0;
        }
        x++;
    }

    cout << "is Prime";
    
    return 0;
}