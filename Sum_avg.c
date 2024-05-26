// Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
#include <stdio.h>
void sum_avg(int num1, int num2, int *sum, float *avg){         //made sum and avg as pointers
    *sum = num1 + num2;                                         //*sum written to get the value-of
    *avg = (float)*sum / 2;     //typecasted to float
}
int main(){
    int i, j, sum;
    float avg;
    i = 10;
    j = 20;
sum_avg(i, j, &sum, &avg);          //& is address-of operator
printf("sum: %d\n", sum);
    printf("avg: %.2f\n", avg);

    return 0;
}