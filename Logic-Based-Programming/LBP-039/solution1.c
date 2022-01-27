# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int BlackJack(int,int);

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",BlackJack(n1,n2));
    return 0;
}

int BlackJack(int n1, int n2){
    if(n1>21 && n2>21)
        return 0;
    else if(n1==21 && n2==21)
        return 21;
    else if (n1>21)
        return n2;
    else if (n2>21)
        return n1;
    else
        return (n1>n2)?n1:n2;
}
