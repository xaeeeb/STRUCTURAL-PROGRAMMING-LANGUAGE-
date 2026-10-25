
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define TEXT_SIZE 100

struct Employee {
    int id;
    char name[TEXT_SIZE];
    char position[TEXT_SIZE];
    char department[TEXT_SIZE];
    float salary;
};

struct Organisation {
    char name[TEXT_SIZE];
    char location[TEXT_SIZE];
    char industry[TEXT_SIZE];
    int foundedYear;
    int employeeCount;
    struct Employee employees[MAX_EMPLOYEES];
};

/* Input helpers */
void readText(char text[], int size) {
    fgets(text, size, stdin);
    text[strcspn(text, "\n")] = '\0';
}

int readInt(void) {
    int value;
    while (scanf("%d", &value) != 1) {
        printf("Enter a valid whole number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return value;
}

float readFloat(void) {
    float value;
    while (scanf("%f", &value) != 1) {
        printf("Enter a valid number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return value;
}

/* Organisation details */
void inputOrganisation(struct Organisation *org) {
    printf("Organisation name: ");
    readText(org->name, TEXT_SIZE);

    printf("Location: ");
    readText(org->location, TEXT_SIZE);

    printf("Industry: ");
    readText(org->industry, TEXT_SIZE);

    printf("Founded year: ");
    org->foundedYear = readInt();

    printf("Number of employees to enter (0-100): ");
    org->employeeCount = readInt();

    if (org->employeeCount < 0)
        org->employeeCount = 0;
    if (org->employeeCount > MAX_EMPLOYEES)
        org->employeeCount = MAX_EMPLOYEES;

    for (int i = 0; i < org->employeeCount; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Employee ID: ");
        org->employees[i].id = readInt();

        printf("Name: ");
        readText(org->employees[i].name, TEXT_SIZE);

        printf("Position: ");
        readText(org->employees[i].position, TEXT_SIZE);

        printf("Department: ");
        readText(org->employees[i].department, TEXT_SIZE);

        printf("Monthly salary: ");
        org->employees[i].salary = readFloat();
    }
}

/* Display organisation details */
void showOrganisation(struct Organisation org) {
    printf("\n===== ORGANISATION PROFILE =====\n");
    printf("Name: %s\n", org.name);
    printf("Location: %s\n", org.location);
    printf("Industry: %s\n", org.industry);
    printf("Founded: %d\n", org.foundedYear);
    printf("Employees recorded: %d\n", org.employeeCount);
}

/* Display all employees */
void showEmployees(struct Organisation org) {
    if (org.employeeCount == 0) {
        printf("No employees recorded.\n");
        return;
    }

    printf("\n===== EMPLOYEE LIST =====\n");

    for (int i = 0; i < org.employeeCount; i++) {
        struct Employee e = org.employees[i];

        printf("\nID: %d\n", e.id);
        printf("Name: %s\n", e.name);
        printf("Position: %s\n", e.position);
        printf("Department: %s\n", e.department);
        printf("Monthly salary: %.2f\n", e.salary);
    }
}

/* Search employee by ID */
void searchEmployee(struct Organisation org) {
    int id, found = 0;

    printf("Enter employee ID: ");
    id = readInt();

    for (int i = 0; i < org.employeeCount; i++) {
        if (org.employees[i].id == id) {
            struct Employee e = org.employees[i];

            printf("\nEmployee found!\n");
            printf("Name: %s\n", e.name);
            printf("Position: %s\n", e.position);
            printf("Department: %s\n", e.department);
            printf("Monthly salary: %.2f\n", e.salary);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}

/* Show employees in a chosen department */
void searchDepartment(struct Organisation org) {
    char department[TEXT_SIZE];
    int found = 0;

    printf("Enter department name: ");
    readText(department, TEXT_SIZE);

    for (int i = 0; i < org.employeeCount; i++) {
        if (strcmp(org.employees[i].department,
                   department) == 0) {
            printf("%d | %s | %s | Salary: %.2f\n",
                   org.employees[i].id,
                   org.employees[i].name,
                   org.employees[i].position,
                   org.employees[i].salary);
            found = 1;
        }
    }

    if (!found)
        printf("No employees found in that department.\n");
}

/* Calculate salary statistics */
void salaryReport(struct Organisation org) {
    float total = 0;
    float highest = -1;
    int highestIndex = -1;

    if (org.employeeCount == 0) {
        printf("No employee salary data available.\n");
        return;
    }

    for (int i = 0; i < org.employeeCount; i++) {
        total += org.employees[i].salary;

        if (org.employees[i].salary > highest) {
            highest = org.employees[i].salary;
            highestIndex = i;
        }
    }

    printf("\n===== SALARY REPORT =====\n");
    printf("Total monthly salary expense: %.2f\n", total);
    printf("Average monthly salary: %.2f\n",
           total / org.employeeCount);

    printf("Highest-paid employee: %s\n",
           org.employees[highestIndex].name);
    printf("Highest monthly salary: %.2f\n", highest);
}

/* Count employees in each distinct department */
void departmentReport(struct Organisation org) {
    char seen[MAX_EMPLOYEES][TEXT_SIZE];
    int departmentCount = 0;

    for (int i = 0; i < org.employeeCount; i++) {
        int alreadySeen = 0;

        for (int j = 0; j < departmentCount; j++) {
            if (strcmp(org.employees[i].department,
                       seen[j]) == 0) {
                alreadySeen = 1;
                break;
            }
        }

        if (alreadySeen)
            continue;

        strcpy(seen[departmentCount],
               org.employees[i].department);

        int count = 0;

        for (int j = 0; j < org.employeeCount; j++) {
            if (strcmp(org.employees[j].department,
                       seen[departmentCount]) == 0) {
                count++;
            }
        }

        printf("%s: %d employee(s)\n",
               seen[departmentCount], count);

        departmentCount++;
    }

    if (departmentCount == 0)
        printf("No department data available.\n");
}

/* Full report */
void fullReport(struct Organisation org) {
    showOrganisation(org);
    showEmployees(org);
    salaryReport(org);

    printf("\n===== DEPARTMENT REPORT =====\n");
    departmentReport(org);
}

int main(void) {
    struct Organisation org;
    int choice;

    printf("================================\n");
    printf("   ORGANISATION MANAGEMENT\n");
    printf("================================\n\n");

    inputOrganisation(&org);

    do {
        printf("\n\n========== MAIN MENU ==========\n");
        printf("1. View organisation profile\n");
        printf("2. View all employees\n");
        printf("3. Search employee by ID\n");
        printf("4. Search employees by department\n");
        printf("5. View salary report\n");
        printf("6. View department report\n");
        printf("7. Generate complete report\n");
        printf("0. Exit\n");
        printf("Choose an option: ");

        choice = readInt();

        switch (choice) {
            case 1:
                showOrganisation(org);
                break;

            case 2:
                showEmployees(org);
                break;

            case 3:
                searchEmployee(org);
                break;

            case 4:
                searchDepartment(org);
                break;

            case 5:
                salaryReport(org);
                break;

            case 6:
                departmentReport(org);
                break;

            case 7:
                fullReport(org);
                break;

            case 0:
                printf("Thank you for using Organisation!\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
