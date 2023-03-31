#include <iostream>
#include <cmath>
using namespace std;
bool isprime(unsigned long long & a);
int main()
{
    unsigned long long num = 1;
    cout << "YOU CAN USE THIS WHILE YOUR NUMBER IS NOT ZERO" << endl;
    while(num != 0)
    {
        cout << "what number you want to check?" << endl;
        cout << ":";
        cin >> num;
        if(isprime(num))
            cout << "this number is prime!" << endl;
        else
            cout << "this number is not prime!" << endl;
        cout << endl;
    }
}
bool isprime(unsigned long long & a)
{
    for(long b = 2; b <= sqrt(a); b++)
        if(a % b == 0)
            return false;
    return true;
}