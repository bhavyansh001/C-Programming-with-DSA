#include <stdio.h>
#include <string.h>
// int strlength(char *st){
//   char *ptr = st;
//   int len = 0;
//   while(*ptr != '\0'){
//   len++;
//   ptr++;
//   }
//   return len;
// }
// void slice(char *st, int m, int n){
//     int i = 0;
//     while((m + i) < n){
//         st[i] = st[i + m];
//         i++;
// }
// st[i] = '\0';
// }

// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr != '\0'){
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }

// void decrypt(char *c){
//     char *ptr = c;
//     while(*ptr != '\0'){
//         *ptr = *ptr - 1;
//         ptr++;
//     }
// }

// int occurence(char st[], char c){
//     char *ptr = st;
//     int count = 0;
//     while(*ptr != '\0'){
//         if(*ptr == c){
//             count++;
//         }
//             ptr++;
//     }
//     return count;
// }

int main()
{
  
  // mimicing strlen using function.
//   char str1[] = "Array12";
//   int length, length2;
//   length = strlen(str1);
//   printf("%d\n", length);
//   length2 = strlength(str1);
//   printf("%d", length2);

// //s_slice function
// char st[] = "Array23";
// slice(st, 1, 4);
// printf("%s", st);

// //Encrypting-decrypting
// char c[] = "Array is 12";
// encrypt(c);
// printf("Encrypted string is: %s\n", c);


// decrypt(c);
// printf("Decrypted string is: %s\n", c);

// //counting occurence in string
// char st[] = "Array345";
// int count = occurence(st, 'r');
// printf("Occurence is: %d", count);
  
  return 0;
}