#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c = 0;
    c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c = 0;
    c = a - b;
    return c;
}

int multi(int a, int b)
{
    int c = 0;
    c = a * b;
    return c;
}
int main()
{
    int a, b, c, ad = 0, su = 0, mu = 0;
    cout << "Enter the first number ";
    cin >> a;
    cout << "Enter the second number ";
    cin >> b;
    cout << "What type of arithmatic operation you want to perform" << endl
         << "Enter 1 for addition" << endl
         << "Enter 2 for substration" << endl
         << "Enter 3 for multiplication" << endl;
    cin >> c;
    switch (c)
    {
    case 1:
        ad = add(a, b);
        cout << "The addition of Two number's is " << ad << endl;
        break;
    case 2:
        su = sub(a, b);
        cout << "The sub of Two number's is " << su << endl;
        break;
    case 3:
        mu = multi(a, b);
        cout << "The multiplication of Two number's is " << mu << endl;
        break;
    default:
        cout << "Please select a correct number";
        break;
    }

    return 0;
}