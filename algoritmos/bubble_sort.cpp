#include <iostream>

using namespace std;

int main()
{
    int vet[] = { 5, 3, 8, 6, 7, 2 };
    int len = sizeof(vet) / sizeof(vet[0]);

    // bubble sort O(n²)
    for ( int i = 0; i < len; ++i ) {
        for ( int j = 0; j < len - i -1; ++j ) {
            if ( vet[j] > vet[j + 1] ) {
                int n = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = n;
            }

        }
    }

    cout << '[';
    for (int v: vet) {
        cout << v << ", ";
    }
    cout << ']';

    return 0;
}