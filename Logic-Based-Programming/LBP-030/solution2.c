# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int low,high,ispalindrome=1;
    scanf("%s",str);
    low=0;
    high=strlen(str)-1;
    while(low<=high){
        if(str[low]!=str[high]){
            ispalindrome=0;
            break;
        }
        low++;
        high--;
    }
    printf((ispalindrome==1)?"valid":"invalid");
    return 0;
}
