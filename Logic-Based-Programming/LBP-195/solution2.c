# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rating(int);

int main() {
    int points;
    scanf("%d",&points);
    if(points>=30 && points<=100)
        rating(points);
    else
        exit(0);
    return 0;
}

void rating(int points){
    if(points>=30 && points<=50)
        printf("Average");
    else if(points>=51 && points<=60)
        printf("Good");
    else if(points>=61 && points<=80)
        printf("Excellent");
    else
        printf("Outstanding");
}
