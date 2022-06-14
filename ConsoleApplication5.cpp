


//С=n!/m!(n-m)!

#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int factorial(unsigned long long int a) {
    unsigned long long int afactorial = 1;
    for (int i = 1; i <= a; i++)
        afactorial = afactorial * i;
    return afactorial;
}





int main()
{
    unsigned long long int k, n, C;
    cout << "Vvedite n" << endl;
    cin >> n;
    cout << "Vvedite k" << endl;
    cin >> k;
    C = factorial(n) / (factorial(k) * factorial(n - k));
   

    int* a = new int[n];
    for (int i = 0; i < k; i++) {
        a[i] = i+1;
        a[i + 1] = n+1;
        a[i + 2] = 0;
    }
    int r=1;
    do {
        for (int i = 0; i < k; i++)
            cout << a[i] << " ";
        cout << endl;
        int j = 0;
        while (a[j] + 1 == a[j + 1]) {
            a[j] = j+1;
            j++;
        }
        if (j < k)
            a[j] += 1;
        else r = 0;
    } while (r != 0);
    cout << "Resultat " << C << endl;
    cout"///////////////";
    cout" ";
}