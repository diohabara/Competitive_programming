#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int top;
const int MAX = 110;
int s[MAX];
string c;

void initialize() { top = 0; }

bool isEmpty() { return top == 0; }

bool isFull() { return top >= MAX - 1; }

void push(int x)
{
    s[++top] = x;
}

int pop()
{
    top--;
    return s[top + 1];
}

int main()
{
    initialize();
    int a, b;
    while (cin >> c) {
        if (c == "+") {
            a = pop();
            b = pop();
            push(a + b);
        } else if (c == "-") {
            a = pop();
            b = pop();
            push(b - a);
        } else if (c == "*") {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(stoi(c));
        }
    }
    cout << pop() << endl;

    return 0;
}