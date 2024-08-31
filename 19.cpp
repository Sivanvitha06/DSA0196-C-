#include <iostream>
using namespace std;
int main() {
    string s = "otto";
    string revstr = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        revstr =revstr+ s[i];
    }
    if (s == revstr)
        cout <<s<< " is palindrome";
    else
        cout <<s<< " is not palindrome";
}
