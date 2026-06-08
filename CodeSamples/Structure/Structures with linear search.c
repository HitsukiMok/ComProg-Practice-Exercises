#include <stdio.h>
#include <string.h>

struct Employee{

    int employeeID;
    char employeeName[50];
    char employeeDepartment[100];
    float employeeSalary;

};

struct Employee inputEmployee();
void displayEmployees(struct Employee emp);
void updateSalary(struct Employee *emp, float newSalary);

int main(){

    int empNum;
    int targetID;
    float newSalary;

    printf("Enter Number of Employees: ");
    scanf("%d", &empNum);

    struct Employee emp[empNum];

    for(int i = 0; i < empNum; i++){
        printf("\n=== Employee %d ===\n", i+1);

        emp[i] = inputEmployee();
    };

    printf("\n\n===== Employee List =====\n");
    for (int i = 0; i < empNum; i++){
        displayEmployees(emp[i]);
    }

    printf("\n\nEnter Employee ID to update salary: ");
    scanf("%d", &targetID);



    //linearsearch sa id

    int found = 0;

    for(int i = 0; i < empNum; i++){

        if (emp[i].employeeID == targetID){
            
            found = 1;

            printf("\nEnter new Salary: ");
            scanf("%f", &newSalary);

            updateSalary(&emp[i], newSalary);

            printf("\nSalary Updated Successfully!");

            break;
        }
    };

    if(found == 0){
        printf("\n ERROR: ID not found, please input a valid Employee ID");

        return 0;
    }


    printf("\n\n=== UPDATED EMPLOYEE RECORDS HERE ===\n");
    printf("\n\n===== Employee List =====\n");
    for (int i = 0; i < empNum; i++){
        displayEmployees(emp[i]);
    }
    

    return 0;
}

//fanktions
struct Employee inputEmployee(){

    struct Employee tempEmp;

    printf("\nEnter Employee ID: ");
    scanf("%d", &tempEmp.employeeID);

    while(getchar() != '\n');

    printf("\nEnter Employee Name: ");
    fgets(tempEmp.employeeName, sizeof(tempEmp.employeeName), stdin);
    tempEmp.employeeName[strcspn(tempEmp.employeeName, "\n")] = '\0';

    printf("\nEnter Employee Department: ");
    fgets(tempEmp.employeeDepartment, sizeof(tempEmp.employeeDepartment), stdin);
    tempEmp.employeeDepartment[strcspn(tempEmp.employeeDepartment, "\n")] = '\0';

    printf("\nEnter Employee Salary: ");
    scanf("%f", &tempEmp.employeeSalary);

    return tempEmp;
}

void updateSalary(struct Employee *emp, float newSalary){

    emp->employeeSalary = newSalary;

}

void displayEmployees(struct Employee emp){

    printf("\n\nEmployee ID: %d", emp.employeeID);
    printf("\nEmployee Name: %s", emp.employeeName);
    printf("\nEmployee Department: %s", emp.employeeDepartment);
    printf("\nEmployee Salary: %.2f", emp.employeeSalary);
}
