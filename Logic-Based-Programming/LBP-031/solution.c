# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int,int,int);
int max(int,int,int);
int maxDigit(int);

int main() {
    int n1,n2,n3,w,x,y,z;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>=100 && n1<=999 && n2>=100 && n2<=999 && n3>=100 && n3<=999){
        w=min(n1%10,n2%10,n3%10);
        x=min((n1/10)%10,(n2/10)%10,(n3/10)%10);
        y=min((n1/100)%10,(n2/100)%10,(n3/100)%10);
        z=max(maxDigit(n1),maxDigit(n2),maxDigit(n3));
        printf("%d",z*1000+y*100+x*10+w);

    }
    else
        exit(0);
    return 0;
}

int min(int a, int b, int c){
    return (a<b && a<c)?a:(b<c?b:c);
}

int max(int a, int b, int c){
    return (a>b && a>c)?a:(b>c?b:c);
}

int maxDigit(int n){
    int d,m=0;
    while(n!=0){
        d=n%10;
        if(d>m)
            m=d;
        n=n/10;
    }
    return m;
}
