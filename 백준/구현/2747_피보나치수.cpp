#include <iostream>

using namespace std;

int arr[100] = {0,};

int f(int n)
{
    if(n <= 1) return n;

    if(arr[n] > 0) return arr[n];

    arr[n] = f(n-1) + f(n-2);

    return arr[n];
}

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << f(n);
}