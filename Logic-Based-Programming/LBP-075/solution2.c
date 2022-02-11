# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
