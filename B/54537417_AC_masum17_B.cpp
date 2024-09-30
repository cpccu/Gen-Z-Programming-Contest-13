#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string word;
        cin >> word;
        
        // If the word length is more than 10 characters
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }
    
    return 0;
}
