#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



// Structure to store the student result
struct student {
    char name[50];
    int roll_no;
    int marks[10];
    }st;


  FILE *fp;
    long sz= sizeof(struct student);


int main(){
    int ch;
        while(1)
        {
        printf("Welcome to Class Result System\n");
        printf("1.Add student details\n");
        printf("2.List details of students\n");
        printf("3.Delete a record\n");
        printf("0.Exit\n\n");
        printf("Enter your choice number\n");
        scanf("%d", &ch);

        switch(ch){
            case 0:
              exit(0);
            case 1:
              add_student();
              break;
            case 2:
              display();
              break;
            case 3:
              del();
              break;

        }
        printf("\n\nPress any key to continue...\n");
         getchar();
        }
      return 0;
}

// Function to add the student
void add_student()
{
 fp= fopen("student.txt", "a");
    printf("\nAdd the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the name of the student: ");
    getchar();
    gets(st.name);
    printf("Enter the Roll Number of the student\n");
    //scanf("%d", &st[i].roll_no);
    scanf("%d", &st.roll_no);
    printf("Enter the marks in 10 subjects: \n");
    for (int j=0;j<=9;j++)
	{
	printf("Marks in subject %d : ", j+1);
	scanf("%d", &st.marks[j]);
	}

    fprintf(fp, "%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", st.name, st.roll_no, st.marks[0], st.marks[1], st.marks[2], st.marks[3], st.marks[4], st.marks[5], st.marks[6], st.marks[7], st.marks[8], st.marks[9]);
    
    printf("Student detail added\n");
    fclose(fp);

}

// Function to display details
void display(){
    fp= fopen("student.txt", "rb");
    char str[100];

    printf("STUDENT DETAILS\n\n");

    int a=0; //line number inside file for a struct
    while(fgets(str, 100, fp)!=NULL)
    {
        if(a==0)
        {
            printf("--------------------\n");
            printf("Name : %s",str);
            a++;
        }
        else if(a==1)
        {
            printf("Roll Number : %s\n",str);
            a++;
        }
        else if(a==2)
        {
            printf("Marks 1 : %s",str);
            a++;
        }
        else if(a==3)
        {
            printf("Marks 2 : %s",str);
            a++;
        }
        else if(a==4)
        {
            printf("Marks 3 : %s",str);
            a++;
        }
        else if(a==5)
        {
            printf("Marks 4 : %s",str);
            a++;
        }
        else if(a==6)
        {
            printf("Marks 5 : %s",str);
            a++;
        }
        else if(a==7)
        {
            printf("Marks 6 : %s",str);
            a++;
        }
        else if(a==8)
        {
            printf("Marks 7 : %s",str);
            a++;
        }
        else if(a==9)
        {
            printf("Marks 8 : %s",str);
            a++;
        }
        else if(a==10)
        {
            printf("Marks 9 : %s",str);
            a++;
        }
        else if(a==11)
        {
            printf("Marks 10 : %s",str);
            a=0;
            printf("\n--------------------\n");
            printf("\n--------------------\n");
        }
    }

    fclose(fp);
}

// Function to delete student details

void del()
{
    int roll; int flag=0;
    printf("Enter the roll number to delete: ");
    scanf("%d", &roll);

    FILE *ft;

    fp= fopen("student.txt", "rb");
    ft= fopen("temp.txt", "a");
    while(fread(&st,sz,1,fp)==1)
    
    {
        if (roll == st.roll_no)
        {
            flag=1;
        }
        else
        {
            fprintf(ft, "%s\n%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n", st.name, st.roll_no, st.marks[0], st.marks[1], st.marks[2], st.marks[3], st.marks[4], st.marks[5], st.marks[6], st.marks[7], st.marks[8], st.marks[9]);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (flag==0)
    {
        printf("No student found");
    }
    else
    {
        printf("Details of the student deleted");
    }
}
