#include <stdio.h>

int main() 
{

    float w,h;
    float bmi;
    printf("\nEnter weight(kg) and Height(m):\n");
    scanf("%f %f", &w, &h);

    bmi = w / (h*h);

    if(bmi < 18.5)
        printf("BMI = %.1f , Underweight",bmi);
    else if(bmi >= 18.5 && bmi < 25)
        printf("BMI = %.1f , Normal",bmi);
    else if(bmi >= 25 && bmi <30)
        printf("BMI = %.1f , Overweight",bmi);
    else if(bmi >= 30)
        printf("BMI = %.1f , Obese",bmi);
    
    return 0;
}