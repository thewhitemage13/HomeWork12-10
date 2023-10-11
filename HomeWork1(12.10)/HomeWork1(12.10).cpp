#include <iostream>
using namespace std;

void Sum(int a)
{
    if (a > 0)
    {
        cout << a % 10;
        Sum(a / 10);
    }
}

int main()
{
    int a;
    cin >> a;
    Sum(a);
}