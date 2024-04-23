#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X = 500;
    double Y = 35.0, km;
    km = X / Y;
    cout << fixed << setprecision(3) << km << " km/l";

    return 0;
}
