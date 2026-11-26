#include <stdio.h>

int main() {
    float pf_marks = 88.0f;
    int pf_credits = 3;
    float calculus_marks = 76.5f;
    int calculus_credits = 3;
    float physics_marks = 82.0f;
    int physics_credits = 2;
    float total_weighted_score = (pf_marks * pf_credits) + (calculus_marks * calculus_credits) + (physics_marks * physics_credits);
    int total_credit_hours = pf_credits + calculus_credits + physics_credits;
    float weighted_average = total_weighted_score / total_credit_hours;

    printf("\t\t\tSEMESTER ACADEMIC REPORT\n");
    printf("Course\t\t\t\tCredit Hours\tObtained Marks\n");
    printf("\nProgramming Fund.\t\t%d\t\t\t\t%.2f\n", pf_credits, pf_marks);
    printf("Calculus\t\t\t\t%d\t\t\t\t%.2f\n", calculus_credits, calculus_marks);
    printf("Applied Physics\t\t\t%d\t\t\t\t%.2f\n", physics_credits, physics_marks);
    printf("\nTotal Credits: %d\t\tWeighted Average: %.2f%%\n", total_credit_hours, weighted_average);

    return 0;
}