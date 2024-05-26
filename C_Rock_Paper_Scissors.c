#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int rand_num(){
//Random number generator
int seed = time(NULL);
int rand_num;
srand(seed);
rand_num = rand() % 3 + 1;
return(rand_num);
}
void print_comp(int comp){
if(comp == 1){
    printf("Computer: Rock\n");
}
else if(comp == 2){
    printf("Computer: Paper\n");
}
else if(comp == 3){
    printf("Computer: Scissors\n");
}
}
void print_user(char user){
if(user == '1' || user == 'r'){
    printf("User: Rock\n");
}
if(user == '2' || user == 'p'){
    printf("User: Paper\n");
}
if(user == '3'  || user == 's'){
    printf("User: Scissors\n");
}
}
void check_for_tie(char user, int comp){
    if((comp == 1 && (user == '1' || user == 'r')) || (comp == 2 && (user == '2' || user == 'p')) || (comp == 3 && (user == '3' || user == 's')) ){
    printf("It's a tie!\n");
    int tie = 1;
}
}
void check_for_win(int tie, char user, int comp);

int main(){

printf("***Rock Paper Scissors Game***\nYou will be playing against computer.\nYou can type 'r' or '1' for rock; 'p' or '2' for paper; 's' or '3' for scissors\nGOOD LUCK\n\n");

int comp, i, tie = 0;
char user;

//Game code
printf("Make your move: ");
scanf("%c", &user);
comp = rand_num();

print_user(user);
print_comp(comp);
check_for_tie(user, comp);
check_for_win(tie, user, comp);

return 0;
}
void check_for_win(int tie, char user, int comp){
    int user_count = 0;
    if(tie != 1){
if(comp == 1){
if(user == '2' || user =='p'){
    printf("User won this round!");
}
else if(user == '3'  || user =='s'){
    printf("Computer won this round!");
}
}
if(comp == 2){
if(user == '1' || user =='r'){
    printf("Computer won this round!");
}
else if(user == '3'  || user =='s'){
    printf("User won this round!");
}
}
if(comp == 3){
if(user == '1' || user =='r'){
    printf("User won this round!");
}
else if(user == '2'  || user =='p'){
    printf("Computer won this round!");
}
}
}
}