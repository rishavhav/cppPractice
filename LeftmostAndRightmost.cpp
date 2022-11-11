#include<iostream>
using namespace std;
#include <utility>
#include <tuple>
pair<int, int> binarySearch(int arr[], int size, int key) {
    pair<int, int> p;
    int start =  0;
    int end = size-1;
    int mid = start + (end - start )/2; // tackling large values of int
    while(start <= end) {
        if(arr[mid]== key) {
            int tempMid = mid;
            while(arr[mid] == key) {
                mid--;
            }
            while(arr[tempMid] == key) {
                tempMid++;
            }
            return std::make_pair(mid+1, tempMid-1);
        }
         if(arr[mid] < key ) {
            start = mid + 1;
         } else {
            end = end - 1;
         }

         mid = start + (end - start )/2;
    }
    return std::make_pair(-1, -1);
}

int main() {
    int even[6] = {2,3,67,200,324,999};
    int odd[5] = {1,2,3,3,5};
    int x,y;
    std::tie(x, y) = binarySearch(odd, 5, 3);
    cout << x << " " << y;
    return 0;
}