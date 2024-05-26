#include <stdio.h>

// void arr_rev(int arr[3]){
//     arr[0] = arr[2];
//     arr[1] = arr[1];
//     arr[2] = arr[0];
//     printf("%d", arr[0]);
// }

int main(){
//     int arr[3] = {4, 5, 6};
// arr_rev(arr);

// //Array containing tables of 3 numbers-
// int num1, num2, num3;
// int tables[3][10];      //see its not [2][9].
// printf("Enter first number: ");
// scanf("%d", &num1);
// printf("Enter second number: ");
// scanf("%d", &num2);
// printf("Enter third number: ");
// scanf("%d", &num3);

// int i, j, mul;



// for(i = 0; i <= 2; i++){

//     if (i == 0){
//     mul = num1;
//     }
//     else if (i == 1){
//     mul = num2;
//     }
//     else if (i == 2){
//     mul = num3;
//     }

//     for(j = 0; j <= 9; j++){
//         tables[i][j] = mul * (j + 1);
//     }
// }
// int k;
// for(k = 0; k < 10; k++){
// printf("%d\t", tables[0][k]);
// }
// printf("\n");

// for(k = 0; k < 10; k++){
// printf("%d\t", tables[1][k]);
// }
// printf("\n");

// for(k = 0; k < 10; k++){
// printf("%d\t", tables[2][k]);
// }

//for 3d arrays like arr[2][3][4] 3 for loops willbe used.
//printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &[i][j][k]);

//Strings
// <string.h> header file has functions like strlen for length, strcpy(target, source) for copying source to target, strcat() for concatenating and strcmp() for comparing two strings.

// char str[] = {'a', 'p', '\0'};
// char str2[] = "Apple";
// printf("%c", str[0]);
// printf("%c", str[1]);
// printf("%c", str[2]);   //prints nothing

// printf("%s", str);
// printf("%s", str2);
// int i;
// for(i = 0; i < 5; i++){
//     printf("%c\t", str2[i]);
// }
// char str[100];
// gets(str);      //for multi-word string

//  char s[30];  
//     printf("Enter the string? ");  
//     gets(s);  
//     printf("You entered %s",s);
    // To prevent buffer overflow, fgets is used. It enters only the amount mentioned.

//     char str[20];   
//    printf("Enter the string? ");  
//    fgets(str, 20, stdin);   
//    printf("%s", str); 


char name[50];    
printf("Enter your name: ");    
gets(name);
printf("Your name is: ");    
puts(name);

//Declaring strings using pointers

// char *ptr= "Banana";
// This tells the compilers to store the string in the memory and the assigned address is stored in a char pointer.
// Once a string is defined using char st[]= "Name", it cannot be initialized to something else whereas string defined using pointers can be reinitialized as ptr = "Apple";

// //Takes arrays under %c and %s, compares them if the two are equal or not!
//   char str1[4];
//   printf("Enter the four characters: ");
//   scanf("%c", &str1[0]);
//   scanf("%c", &str1[1]);
//   scanf("%c", &str1[2]);
//   scanf("%c", &str1[3]);
//   printf("The string you entered is: %c %c %c %c\n", str1[0], str1[1], str1[2], str1[3]);
 
//  char str2[4];
 

//   printf("Enter the four characters for str2: ");
//   scanf("%s", &str2);
//   printf("The string you entered is: %s\n", str2);
 
//  int i, neqlcount = 0;
//  for(i = 0; i < 4; i++){
//  if(str1[i] == str2[i]){
// continue;
//  }
//  else{
//    neqlcount++;
//    }
//    }
   
//    if (neqlcount > 0){
//      printf("The strings are NOT equal");
//    }
//    else{
//      printf("The strings are equal");
//      }


    return 0;
}