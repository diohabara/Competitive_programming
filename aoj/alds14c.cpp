#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

#define M 1046527
#define NIL -1
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch)
{
    if (ch == 'A')
        return 1;
    else if (ch == 'C')
        return 2;
    else if (ch == 'G')
        return 3;
    else
        return 4;
}

/* convert a string into an integer value */
ll getKey(char str[])
{
    ll sum = 0, p = 1;
    int i;
    for (i = 0; i < strlen(str); i++) {
        sum += p * (getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int hash1(int key) { return key % M; }
int hash2(int key) { return 1 + (key % (M - 1)); }

bool find(char str[])
{
    ll key, i, hash;
    key = getKey(str);
    for (i = 0;; i++) {
        hash = (hash1(key) + i * hash2(key)) % M;
        if (strcmp(H[hash], str) == 0) {
            return true;
        } else if (strlen(H[hash]) == 0) {
            return false;
        }
    }
}

void insert(char str[])
{
    ll key, i, hash;
    key = getKey(str);
    for (i = 0;; i++) {
        hash = (hash1(key) + i * hash2(key)) % M;
        if (strcmp(H[hash], str) == 0) {
            return;
        } else if (strlen(H[hash]) == 0) {
            strcpy(H[hash], str);
            return;
        }
    }
}

int main()
{
    int i, n;
    char str[L], com[9];
    for (i = 0; i < M; i++)
        H[i][0] = '\0';

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %s", com, str);

        if (com[0] == 'i') {
            insert(str);
        } else {
            if (find(str)) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}