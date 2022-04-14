# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int arr[100],n,i;
    scanf("%[^\n]s",str);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
    }
    for(i=0;i<n;i++)
        printf("%c",str[arr[i]]);
    return 0;
}
