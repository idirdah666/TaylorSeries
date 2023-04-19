#include <iostream>
#include <cmath>
using namespace std;

float taylorSeries(float x, int n)
{
    static float p = 1, f = 1;
    float r;
    if (n == 0)
        return 1;
    else
    {
        r = taylorSeries(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

int main()
{
    cout << taylorSeries(1, 10);
    return 0;
}