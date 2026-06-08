#include <stdio.h>
#include <string.h>
#include <ctype.h>

//structure prototype
struct Expense{
    char exDate[15];
    char exCategory[50];
    float exAmount;
};

// function initialization
void inputExpense(struct Expense expArr[], int size);
void displayExpense(struct Expense expArr[], int size);
float expTotal(struct Expense expArr[], int size);
float expCategoryTotal(struct Expense expArr[], int size, char targetCategory[]);
void filterByCategory(struct Expense expArr[], int size, char targetCategory[]);
void updateExpense(struct Expense *exp, float newAmount); 

int compareIgnoreCase(char str1[], char str2[]);




int main(){
    
    //expenses number
    int expNum;

    printf("Enter number of expenses: ");
    scanf("%d", &expNum);

    struct Expense expArr[expNum];

    //add expenses input
    inputExpense(expArr, expNum);

    //display all expenses
    printf("\n===== EXPENSE LIST =====\n\n");
    displayExpense(expArr, expNum);

    //compute total expenses
    printf("\nTotal Expenses: %.2f\n", expTotal(expArr, expNum));

    //compute total expenses per category
    char targetCategory[50];
    printf("\nEnter Category to Compute Total: ");
    while(getchar() != '\n');
    fgets(targetCategory, sizeof(targetCategory), stdin);
    targetCategory[strcspn(targetCategory, "\r\n")] = '\0';
    printf("Total Expenses for %s: %.2f\n", targetCategory, expCategoryTotal(expArr, expNum, targetCategory));

    //filtering expenses by category
    char filterCategory[50];
    printf("\nEnter Category to Filter: ");
    fgets(filterCategory, sizeof(filterCategory), stdin);
    filterCategory[strcspn(filterCategory, "\n")] = '\0';

    printf("\n===== FILTERED EXPENSES =====\n");
    filterByCategory(expArr, expNum, filterCategory);

    //update an expense amount
    int recordChoice;
    float newAmount;
    
    printf("Enter Expense Record Number to Update: ");
    scanf("%d", &recordChoice);
    
    printf("Enter New Amount: ");
    scanf("%f", &newAmount);
    
    //validate the choice
    if(recordChoice > 0 && recordChoice <= expNum){
        updateExpense(&expArr[recordChoice - 1], newAmount);
        printf("\nExpense updated successfully!\n");
    }
    else {
        printf("\nInvalid Record Number!\n");
    }

    //display updated expenses
    printf("\n\n===== UPDATED EXPENSES =====\n");
    printf("===== EXPENSE LIST =====\n");
    displayExpense(expArr, expNum);

    return 0;
}

// functions def

void inputExpense(struct Expense expArr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n=== Expense %d ===\n", i + 1);
        
        while(getchar() != '\n');

        printf("Enter Date (YYYY-MM-DD): ");
        fgets(expArr[i].exDate, sizeof(expArr[i].exDate), stdin);
        expArr[i].exDate[strcspn(expArr[i].exDate, "\n")] = '\0';

        printf("Enter Category: ");
        fgets(expArr[i].exCategory, sizeof(expArr[i].exCategory), stdin);
        expArr[i].exCategory[strcspn(expArr[i].exCategory, "\n")] = '\0';

        printf("Enter Amount: ");
        scanf("%f", &expArr[i].exAmount);
    }
}

void displayExpense(struct Expense expArr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nExpense #%d\n", i + 1);
        printf("Date : %s\n", expArr[i].exDate);
        printf("Category : %s\n", expArr[i].exCategory);
        printf("Amount : %.2f\n", expArr[i].exAmount);
    }
}

float expTotal(struct Expense expArr[], int size) {
    float total = 0.0;
    for (int i = 0; i < size; i++) {
        total += expArr[i].exAmount;
    }
    return total;
}

float expCategoryTotal(struct Expense expArr[], int size, char targetCategory[]) {
    float total = 0.0;
    for (int i = 0; i < size; i++) {
        if (compareIgnoreCase(expArr[i].exCategory, targetCategory) == 0) {
            total += expArr[i].exAmount;
        }
    }
    return total;
}

void filterByCategory(struct Expense expArr[], int size, char targetCategory[]) {
    for (int i = 0; i < size; i++) {
        if (compareIgnoreCase(expArr[i].exCategory, targetCategory) == 0) {
            printf("Date : %s\n", expArr[i].exDate);
            printf("Category : %s\n", expArr[i].exCategory);
            printf("Amount : %.2f\n", expArr[i].exAmount);
        }
    }
}

void updateExpense(struct Expense *exp, float newAmount) {
    exp->exAmount = newAmount;
}

int compareIgnoreCase(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; 
    }
    return 1;
}