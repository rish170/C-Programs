#include <stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[100];
    char designation[100];
    char department[100];
    float basicSalary;
    float allowance;
    float grossSalary;
    float tax;
    float netSalary;
};

// Function to calculate allowances, gross salary, tax, and net salary
void calculateSalary(struct Employee *emp) {
    emp->allowance = 0.1 * emp->basicSalary;
    emp->grossSalary = emp->basicSalary + emp->allowance;
    emp->tax = 0.05 * emp->basicSalary;
    emp->netSalary = emp->grossSalary - emp->tax;
}

// Function to print the pay slip
void printPaySlip(struct Employee emp) {
    printf("Pay Slip\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("Allowance: %.2f\n", emp.allowance);
    printf("Gross Salary: %.2f\n", emp.grossSalary);
    printf("Tax: %.2f\n", emp.tax);
    printf("Net Salary: %.2f\n", emp.netSalary);
}

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar(); // To consume the newline character after entering ID

    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0'; // Remove the newline character

    printf("Enter Designation: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);
    emp.designation[strcspn(emp.designation, "\n")] = '\0'; // Remove the newline character

    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0'; // Remove the newline character

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    // Calculate the salary components
    calculateSalary(&emp);

    // Print the pay slip
    printPaySlip(emp);

    return 0;
}
