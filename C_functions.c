#include <stdio.h>

// void area();    //Initializing a function
// void avg3();
// void c2f();
// int fib_n(int);
// int sum_n(int);
// void stri();
// void streql();
// void strd();
int main(){
    
// area();     //calling the function
// avg3();
// c2f();

// After returning a value from function, for example result from sum func.

// If in main,
// Sum(2, 3) -> no result

// But if,
// Int c;
// c = sum(2, 3);
// printf("%d", c);  -> sum of the numbers

// int num, posn;
//     printf("Enter the number in series: ");
//     scanf("%d", &num);

//     if(num < 0){
//         printf("Fibonacci series in negative is not possible.");
//     }
//     else{
//         posn = fib_n(num);
//         printf("The %d number in series is: %d", num, posn);
//     }

//sum of first n natural numbers-
// int n, sum;
// printf("Enter the value for n: ");
// scanf("%d", &n);
// if(n < 0){
//     printf("The number can't be negative.");
// }
// else{
//     sum = sum_n(n);
//     printf("The sum of first n natural numbers is: %d", sum);
// }

// //Star printing
// int rows;
// int i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
    
//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= i; j++){
//             printf("*");
//         }
//     printf("\n");
//     }

//Star printing using function-
// int rows;
// printf("Enter the number of rows: ");
// scanf("%d", &rows);
// stri(rows);

//-Equal stars-
// int rows = 0, num = 0;
// printf("Enter the number of rows: ");
// scanf("%d", &rows);
// printf("Enter the number of stars: ");
// scanf("%d", &num);
// streql(rows, num);

//Decreasing stars-
// int rows;
// printf("Enter the number of rows: ");
// scanf("%d", &rows);
// strd(rows);


    return 0;
}



// void area(int a){       //definition of function
//     int area;
//     printf("Enter the side: ");
//     scanf("%d", &a);
//     area = 4 * a;
//     printf("The area: %d", area);
// }
// void avg3(int a1, int b1, int c1){
//     int avg;
//     int a, b, c;
//     printf("Enter the numbers: ");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);
//     avg = (a + b + c)/3;
//     printf("The average is: %d", avg);
// }
// void c2f(){
//     char c_or_f;
//     float temp, output_temp;
//     printf("Enter the base unit:- \nC or F?: ");
//     scanf("%c", &c_or_f);
//     printf("Enter the value in %c: ", c_or_f);
//     scanf("%f", &temp);

//     if(c_or_f == 'C' || c_or_f == 'c'){
//         output_temp = (9 * temp / 5)  + 32;
//         printf("Temperature in F equivalent is: %.2f", output_temp);
//     }
//     else if(c_or_f == 'F' || c_or_f == 'f'){
//         output_temp = ((temp - 32) * 5) / 9;
//         printf("Temperature in C equivalent is: %.2f", output_temp);
//     }
// }
// int fib_n(int num){
//     if (num == 0){
//         return 0;
//     }
//     else if(num == 1){
//         return 1;
//     }
//     else{
//         return(fib_n(num - 1) + fib_n(num - 2));
//     }
// }
// int sum_n(int n){
//     int sum = 0;
//     if(n == 0){
//         return sum;
//     }
//     else{
//     sum = n + sum_n(n - 1);     //recursion
//     }
// }
// void stri(int rows){
// int i, j;
//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= i; j++){
//             printf("*");
//         }
//     printf("\n");
//     }
// }
// void streql(int rows, int num){
//     int i, j;
//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= num; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// void strd(int rows){
//     int i, j;
//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= rows - i + 1; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }