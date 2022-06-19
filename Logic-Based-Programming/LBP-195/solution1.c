# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int points;
    scanf("%d",&points);
    if(points>=30 && points<=100){
        if(points>=30 && points<=50)
            printf("Average");
        else if(points>=51 && points<=60)
            printf("Good");
        else if(points>=61 && points<=80)
            printf("Excellent");
        else
            printf("Outstanding");
    }
    else
        exit(0);
    return 0;
}
