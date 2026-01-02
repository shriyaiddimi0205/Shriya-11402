#include<stdio.h>
int main(){
    float units;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%f",&units);

    if(units <= 50){
    bill = units * 1.50;
    }else if(units <= 150){
        bill = 50 * 1.50 + (units - 50) * 2.50;
    }else if(units <= 250){
        bill = 50 * 1.50 + 100 * 2.50 + (units - 150) * 3.50;
    }else{
        bill = 50 * 1.50 + 100 * 2.50 + 100 * 3.50 + (units - 250) * 4.50;
    }
    float meterCharge = 50.00;
    bill += meterCharge;

    printf("Total Electricity Bill: ₹%.2f\n", bill);
}
