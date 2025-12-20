#include <iostream>
using namespace std;

// Square patterns
int square_patterns()
{
    cout << "Printing * in a square pattern.\n";
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << "Printing Character in Square pattern.\n";
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }

    cout << "Square pattern for increasing number.\n";
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num;
            num += 1;
        }
        cout << endl;
    }

    cout << "Square pattern for regular character.\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}

//  Traingle Patterns
int triangle_patterns()
{
    cout << "Printing traingle pattern for stars.\n";
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << "Printing triangle pattern for number.\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }

    cout << "Printing Character in triangle pattern.\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (ch);
        }
        cout << endl;
        ch += 1;
    }

    cout << "Triangle Patterns with contineous numbers.\n";
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num += 1;
        }
        cout << endl;
    }

    return 0;
}

int reverse_triangle_pattern()
{
    cout << "Reverse triangle pattern with decreasing numbers.\n";
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            // cout<<"The value of i + 1: "<<i+1<<endl;
            cout<<j;
        }
        cout << endl;
    }

    return 0;
}

int floyd_s_triangle_pattern()
{
    cout << "Printing numbers with increasing order.\n";
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }

    cout << "Printing Character with increasing order.\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}

int inverted_triangle_pattern()
{
    cout << "Printing number in inverted triangle shape with increasing line by line order.\n";
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    cout << "Printing Character in inverted triangle shape with increasing line by line order.\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    return 0;
}

int pyramid_patterns()
{
    cout << "Printing numbers in pyramid patterns.\n";
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

int hollow_diamond_patterns()
{
    cout << "Hollow Diamond Patterns.\n";
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j <= 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 1)
        {
            for (int j = 0; j < 2 * (n - 1 - i) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    square_patterns();
    cout << endl;
    triangle_patterns();
    cout << endl;
    reverse_triangle_pattern();
    cout << endl;
    floyd_s_triangle_pattern();
    cout << endl;
    inverted_triangle_pattern();
    cout << endl;
    pyramid_patterns();
    cout << endl;
    hollow_diamond_patterns();

    return 0;
}
