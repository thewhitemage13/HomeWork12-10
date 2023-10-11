#include <iostream>
using namespace std;

int Sum(int a, int b) 
{    
    if (a > b)return 0;
    return a + Sum(a + 1, b);
}

int main() {
    int a;
    int b;
    cout << "Enter the first number in the range: ";
    cin >> a;
    cout << "Enter a lower number in the range of: ";
    cin >> b;
    int sum = Sum(a,b);
    cout << sum;
}