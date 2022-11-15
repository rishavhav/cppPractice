#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int> arr, int size) {
    int start = 0;
    int end = size-1;

    while(start < end ) {
        swap(arr.at(start), arr.at(end));
        start++;
        end--;
    }

    for(int i=0; i<size; i++) {
        cout << arr.at(i) << " ";
    }
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }

    reverseArray(vec, n);

    
         
    
    

    return 0;
}