#include <stdio.h>

int main() {
    int age;
    float cgpa;
    char grade;

    int *pAge = &age;
    float *pCgpa = &cgpa;
    char *pGrade = &grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("age   = %d    via pointer = %d    &age   = %p  pAge   = %p\n", 
           age, *pAge, &age, pAge);
           
    printf("cgpa  = %.2f  via pointer = %.2f  &cgpa  = %p  pCgpa  = %p\n", 
           cgpa, *pCgpa, &cgpa, pCgpa);
           
    printf("grade = %c     via pointer = %c     &grade = %p  pGrade = %p\n", 
           grade, *pGrade, &grade, pGrade);

    printf("&pAge = %p  &pCgpa = %p  &pGrade = %p\n", 
           &pAge, &pCgpa, &pGrade);

    *pAge = *pAge + 1;
    *pCgpa = *pCgpa + 0.25f;
    *pGrade = *pGrade + 1;


    printf("After changing through pointers:\n");
    printf("age = %d, cgpa = %.2f, grade = %c\n", age, cgpa, grade);

    return 0;
}

/*   Explain why age changed even though no statement assigns to age?
     age changed because pAge points directly to age's location in computer memory.    */