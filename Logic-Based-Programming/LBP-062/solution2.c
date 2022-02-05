# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[50],str2[]="bomb";
    int i,j,k,len,found=0;
    scanf("%[^\n]s",str1);
    for(i=0;str1[i];i++){
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i]=str1[i]+32;
    }
    len=strlen(str2);
    for(i=0;str1[i];i++){
        k=i;
        for(j=0;j<len;j++){
            if(str1[k]!=str2[j])
                break;
            k++;
        }
        
        if(j==len)
        found=1;
    }
    printf((found==1)?"DUCK!":"Relax, there's no bomb.");
    return 0;
}
