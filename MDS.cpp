#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of a table: ";
    cin >> n;
    cout << "Enter values: " << '\n';
    int x[n];
    long double p[n];
    for(int i = 0; i < n; i++)
    {
        cout << "x" << i+1 << ": ";
        cin >> x[i];
    }
    cout << "Enter probabilities: " << '\n';
    for(int i = 0; i < n; i++)
    {
        cout << "p" << i+1 << ": ";
        cin >> p[i];
    }
    cout << '\n';
    cout << "X : ";
    for(int i = 0; i < n; i++)
        cout << x[i] << " | ";
    cout << '\n';
    cout << "P : ";
    for(int i = 0; i < n; i++)
        cout << p[i] << " | ";
    cout << '\n';
    long double m, d, s;
    for(int i = 0; i < n; i++)
        m += x[i]*p[i];
    cout << '\n';
    cout << "M(X)2 : ";
    for(int i = 0; i < n; i++)
    {
        long double dp = pow(x[i]-m,2);
        cout << dp << " | ";
        d += p[i]*dp;
    }
    cout << '\n';
    cout << "P : ";
    for(int i = 0; i < n; i++)
        cout << p[i] << " | ";
    cout << '\n' << '\n';
    s = sqrt(d);
    cout << "M(X) = " << m << '\n';
    cout << "D(X) = " << d << '\n';
    cout << "O(X) = " << s << '\n';
}