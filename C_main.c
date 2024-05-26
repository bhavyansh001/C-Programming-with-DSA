#include<stdio.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>

// void func_ptr();
// void ten_times();
int main(){
    printf("Hello world\n");

    // % operator
// Cannot be applied on float

// %d for integers

// %f for real values

// %c for characters

// Priority Operators
// 1st   * / %
// 2nd +   -
// 3rd =
// Operators of higher priority are evaluated first in the absence of parenthesis.

// Ternary operation
// Condition ?  expression-if-true ;  expression-if-false

// int skip = 5;
// int i = 0;
// while(i < 10){ 
// if(i  != skip) 
// continue;
// else
// printf("%d", i);
// }
// Prints just 5

// 1. Parameters are the values or variable placeholders in the function definition. Ex: a & b

// 2. Arguments are the actual values passed to the function to make a call. Ex: 2 & 3

// 3. A function can return only one value at a time.
// scanf("%d", &i); // [This & is important]
// printf("Entered the value:%d", i);

//////

// float l, b, area;
// l = 23.4;
// b = 12.5;
// area = l * b;
// printf("Area of given rectangle is %f", area);

// int l, b, area;
// printf("Enter the length: ");
// scanf("%d", &l);

// printf("Enter the breadth: ");
// scanf("%d", &b);
// area = l * b;

// printf("Area of given rectangle is %d", area);

// %s is for string

// int r;
// float pi = 3.14, area;

// printf("Enter the radius: ");
// scanf("%d", &r);
// area = 3.14 * r * r;
// printf("Thus the area of circle of radius %d is %f", r, area);

//Cylinder volume

// int r, h;
// float pi = 3.14, volume;

// printf("Enter the radius: ");
// scanf("%d", &r);
// printf("Enter the height: ");
// scanf("%d", &h);
// volume = 3.14 * r * r * h;
// printf("Thus the volume of cylinder of radius %d and heinght %d is %.2f", r, h, volume);

// float F, C;
// printf("Enter the value in celsius: ");
// scanf("%f", &C);
// F = ((9 * C) / 5) + 32;
// printf("The temperature in farenheit is: %f", F);

//Simple Interest

// int si, p, n, r;
// printf("Enter the principle amount: ");
// scanf("%d",&p);
// printf("Enter the rate of interest: ");
// scanf("%d",&r);
// printf("Enter the number pf years: ");
// scanf("%d",&n);

// si = p * n * r;

// printf("The Simple interest is: %d", si);

//Program to check if the number is divisible by 97
// int num;
// printf("Enter the number: ");
// scanf("%d", &num);
// if (num % 97 == 0){
//     printf("The number is divisible by 97 (%d times)", num / 97);
// }
// else {
//     printf("The number is not divisible by 97 (leaves remainder %d)", num % 97);
// }

// int marks;

// printf("Enter your marks: ");
// scanf("%d", &marks);
// if (marks > 90 && marks < 100){
//     printf("Your grade is A");
// }
// else if (marks > 80 && marks < 90){
//     printf("Your grade is B");
// }
// else if (marks > 70 && marks < 80){
//     printf("Your grade is C");
// }
// else if (marks > 60 && marks < 70){
//     printf("Your grade is D");
// }
// else if (marks < 60){
//     printf("Your grade is F");
// }
// else {
//     printf("Enter correct value");
// }

//Check if the student is pass or fail:

// int Physics, Chemistry, Maths;
// float total_avg;

// printf("Enter your marks out of 100 in Physics: ");
// scanf("%d", &Physics);
// printf("Enter your marks out of 100 in Chemistry: ");
// scanf("%d", &Chemistry);
// printf("Enter your marks out of 100 in Maths: ");
// scanf("%d", &Maths);
// total_avg = (Physics + Chemistry + Maths)/3;


// if(Physics < 33 || Chemistry < 33 || Maths < 33){
//     printf("You have failed in individual subject!");
// }
// else{
// if(total_avg > 40 ){
//     printf("You have passed the examination");
// }
// else{
//     printf("You have failed!");
// }
// }

//Leap year
// int year;
// printf("Enter year: ");
// scanf("%d", &year);

// if ((year % 100 == 0) && (year % 400 != 0)){
//     printf("%d is NOT a leap year!", year);
// }
// else if ((year % 100 == 0) && (year % 400 == 0)){
//     printf("%d is a leap year!", year);
// }
// else if (year % 4 == 0){
//     printf("%d is a leap year!", year);
// }
// else {
//     printf("%d is NOT a leap year!", year);
// }

//Null is a constant in C and functions are defined after main() function.

// char C;
// printf("Enter the character: ");
// scanf("%c", &C);
// if (islower(C)){
//   printf ("The character is lowercase");
// }
// else {
//   printf("The character is Uppercase");
// }

//   int num1, num2, num3, num4;
// printf("Enter four numbers: ");
// scanf("%d", &num1);
// printf("Enter four numbers: ");
// scanf("%d", &num2);
// printf("Enter four numbers: ");
// scanf("%d", &num3);
// printf("Enter four numbers: ");
// scanf("%d", &num4);

// if (num1 > num2 && num1 > num3 && num1 > num4){
//   printf ("%d is the greatest", num1);
// }
// else if (num2 > num1 && num2 > num3 && num2 > num4){
//   printf ("%d is the greatest", num2);
// }
// else if (num3 > num1 && num3 > num2 && num3 > num4){
//   printf ("%d is the greatest", num3);
// }
// else if (num4 > num1 && num4 > num3 && num4 > num2){
//   printf ("%d is the greatest", num4);
// }
// // Program to create a simple calculator
// #include <stdio.h>

// int main() {
//     char operation;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(operation)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         // operator doesn't match any case constant +, -, *, /
//         default:
//             printf("Error! operator is not correct");
//     }

// //Incrementing from 10 when i = 0;
//  int i = 0;
//   while(i <10){
//     i ++;
//   }
//   if(i =10){
//   while (i <= 20){
//     printf("%d\n", i);
//     i ++;}
//   }


// int i;
// for(i =5; i; i --){
// if(i == 3){
// break;
// }
//   printf("%d\n", i);
// }

// //printing multiplication table
//  int multiplier = 1;
//  int num;
//   for(multiplier = 1; multiplier <= 10; multiplier ++){
//     num = 5 * multiplier;
// printf("5 x %d = %d\n", multiplier, num);
// }

//   //printing multiplication table of 10 in reverse order
//  int multiplier;
//  int num;
//   for(multiplier = 10; multiplier; multiplier --){
//     num = 10 * multiplier;
// printf("10 x %d = %d\n", multiplier, num);
// }


// //sum of first 10 natural numbers using while loop
// int i = 1;
// int sum;
// while (i <= 10){
//   sum = sum + i;
//   i ++;
// }
// printf("Sum is %d", sum);

// //sum of first 10 natural numbers using for loop
// int i = 1;
// int sum;
// for (i; i <= 10; i ++){
//   sum = sum + i;
// }
// printf("Sum is %d!\n", sum);


// /sum of first 10 natural numbers using do while loop
// int i = 1;
// int sum;

// do{
//   sum = sum + i;
//   i ++;
//  } while (i <= 10);
 
//  printf("Sum is %d!", sum);

// //sum of numbers in table of 8:
// int table = 0;
// int i;
// for(i = 8; i <= 80; i = i + 8){
//     table = table + i;
// }
// printf("%d", table);

//Factorial using for loop
// int fac;
// int i;
// printf("Enter the number: ");
// scanf("%d", &fac);
// for(i = fac - 1; i >= 1; i--){
//     fac = fac * i;
// }
// printf("%d", fac);

//using while
// int fac;
// printf("Enter the number: ");
// scanf("%d", &fac);
// int i = fac - 1;
// while (i > 0){
//     fac = fac * i;
//     i--;
// }
// printf("%d", fac);

// //Prime or not
// int i;
// int j = i - 1;
// int notPrime = 0;
// printf("Enter a number: ");
// scanf("%d", &i);

// for(j = i - 1; j > 1; j--){
// if(i % j == 0){
//     notPrime++;
// }
// }

// if(notPrime > 0){
//     printf("The number is NOT Prime!");
// }
// else{
//     printf("The number IS Prime!");

// }


// // printing random numbers
// int num;
// int i;
// for(i = 1; i <= 10; i++){
//   num = rand() % 10 + 1; // random() % 10 + 1 does the same.
//   printf("%d\n", num);
// }


//   // use time.h header file to use time
// //included stdlib for rand()
// srand cannot be used without rand()
// //unsigned can store whole numbers, signed stores both negative and positive values. Example = unsigned int seed

// int num;
// int seed = 3;  //use seed = time(NULL) for non- repeating random numbers (include time.h)
// srand(seed);
// num = rand() % 10 + 1;

// printf("%d", num);

// //Guessing game
// int num, num_fix, ip, count = 0;
// int seed = time(NULL);
// srand(seed);
// num = rand() % 10 + 1;
// num_fix = num;
// printf("Random number between 1 to 10 generated!\n");

// while(num_fix != ip){
// printf("Enter your guess : ");

// scanf("%d", &ip);

// if(num_fix == ip){
//   printf("Correct guess! %d\n", num_fix);
//   count++;
//   printf("You guessed the number in %d attempts!", count);
// }

//   else if (num_fix < ip){
//     printf("Reduce the guess!\n");
//     count++;
//   }
//   else if (num_fix > ip){
//     printf("Increase the guess!\n");
//     count++;
//   }
// }

//pointers
    // Format specifier for printing pointer address is ‘%u’
//     int i=8;
// int *j;
// j = &i;
// printf("Add i=%u\n",&i);
// printf("Add i=%u\n",j);
// printf("Add j=%u\n",&j);
// printf("Value i=%d\n",i);
// printf("Value i=%d\n",(*&i));
// printf("Value i=%d\n",*j);

// //pointer to pointer
// int **k;
// k= &j;


// //Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

// int i = 23;
// int *j;
// j = &i;
// printf("Address of i: %u\n", j);
// func_ptr(i);
// //Different values.

//Program to change the value of a variable to 10 times its current value. Write a function and pass the value by reference.

// int i = 20;
// int *j;
// j = &i;
// ten_times(j);

// int i = 34;
// int *ptr;
// int **ptr_ptr;

// ptr = &i;
// ptr_ptr = &ptr;

// printf("Value of i is: %d", **ptr_ptr);

// // Write a program to accept marks of five students in an array and print them to the screen.
// int marks[5];
// int i;
// for(i = 1; i <= 5; i++){
// printf("Enter the marks of student %d: ", i);
// scanf("%d", &marks[i - 1]);
// }
// printf("%d\n", marks[0]);
// printf("%d\n", marks[1]);
// printf("%d\n", marks[2]);
// printf("%d\n", marks[3]);
// printf("%d\n", marks[4]);

//can also be initialized as int cgpa[3]={9,8,8}    and    float marks[]={33,40}

//array can be passed to functions like this- void printarray(int i[] ,int n);

//2-d array-
// int arr [3][2] ={
//                  {1,4},
//                  {7,9},
//                  {11,22}
// };

// printf("%d", arr[2][1]);

//*(s + 3) read as dereferencing of s + 3;

//Array storing table-

// int table[10];
// int integer;
// printf("Enter the number whose table is to be stored: ");
// scanf("%d", &integer);
// int i;
// for(i = 1; i <= 10; i++){
//     table[i - 1] = integer * i;
// }
// int j;
// for(j = 1; j <= 10; j++){
//     printf("%d\n", table[j - 1]);
// }



        return 0;
}
// void func_ptr(int i){
//     printf("Address of i: %d", &i);
// }
// void ten_times(int *i){
//     int temp;
//     temp = *i;
//     *i = 10 * temp;
//     printf("10 times: %d", *i);
// }