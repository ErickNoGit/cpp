#include <iostream>
#include <iomanip>

int main()
{
    double MEDIA, a = 2, b = 3, c = 5;
    MEDIA = (a + b + c) / 3.;
    std::cout << "MEDIA = " << std::setprecision(2) << MEDIA;

    return 0;
}