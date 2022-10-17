#include <iostream>
#include <map>
using namespace std;
map<int, long long> m;
long long g(int n)
{
    int k = n / 4;
    if (n <= 3)
        return n;
    if (m[n] == 0)
    {
        if (n % 4 == 0)
            m[n] = g(3 * k);
        if (n % 4 == 1)
            m[n] = g(3 * k) + g(3 * k + 1);
        if (n % 4 == 2)
            m[n] = g(3 * k) + g(3 * k + 2);
        if (n % 4 == 3)
            m[n] = g(3 * k) + g(3 * k + 3);
    }
    return m[n];
}
int main()
{
    long long n;
    cout<<"Nhap n = ";
    cin >> n;
    cout<<"g("<<n<<") = "<<g(n);
}

