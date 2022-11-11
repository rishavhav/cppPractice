#include<iostream>
using namespace std;

int main()
{
    cout << "enter in F:\n";
    float f;
    cin >> f;
    float c = 5/9*(f - 32);
    cout << "Temp in cel:" << c;
    return 0;
}