#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
unsigned long long factorial(int n)
{
    unsigned long long a = 1;
    for(int i = 2; i <= n; i++)
        a *= i;
    return a;
}
int main()
{
    long double shpos = 0.9;
    long double npos = 1-shpos;
    int numsh = 3;
    cout << "Enter the probability of a shot: ";
    cin >> shpos;
    npos = 1-shpos;
    cout << "Enter the number of shots: ";
    cin >> numsh;
    long double sum = 0;
    for(int i = 0; i <= numsh; i++)
    {
        long double pos = pow(npos,numsh-i)*pow(shpos,i);
        pos *= factorial(numsh)/(factorial(numsh-i)*factorial(i));
        cout << i << ": " << pos << '\n';
        sum += pos;
    }
    cout << "Total: " << sum << '\n';
}