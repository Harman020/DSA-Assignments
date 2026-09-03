
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[10], temp;
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter " << n << " strings:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}

