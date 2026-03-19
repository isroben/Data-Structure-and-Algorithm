#include <stdio.h>
#include <string.h>

// WAP to store the record of n no. of employees as emp_id, emp_name, emp_salary, emp_post

struct Employee {
    int emp_id;
    char emp_name[50];
    float emp_salary;
    char emp_post[50];
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];  // array of structures

    // Input employee records
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Employee Name: ");
        scanf(" %s", emp[i].emp_name);

        printf("Employee Salary: ");
        scanf("\n%f", &emp[i].emp_salary);

        printf("Employee Post: ");
        scanf(" %s", emp[i].emp_post);
    }

    // Display employee records
    printf("\n--- Employee Records ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].emp_name);
        printf("Salary: %.2f\n", emp[i].emp_salary);
        printf("Post: %s\n", emp[i].emp_post);
    }

    return 0;
}