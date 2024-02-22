#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;

    // floar of => a/b
    // ceil of => a/b
    // round of => a/b
    cout << "floor " << a << " / " << b <<" = "<< floor(a / (double)b) << endl;
    cout << "ceil " << a << " / " << b << " = "<<ceil(a / (double)b) << endl;
    cout << "round " << a << " / " << b <<" = "<< round(a / (double)b) << endl;

    return 0;
}