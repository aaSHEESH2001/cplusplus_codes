#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string rev_char(string c) {
    int start = 0;
    int end = c.size() - 1;
    while (start <= end) {
        swap(c[start], c[end]);
        start++;
        end--;
    }
    return c;
}

string check_string(string s) {
    string c;
    string rev_string;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            c += s[i];
        } else {
            rev_string += rev_char(c) + ' ';
            c = "";
        }
    }
    rev_string += rev_char(c); // Reverse the last word
    return rev_string;
}

int main() {
    string s = "Hello World";
    string rev = check_string(s);
    cout << rev << endl;
    return 0;
}