#include <stdio.h>
#include <string.h>


struct Employee {
    int employeeID;
    char employeeName[50];
    char employeeDepartment[100];
    float employeeSalary; 
};

struct Employee inputEmployeeInfo();
void updateSalary (struct Employee *emp, float newSalary);
void displayEmployee(struct Employee emp);


int main(void){

    struct Employee emp1 = inputEmployeeInfo();

    printf("\nBefore Salary Update:\n");
    printf("Salary: %.2f\n", emp1.employeeSalary);

    float newSalary;
    printf("\nEnter new salary: ");
    scanf("%f", &newSalary);

    updateSalary(&emp1, newSalary);

    displayEmployee(emp1);


    return 0;
}




struct Employee inputEmployeeInfo(){

    struct Employee tempEmp;
    
    printf("Enter Employee ID: ");
    scanf("%d", &tempEmp.employeeID);

    while(getchar() != '\n');

    printf("Enter Employee Name: ");
    fgets(tempEmp.employeeName, sizeof(tempEmp.employeeName), stdin);
    tempEmp.employeeName[strcspn(tempEmp.employeeName, "\n")] = '\0';


    printf("Enter Department: ");
    fgets(tempEmp.employeeDepartment, sizeof(tempEmp.employeeDepartment), stdin);
    tempEmp.employeeDepartment[strcspn(tempEmp.employeeDepartment, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &tempEmp.employeeSalary);

    return tempEmp;
}

void updateSalary(struct Employee *emp, float newSalary){

    emp->employeeSalary = newSalary;
}

void displayEmployee(struct Employee emp){

    printf("\n===== Employee Information =====\n");
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Employee Name: %s\n", emp.employeeName);
    printf("Employee Department: %s\n", emp.employeeDepartment);
    printf("Employee Salary: %.2f\n", emp.employeeSalary);

}