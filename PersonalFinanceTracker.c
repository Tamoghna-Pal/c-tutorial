// author = Tamoghna Pal





#include <stdio.h>

int main() {
    
    float income, food_expense, rent_expense, entertainment_expense;
    float total_expenses, remaining_savings, savings_percentage;
    float projected_yearly_savings;

    printf("=== PERSONAL FINANCE TRACKER ===\n\n");

    //INPUT VALIDATION FOR INCOME

    while(1){
printf("enter your monthly income:");
if (scanf("%f",&income)==1 && income>=0){ //1 here means that 1 variable is successfully saved only when input is float 
    break ;   // valid input ; exist loop
}
    printf("error.please provide a valid input\n");
    while (getchar()!='\n');
}

   while(1){
printf("enter a valid food_expense ");
if (scanf("%f",&food_expense)==1 && food_expense>=0){
    break;
}   printf("error.please provide a valid input");
    while(getchar()!='\n');
   }

   while(1){
    printf("enter a valid rent_expense");
    if(scanf("%f",&rent_expense)==1 && rent_expense>=0){
        break ;
    } printf("error.Please provide a valid input ");
    while(getchar()!='\n');
   }
    
   while(1){
    printf("enter a valid entertainment_expense");
    if(scanf("%f",& entertainment_expense)==1 && entertainment_expense>=0 ){
        break ;
    }printf("invalid input. Please provide a valid input");
    while(getchar()!='\n');
}
    

   
    total_expenses = food_expense + rent_expense + entertainment_expense;
    remaining_savings = income - total_expenses;


    // now ensuring that its not undefined and not showing error using ternary operator caled conditional check :  { condition ? expression_if_true : expression_if_false; }
    

    savings_percentage = ( income > 0) ? (remaining_savings / income) * 100.0 : 0.0;
    projected_yearly_savings = remaining_savings * 12.0;

    
    printf("\n--------------------------------");
    printf("\nMONTHLY FINANCIAL SUMMARY");
    printf("\n--------------------------------");
    printf("\nTotal Monthly Expenses : Rs. %.2f", total_expenses);
    printf("\nRemaining Net Savings  : Rs. %.2f", remaining_savings);
    printf("\nSavings Rate           : %.1f%%", savings_percentage);
    printf("\nProjected 1-Year Wealth: Rs. %.2f", projected_yearly_savings);
    printf("\n--------------------------------\n");

    return 0;
}









