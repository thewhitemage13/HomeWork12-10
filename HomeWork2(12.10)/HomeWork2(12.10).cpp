
#include <iostream>
using namespace std;

int degreeofnumber(int number, int degree) {
   
    if (degree == 0)return 1;
    return number * degreeofnumber(number, degree - 1);
}
int main() {
    int number;
    int degree;
    cout << "enter a number: ";
    cin >> number;
    cout << "enter the degree: ";
    cin >> degree;
    int result = degreeofnumber(number, degree);
    cout << result;
}