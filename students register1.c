#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Grading constants
#define F9 29
#define C6 39
#define C5 49
#define C4 59
#define C3 69
#define D2 79
#define D1 100

// Grading function
char grading(char subject[100], int marks){
    // Hack to return a character and a digit for example F9
    char *grade_charcter[10];
    char *grade_integer[10];
    // Grading logic
    if(marks <= F9){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'F';
        *grade_integer = '9';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > F9 && marks <= C6){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'C';
        *grade_integer = '6';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > C6 && marks <= C5){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'C';
        *grade_integer = '5';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > C5 && marks <= C4){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'C';
        *grade_integer = '4';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > C4 && marks <= C3){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'C';
        *grade_integer = '3';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > C3 && marks <= D2){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'D';
        *grade_integer = '2';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else if(marks > D2 && marks <= D1){
        *grade_charcter[10];
        *grade_integer[10];
        *grade_charcter = 'D';
        *grade_integer = '1';
        strcat(grade_charcter, grade_integer);
        printf("%s ----------------------------------------> %s\n",subject, &grade_charcter);
    }else{
        // the marks are invalid
    }
}

float average(int subj1, int subj2, int subj3, int subj4){
    float results;
    results = (subj1 + subj2 + subj3 + subj4)/4;
    return results;
}

int main(){
    char index_number[100];
    char school_name[1000] = "Mengo SSS";
    char student_name[100];
    // Subjects
    int english;
    int math;
    int sst;
    int science;
    //User option variable
    int option;

    printf("Please enter your index number\n");
    printf("Index: ");
    scanf("%s", &index_number);
    printf("Your school is %s Press 1 to continue if that is your school.\n", school_name);
    scanf("%d", &option);

    // if that's the school of the student, get the following info
    switch(option){
    case 1:
        printf("Please enter your name\n");
        printf("Name: ");
        scanf("%s", &student_name);
        printf("Please enter marks for the following subjects?\n");
        printf("Eng: ");
        scanf("%d", &english);
        printf("Math: ");
        scanf("%d", &math);
        printf("SST: ");
        scanf("%d", &sst);
        printf("Science: ");
        scanf("%d", &science);
        // Printing subject, grades and the average
        grading("English", english);
        grading("Math", math);
        grading("SST", sst);
        grading("Science", science);
        printf("\n\nAverage = %0.2f", average(english, math, sst, science));
        break;
    default:
        printf("");
    }


  return 0;
}
