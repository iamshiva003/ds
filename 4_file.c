/* Write a C program to create a file for N number of Employee, it should contain EmpNo, EmpName, 
BasicSalary, DearnessAllowance, TotalSalary */
#include <stdio.h>

int main()
{
    int empNo, basicSal, totaSal, dAllowance, i, n;
    char empName[20];
    FILE *fptr;

    fptr = fopen("employee.txt", "w");

    printf("Enter the Total No of Employee: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter Employee %d Information \n", i+1);
        printf("Enter Employee No  : ");
        scanf("%d",&empNo);
        printf("Enter Employee name: ");
        scanf("%s",empName);
        printf("Enter Basic Salary : ");
        scanf("%d",&basicSal);

        dAllowance = basicSal * 0.4;
        totaSal = basicSal + dAllowance;

        fprintf(fptr,"%d \t%s \t%d \t%d \t%d", empNo, empName, basicSal, dAllowance, totaSal);
    }

    fclose(fptr);

    printf("\n----Employee Information System---\n");
    fptr = fopen("employee.txt","r");
    printf("\nEmpNo \tEmpName  BasicSal  dAllowance  TotalSal \n");
    for(i=0; i<n; i++)
    {
        fscanf(fptr,"%d %s %d %d %d",&empNo, empName, &basicSal, &dAllowance, &totaSal);
        printf("%d \t%s     %d      %d      %d\n", empNo, empName, basicSal, dAllowance, totaSal);
    }

    fclose(fptr);

    return 0;
}
