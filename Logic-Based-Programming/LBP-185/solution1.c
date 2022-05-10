# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ms1,me1,ms2,me2,ms3,me3,sav1,sav2,sav3;
    scanf("%d %d %d %d %d %d",&ms1,&me1,&ms2,&me2,&ms3,&me3);
    sav1 = ms1 - me1;
    sav2 = ms2 - me2;
    sav3 = ms3 - me3;
    printf("%d",(sav1>sav2 && sav1>sav3)?sav1:((sav2>sav3)?sav2:sav3));
    return 0;
}
