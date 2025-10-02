/*
CLARENCE NJUGUNA
REGISTRATION NO:CT101/G/26491/25
DESCRIPTION : ELIGIBILITY FOR FINAL EXAMS 
*/
#include <stdio.h>

int main() {
    double attendance;
    double average_marks;
    
    //prompting the user to input attendance percentage 
    printf("Enter your attendance percentage : ");
    scanf("%lf", &attendance);
    
    //prompting the user to input average marks
    printf("Enter your average marks: ");
    scanf("%lf", &average_marks);
    
    //expected output after input of data
    if (attendance >= 75.0 && average_marks >= 40.0) {
        printf("You are eligible for the final exams.\n");
    } else {
        printf("Sorry, you do not qualify for the final exams.\n");
    }

    return 0;
}