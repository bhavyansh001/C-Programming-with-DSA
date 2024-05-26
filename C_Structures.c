#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// } emp; // now struct employee can be replaced with jusr emp like int, float, etc. It is custom datatype.

// void show(struct employee emp){
//     printf("The code: %d\n", emp.code);
//     printf("The salary: %f\n", emp.salary);
//     printf("The name: %s\n", emp.name);

// }


// struct vector{
//     int x;
//     int y;
// };

// //Function of adding two vectors
// struct vector sumVector(struct vector v1, struct vector v2){
//     struct vector result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// }

int main(){

//Structures
//defined before int main()

// struct employee e1;
// strcpy(e1.name, "Arnav");
// e1.code = 209;
// e1.salary = 80;

// or simply-
// struct employee e1 = {208, 81, "Arjav"};


// printf("code: %d", e1.code);

// //Array and accessing from array done as-
// struct employee facebook[100];
// accessing-
// facebook[0].code = 203;
// facebook[1].code = 204;

// //pointers to structures-
// struct employee *ptr;
// ptr = &e1;

// // printf("%d",(*ptr).code);
// //or
// printf("%d", ptr->code);

// Passing structure to a function
// struct employee *ptr;
// ptr = &e1;
// ptr->code = 345;
// ptr->salary =78;
// strcpy(ptr->name, "okay");
// show(e1);

//Typedef keyword

//declared e1 and ptr
// struct employee e1; // now struct employee can be replaced with jusr emp like int, float, etc. emp e1;
// struct employee *ptr; // now struct employee can be replaced with jusr emp like int, float, etc. emp *ptr;

//pointing ptr to e1
// ptr = &e1;

//dereferencing is done using *, known as value-at operator.
//&- address-of operator

//setting members for e1
// ptr->code = 345;
// ptr->salary =78;
// strcpy(ptr->name, "okay");


// typedef struct complex{
// float real;
// float img;
// }ComplexNo;
// now use like ComplexNo c1; 

// Create a two-dimensional vector using structures in C.

// struct vector v1, v2, sum;
// v1.x = 45;
// v1.y = 78;
// printf("x dimension: %d\n y dimension: %d", v1.x, v1.y);

// v2.x = 450;
// v2.y = 708;
// printf("x dimension: %d\n y dimension: %d", v2.x, v2.y);

// sum = sumVector(v1, v2);
// printf("x dimension: %d\n y dimension: %d", sum.x, sum.y);

// struct vector could be replaced by just vec using typedef.


// File I/O
// File pointer is needed for communication between the file and the program.

// FILE *ptr;
// ptr=fopen("filename.ext","mode");
// //Modes
// r
// rb (for reading from binary file)

// w
// wb (for writing in binary file)

// a (append)
// FILE *fptr;
// fptr=fopen("Harry.txt","w");
// int num=432;
// fprintf(fptr,"%d",num);
// fclose(fptr);
// Closing is important
// fgetc(ptr);                         => Used to read a character from file

// fputc('c',ptr);                     => Used to write character 'c' to the file

// fgetc returns EOF(end of file) when all the characters from a file have read. So we can write a check like below to detect the end of file.

// while(1){
// ch=fgetc(ptr);    // When all the content of a file has been read, break the loop
// if(ch==EOF){
// break;
// }
// //code
// }

// Dynamic memory allocation
//Setting dynamic memory for say array input, structures, floats also can be formed this way
//malloc() takes numbers of bytes as input, returns a ptr of type void {that's why (*int))} stdlib library to be used

// int *ptr;
// ptr = (int *)malloc(6 * sizeof(int));
// int i;
//   for(int i = 0; i < 6; i++){
//     scanf("%d\t", &ptr[i]);
//   }
  
//   for(int i = 0; i < 6; i++){
//     printf("%d\t", ptr[i]);
//   }




//calloc() is like malloc just that it initialises value with zero.
//ptr = (float *)calloc(30, sizeof(float));

// int *ptr;
// ptr = (int *)calloc(3, sizeof(int));
// int i;
//   for(int i = 0; i < 2; i++){
//     scanf("%d\t", &ptr[i]);
//   }
  
//   for(int i = 0; i < 6; i++){
//     printf("%d\t", ptr[i]);
//   }

//   realloc(ptr, 6 * sizeof(int));

// free(ptr);
//Can also take input of number of values

//free(ptr); to free

//realloc(ptr, 3 * sizeof(int)); can be less than original value or more than it, basically used for reallocating

//Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

// int *ptr;
// ptr = (int *)malloc(5 * sizeof(int));
// int i;
// for (i = 0; i < 5; i++){
//     printf("Enter the value of %d element: \n", i + 1);
//     scanf("%d", &ptr[i]);
// }
// for (i = 0; i < 5; i++){
//     printf("Value at %d is: %d\n", i + 1, ptr[i]);
// }

// ptr = realloc(ptr, 10 * sizeof(int));
// for (int i = 0; i < 10; i++){
//     printf("Enter the value of %d element: \n", i + 1);
//     scanf("%d", &ptr[i]);
// }

// for (i = 0; i < 10; i++){
//     printf("Value at %d is: %d\n", i + 1, ptr[i]);
// }
    return 0;
}