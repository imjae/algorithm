#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;

    cin >> input;

    int a = input / 10000;
    int b = (input % 10000) / 1000;
    int c = (input % 1000) / 100;
    int d = (input % 100) / 10;
    int e = (input % 10) / 1;

    cout << '[' << a * 10000 << ']' << endl;
    cout << '[' << b * 1000 << ']' << endl;
    cout << '[' << c * 100 << ']' << endl;
    cout << '[' << d * 10 << ']' << endl;
    cout << '[' << e * 1 << ']' << endl;

    return 0;
}