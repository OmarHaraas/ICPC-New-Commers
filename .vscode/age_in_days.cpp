#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int years = 0, months = 0;
    while (n >= 365)
    {
        n -= 365;
        years++;
    }
    while (n >= 30)
    {
        n -= 30;
        months++;
    }

    cout << years << " years\n";
    cout << months << " months\n";
    cout << n << " days\n";
}