#include <iostream>
using namespace std;
int main()
{
    //difference between 'a' and 'A' in ASCII is 32 
    char str;
    cin >> str;
    int asciiCode = str;
    if (asciiCode >= 65 && asciiCode <= 90)
    {
        cout << (char)(asciiCode + 32) << '\n';
    }
    else
    {
        cout << (char)(asciiCode - 32) << '\n';
    }
}
