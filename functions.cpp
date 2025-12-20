#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int sumN(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int n_factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int binomial_coeff(int n, int r)
{
    int nCr = n_factorial(n) / (n_factorial(r) * n_factorial(n - r));
    return nCr;
}

int main()
{
    int a, b;
    cout << "Enter the value of a: \n";
    cin >> a;
    cout << "Enter the value of b: \n";
    cin >> b;

    int c = sum(a, b);

    cout << "The sum of a and b is: " << c;

    int minimum = min(a, b);
    cout << "The minimum value is: " << minimum << endl;

    int n;
    cout << "Enter the value of n: \n";
    cin >> n;

    int sum_of_series = sumN(n);
    cout << "Sum of N number is: " << sum_of_series << endl;

    int factorial = n_factorial(n);
    cout << n << " Factorial equals: " << factorial << endl;

    cout << sumOfDigits(123) << endl;

    int n_ = 8;
    int r = 2;

    cout << n << " Choose " << r << " is: " << binomial_coeff(n_, r) << endl;

    return 0;
}