#include <iostream>
using namespace std;
int main()
{
    double tr[3];
    cout << "enter three values for triangle: " << endl;
    for(int d = 0; d < 3; d++)
    {
        cout << d + 1 << ": ";
        cin >> tr[d];
    }
    int a = 0;
    while(a != 1)
    {
        if(tr[0] + tr[1] > tr[2] and tr[0] + tr[2] > tr[1] and tr[1] + tr[2] > tr[0])
        {
            cout << "The triangle is possible" << endl;
        }
        else
        {  
            cout << "This is not a triangle" << endl;
            break;
        }
        if(tr[0] != tr[1] and tr[1] != tr[2] and tr[0] != tr[2])
        {
            cout << "The triangle's sides are different" << endl;
            break;
        }
        else if(tr[0] == tr[1] and tr[1] == tr[2] and tr[0] == tr[2])
        {
            cout << "The triangle's sides are equal" << endl;
            break;
        }
        else
        {
            cout << "The triangle is isosceles" << endl;
            break;
        }
    }
    cout << "done!" << endl;
    return 0;
}