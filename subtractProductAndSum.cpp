#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int mult = 1;
    while(n >0) {
        int x = n%10;
        mult = mult*x;
        sum = sum + x;
        n = n/10;
    }
    cout<< mult - sum;
    return 0;
}