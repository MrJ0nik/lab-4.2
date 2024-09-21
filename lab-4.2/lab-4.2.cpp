#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{
    double x, y, A, B, Xpoc, Xkinc, Xkrok;
    //cout << "x = "; cin >> x;
    cout << "Xpoc = "; cin >> Xpoc;
    cout << "Xkinc = "; cin >> Xkinc;
    cout << "Xkrok = "; cin >> Xkrok;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = Xpoc;

    A = abs(4 * x - 1);

    while (x <= Xkinc)
    {

        if (x < 0)
        {
            B = pow(x, 7) - 2 * x;
        }
        else 
        {
            if (x >= 0 && x < 3)
                B = atan((exp(x) + 1) / 8);
            else {
                B = pow(x, 4) + exp(pow(x, 2) + 3);
            }
        }

        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += Xkrok;  
    }

    cout << "---------------------------" << endl;
    return 0;
}
