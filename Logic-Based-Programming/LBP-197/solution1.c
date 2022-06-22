# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s1[100],s2[100],s3[100] = "\0",s4[100] = "\0";
    int i,j = 0;
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i];i++){
        if(s1[i] != '#' && s1[i+1] != '#')
            s3[j++] = s1[i];
    }
    j = 0;
    for(i=0;s2[i];i++){
        if(s2[i] != '#' && s2[i+1] != '#')
            s4[j++] = s2[i];
    }
    printf((strcmp(s3,s4)==0)?"1":"0");
    return 0;
}
