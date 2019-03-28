#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX = 1000000;

int top, S[100];

void push(int x){
    // topを加算してからその位置へ挿入
    top++;
    S[top] = x;
}

int pop(){
    top--;
    // topが指していた要素を返す
    return S[top+1];
}

int main(){
    int a, b;
    top = 0;
    char s[100];
    
    while(scanf("%s", s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a + b);
        } else if(s[0] == '-'){
            b = pop();
            a = pop();
            push(a - b);
        } else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push (atoi(s));  // 文字列を数字に変える関数atoi
        }
    }

    printf("%d\n", pop());

	return 0;
}