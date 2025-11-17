/*write a program to print the roll number of those student who obtain less that 35 marks.
There are 10 students and take marks from user input*/
//roll no. = index of array

#include<stdio.h>
int main (){
    int marks[9];
    for (int i = 0 ; i <= 8 ; i++){
        scanf("%d",&marks[i]);
    }
    printf("MARKS OF ALL 10 STUDENTS = \n");
    for (int i = 0 ; i <= 8 ; i++){
        printf("%d\t",marks[i]); 
    }
    printf("\nSTUDENTS ROLL NOs(index) WHO HAVE LESS THAN 35 MARKS  = \n");
    for (int i = 0 ; i <= 8 ; i++){
        if ( marks[i] < 35){
            printf("%d\t",i+1);    //here index = roll no
        }
    } 
    return 0;
}