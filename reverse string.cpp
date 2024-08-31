#include <iostream>
using namespace std;
int main() {
    string s = "Sivanvitha";
    string revstr = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        revstr =revstr+ s[i];
    }
    cout<<"Reversed string is: "<<revstr;
}
