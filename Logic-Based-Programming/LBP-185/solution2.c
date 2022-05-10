# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int highSaving(int, int, int, int, int, int);

int main() {
    int ms1,me1,ms2,me2,ms3,me3;
    scanf("%d %d %d %d %d %d",&ms1,&me1,&ms2,&me2,&ms3,&me3);
    printf("%d",highSaving(ms1,me1,ms2,me2,ms3,me3));
    return 0;
}

int highSaving(int ms1, int me1, int ms2, int me2, int ms3, int me3){
    int sav1,sav2,sav3;
    sav1 = ms1 - me1;
    sav2 = ms2 - me2;
    sav3 = ms3 - me3;
    return ((sav1>sav2 && sav1>sav3)?sav1:((sav2>sav3)?sav2:sav3));
}
