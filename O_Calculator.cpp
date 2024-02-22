#include <iostream>
using namespace std;
int main()
{
    string math_expression;
    cin >> math_expression;

    // str1 to hold first number,first part before the {-+/*}
    string str1 = "", str2 = "";
    int indexOfOperation = 0; // to know from where to start part2 after operation
    char operation = '/';     // as initial value..

    // get first part
    for (int i = 0; i < math_expression.length(); i++)
    {
        if (math_expression[i] == '+' ||
            math_expression[i] == '*' ||
            math_expression[i] == '/' ||
            math_expression[i] == '-')
        {
            operation = math_expression[i];
            indexOfOperation = i;
            break;
        }
        str1 += math_expression[i];
    }
    // for getting the number after the operation.
    for (int i = indexOfOperation + 1; i < math_expression.length(); i++)
    {
        str2 += math_expression[i];
    }
    cout << "str1 = " << str1 << '\n';
    cout << "oper = " << operation << '\n';
    cout << "str2 = " << str2 << '\n';
}