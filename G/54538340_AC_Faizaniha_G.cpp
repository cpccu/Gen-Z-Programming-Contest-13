#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int result = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];
        if (ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + ('a' - 'A');
        }
        if (ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + ('a' - 'A');
        }
        if (ch1 < ch2)
        {
            result = -1;
            break;
        }
        else if (ch1 > ch2)
        {
            result = 1;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
