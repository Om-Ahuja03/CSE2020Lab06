// lab6.cpp
#include <iostream>
#include "stack.cpp"

using namespace std;

int main() {
    Stack<char> sc;
    char c;
    bool balanced = true;

    cout << "Enter chars, exit when enter 'x': ";

    while (cin >> c && c != 'x') {
        if (c == '(') {
            sc.push(c);
        } else if (c == ')') {
            if (!sc.empty()) {
                sc.pop();
            } else {
                balanced = false;
                break;
            }
        }
    }

    if (!sc.empty()) {
        balanced = false;
    }

    if (balanced) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are unbalanced." << endl;
    }

    return 0;
}
