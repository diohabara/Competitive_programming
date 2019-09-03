#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

struct Node {
    int key;
    Node* next;
    Node* prev;
};

Node* nil;

Node* listSearch(int key)
{
    Node* cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void init()
{
    nil = (Node*)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList()
{
    Node* cur = nil->next;
    int isf = 1;
    while (1) {
        if (cur == nil) {
            break;
        }
        if (isf == 0) {
            printf(" ");
        }
        printf("%d", cur->key);
        cur = cur->next;
        isf = 0;
    }
    printf("\n");
}

void deleteNode(Node* t)
{
    if (t == nil)
        return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst()
{
    deleteNode(nil->next);
}

void deleteLast()
{
    deleteNode(nil->prev);
}

void deleteKey(int key)
{
    deleteNode(listSearch(key));
}

void insert(int key)
{
    Node* x = (Node*)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();
    for (i = 0; i < n; i++) {
        scanf("%s%d", com, &key);
        if (com[0] == 'i') {
            insert(key);
            np++;
            size++;
        } else {
            if (strlen(com) > 6) {
                if (com[6] == 'F') {
                    deleteFirst();
                } else {
                    deleteLast();
                }
            } else {
                deleteKey(key);
                nd++;
            }
            size--;
        }
    }

    printList();
    return 0;
}