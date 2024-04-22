#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int a = 7, b = 14, c = 106;
    int maiorAB = (a + b + abs(a - b)) / 2;
    ( c > maiorAB ) ? cout << c << " eh o maior": cout << maiorAB << " eh o maior";

    return 0;
}