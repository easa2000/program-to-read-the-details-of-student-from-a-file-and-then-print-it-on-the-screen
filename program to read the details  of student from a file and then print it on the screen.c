// program to read the details  of student from a file and then print it on the screen
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[30];
        float fees;
        char DOB[20];
    }STUDENT;

    STUDENT stud1;
    system("cls");
    fp = fopen("student_details.dat","r");
    if (fp == NULL)
    {
        printf("\n File opening error");
    }

    fscanf(fp," %d \n %s \n %f \n %s",&stud1.roll_no, stud1.name, &stud1.fees, stud1.DOB);

    // print on the screen
    printf("\n ****** STUDENT'S DETAILS ******");
    printf("\n Roll no = %d",stud1.roll_no);
    printf("\n Name = %s",stud1.name);
    printf("\n Fees = %f",stud1.fees);
    printf("\n DOB : %s",stud1.DOB);

    fclose(fp);
}
