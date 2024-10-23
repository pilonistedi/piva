#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int age,loan,income,credit_score,id_number,diff,rate,time,cpd,intrest;
    char name[100];

    printf("\nEnter your first name : ");
    scanf("%s", &name);
    printf("\nEnter your age : ");
    scanf("%d", &age);
    printf("\nEnter your national ID_number : ");
    scanf("%d", &id_number);
    printf("\nEnter your credit_score : ");
    scanf("%d", &credit_score);
    printf("\nEnter your net monthly income : ");
    scanf("%d", &income);
    printf("\nEnter the loan amount : ");
    scanf("%d", &loan);

    printf("\n");

    if (age < 21){
        printf("\nYou must be at least 21 years old to apply for the loan.");
        exit(0);
    }

    if (income < 10000){
        printf("\nYour net monthly income of %d is below the required amount.");
        exit(0);
    }

    if (credit_score < 685){
        printf("\nYour credit score is below the required amount.");
        exit(0);
    }

    if (income < (loan/5)){
        diff = loan/5;
        printf("\nYour income amount should at least be Ksh.%.2d to apply for %.2d loan amount", diff,loan);
    }

    if (age > 21 && income >= diff && credit_score > 685){
        printf("Your loan application has been approved . wait as we proceed to disburse it ...");
    }

    if (loan >= 1000000){
        time = 6;
        rate = 3;
        printf("\nAn interest rate of 3%% will be charged on your loan amount.");
    }else if(loan >= 100000){
        time = 3;
        rate = 6;
        printf("\nAn interest rate of 6%% will be charged on your loan amount.");
    }else if(loan >= 10000){
        time = 1;
        rate = 8;
        printf("\nAn interest rate of 3%% will be charged on your loan amount.");
    }else{
        time = 0.5;
        rate = 4;
        printf("\nAn interest rate of 4%% will be charged on your loan amount.");
    }

    cpd = loan * pow((1 + rate / 1), 1 * time);
    printf("\n");
    printf("\nYour loan amount of Ksh.%.2d has been fully disbursed.", loan);
    printf("\nAs a result a grand total of Ksh.%.2d will be repayed. Thank you for working with us.", cpd);

    intrest = cpd - loan;

    printf("\n");

    printf("\n***** YOUR RECIPT *****");

    printf("\n");
    printf("\nName:                 %s", name);
    printf("\nID number:            %d", id_number);
    printf("\nCredit Score:         %d", credit_score);
    printf("\nLoan amount:          Ksh.%d", loan);
    printf("\nInterest rate:        %d%%", rate);
    printf("\nRe-payment time:      %d (years)", time);
    printf("\nAccumulated intrest:  Ksh.%d", intrest);
    printf("\nLoan to be paid:      Ksh.%d", cpd);

    printf("\n");

    return 0;
}
















