#include<iostream>
using namespace std;

int main() {
    int a, ans=0;
    cin >> a;
    int arr[100];

    for(int i =0; i<a; i++){
        cin >> arr[i];
    }

    for(int i =0; i<a; i++){
        ans = ans^arr[i];
    }

    for(int i =1; i<a; i++){
        ans = ans^i;
    }

    cout << ans;

    return 0;
}