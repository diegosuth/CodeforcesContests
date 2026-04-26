#include <bits/stdc++.h>
using namespace std;

// Function to calculate x raised to the power y in O(logn)
long long power(long long x, long long y)
{
    long long temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
/*Driver code */
int main()
{
    long long x = 123456789; // Base
    long long y; // Exponent
    cin >> y;

    long long result = power(x, y) % 10;

    cout << result << endl;

    return 0;
}