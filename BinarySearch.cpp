#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start =  0;
    int end = size-1;
    int mid = start + (end - start )/2;

    while(start <= end) {
        if(arr[mid]== key)
            return mid;
         if(arr[mid] < key ) {
            start = mid + 1;
         } else {
            end = end - 1;
         }

         mid = start + (end - start )/2;
    }
    return -1;
}

int main() {
    int even[6] = {2,3,67,200,324,999};
    int odd[5] = {2,3,67,200,324};
    cout << binarySearch(even, 6, 999);
    return 0;
}