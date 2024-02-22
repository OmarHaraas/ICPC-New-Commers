#include <iostream>
using namespace std;
int main()
{
    /*
    Given a letter X. Determine whether X is Digit or Alphabet
    and if it is Alphabet determine if it is Capital Case or Small Case.

    Note:
    Digits in ASCII '0' = 48,'1' = 49 ....etc
    Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
    Small letters in ASCII 'a' = 97,'b' = 98 ....etc
    */
    char userInput;
    cin >> userInput;
    int asciiCode = userInput;
    if (asciiCode >= 48 && asciiCode <= 57)
    {
        cout << "IS DIGIT\n";
    }
    else if (asciiCode >= 65 && asciiCode <= 90)
    {
        cout << "ALPHA\nIS CAPITAL\n";
    }
    else if (asciiCode >= 97 && asciiCode <= 122)
    {
        cout << "ALPHA\nIS SMALL\n";
    }

    system("pause");
    return 0;
}
