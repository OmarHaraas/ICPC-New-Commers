#include <iostream>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;

    // get the last digit of x ,y
    cout<<(x%10)+(y%10);
    
    return 0;
}