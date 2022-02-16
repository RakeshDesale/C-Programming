# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20],row1[20]="qwertyuiop",row2[20]="asdfghjkl",row3[20]="zxcvbnm";
    int i,j,count1=0,count2=0,count3=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        for(j=0;row1[j];j++){
            if(str[i]==row1[j])
                count1++;
        }
        for(j=0;row2[j];j++){
            if(str[i]==row2[j])
                count2++;
        }
        for(j=0;row3[j];j++){
            if(str[i]==row3[j])
                count3++;
        }
    }
    printf(count1==strlen(str) || count2==strlen(str) || count3==strlen(str)?"true":"false");
    return 0;
}
