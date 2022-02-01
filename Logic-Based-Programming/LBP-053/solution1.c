# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30],shstr[30]="\0";
    int arr[30],i,length;
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<length;i++)
        shstr[arr[i]]=str[i];
    printf("%s",shstr);
    return 0;
}
