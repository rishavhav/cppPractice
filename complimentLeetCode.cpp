#include<iostream>
using namespace std;

int main() {
    cout << "enter n: \n";
    int n;
    cin >> n;

    if(n == 0 )
     cout << "complement is: " << 1;

    int m = n;
    int andWithThis = 0;
    while(m != 0) {
        andWithThis = (andWithThis << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & andWithThis;

    cout << "complement is: " << ans;
}