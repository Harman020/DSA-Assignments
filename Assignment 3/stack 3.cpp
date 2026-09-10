#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack {
private:
    char arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char ch) {
        if (top < MAX - 1) {
            arr[++top] = ch;
        }
    }

    char pop() {
        if (top == -1) {
            return '\0';
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};
bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string expression) {
    Stack s;

    for (char ch : expression) {

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        // Check closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            if (s.isEmpty()) {
                return false;
            }

            char open = s.pop();

            if (!isMatching(open, ch)) {
                return false;
            }
        }
    }

    return s.isEmpty();
}

int main() {
    string expression;

    cout << "Enter an expression: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "Expression has balanced parentheses." << endl;
    } else {
        cout << "Expression has unbalanced parentheses." << endl;
    }

    return 0;
}
