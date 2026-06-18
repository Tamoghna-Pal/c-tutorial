// author = Tamoghna Pal





#include <stdio.h>

int main() {
    // Variables for tracking finances
    float income, food_expense, rent_expense, entertainment_expense;
    float total_expenses, remaining_savings, savings_percentage;
    float projected_yearly_savings;

    printf("=== PERSONAL FINANCE TRACKER ===\n\n");

    // 1. Get User Input
    printf("Enter your total monthly income: ");
    scanf("%f", &income);

    printf("Enter monthly food expenses: ");
    scanf("%f", &food_expense);

    printf("Enter monthly rent/hostel expenses: ");
    scanf("%f", &rent_expense);

    printf("Enter monthly entertainment/misc expenses: ");
    scanf("%f", &entertainment_expense);

    // 2. Core Calculations
    total_expenses = food_expense + rent_expense + entertainment_expense;
    remaining_savings = income - total_expenses;
    savings_percentage = (remaining_savings / income) * 100.0;
    projected_yearly_savings = remaining_savings * 12.0;

    // 3. Display the Financial Summary Layout
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









