#include<iostream>
#include<climits>
using namespace std;

void check(string &s, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(s[start], s[end]);
    check(s, start + 1, end - 1);
}

int main() {
    string s1 = "madam";
    string s2 = s1;
    check(s1, 0, s1.length() - 1);
    if (s1 == s2) {
        cout << "Haanji" << endl;
    } else {
        cout << "Naaji" << endl;
    }
    return 0;
}
