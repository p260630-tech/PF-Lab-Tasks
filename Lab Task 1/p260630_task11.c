#include <stdio.h>

int main() {
    int tea_quality = 3;
    double tea_price = 60.00;
    int samosa_quality = 4;
    double samosa_price = 40.50;
    int roll_quality = 2;
    double roll_price = 120.00;
    double tea_subtotal = tea_quality * tea_price;
    double samosa_subtotal = samosa_quality * samosa_price;
    double roll_subtotal = roll_quality * roll_price;
    double bill_subtotal = tea_subtotal + samosa_subtotal + roll_subtotal;
    double gst_amount = 0.16 * bill_subtotal;
    double grand_total = bill_subtotal + gst_amount;

    printf("\t\t\t\tFAST CAFETERIA RECEIPT\n");
    printf("Item\t\t\tQty\t\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("\nTea\t\t\t\t%d\t\t\t%.2f\t\t\t\t%.2f\n", tea_quality, tea_price, tea_subtotal);
    printf("Samosa\t\t\t%d\t\t\t%.2f\t\t\t\t%.2f\n", samosa_quality, samosa_price, samosa_subtotal);
    printf("Chicken Roll\t%d\t\t\t%.2f\t\t\t\t%.2f\n", roll_quality, roll_price, roll_subtotal);
    printf("\nSubtotal:\t\t\t\t\t\t\tPKR %.2f\n", bill_subtotal);
    printf("GST (16%%):\t\t\t\t\t\t\tPKR %.2f\n", gst_amount);
    printf("\nGrand Total:\t\t\t\t\t\tPKR %.2f\n", grand_total);
    printf("\t\t\t\tTHANK YOU FOR YOUR VISIT\n");

    return 0;
}