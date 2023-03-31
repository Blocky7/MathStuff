#include "operations.h"
int main()
{
    double a;
    double b;
    double c;
    int choise;
    double result;
    cout << "CALCULATOR" << endl;
    cout << "enter value: ";
    cin >> a;
    while(choise != 10)
    {
        if(choise == 9)
        {
            cout << "enter value: ";
            cin >> a;
        }
        cout << "What operation do?" << endl;
        cout << "1) Multiplication  2) Division  " << endl;
        cout << "3) Plus            4) Minus     " << endl;
        cout << "5) Area            6) Volume    " << endl;
        cout << "7) Power           8) Medium    " << endl;
        cout << "9) Reset Values    10) Exit     " << endl;
        cin >> choise;
        if(choise == 10)
            break;
        if(choise != 9 and choise != 8)
        {
            cout << "enter second value: ";
            cin >> b;
        }
        if(choise == 6)
        {
            cout << "enter third value: ";
            cin >> c;
        }
        switch(choise)
        {
            case 1: result = mult(a, b);
            break;
            case 2: result = div(a, b);
            break;
            case 3: result = a + b;
            break;
            case 4: result = a - b;
            break;
            case 5: result = mult(a,b);
            break;
            case 6: result = volume(a,b,c);
            break;
            case 7: result = power(a,b);
            break;
            case 8: 
            {
                int e;
                cout << "enter size: ";
                cin >> e;
                double d[e];
                for(int f = 0; f < e; f++)
                {
                    cout << "enter " << f + 1 << " out of " << e << " " << endl;
                    cin >> d[f];
                }
                result = medium(d, e);
            }
            break;
            case 9:
            {
                a = 0;
                b = 0;
                c = 0;
            }
            break;
        }
        if(choise == 1)
            cout << a << " * " << b << " = " << result << endl;
        if(choise == 2)
            cout << a << " / " << b << " = " << result << endl;
        if(choise == 3)
            cout << a << " + " << b << " = " << result << endl;
        if(choise == 4)
            cout << a << " - " << b << " = " << result << endl;
        if(choise == 5)
            cout << "Area of " << a << " and " << b << " is " << result << endl;
        if(choise == 6)
            cout << "Volume of " << a << ", " << b << " and " << c << " is " << result << endl;
        if(choise == 7)
            cout << a << " with power " << b << " is " << result << endl;
        if(choise == 8)
            cout << "medium of your list is " << result << endl;
        a = result;
    }
    cout << "done" << endl;
}