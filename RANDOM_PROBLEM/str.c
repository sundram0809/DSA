#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[20];
    float salary;
    
};
struct employee inputdata()
{
    struct employee e1;
    printf("entre id,name,and salary");
    scanf("%d",&e1.id);
    fflush(stdin);
    fgets(e1.name,20,stdin);
    scanf("%s",&e1.name);
    scanf("%f",&e1.salary);
     printf("%d %s %f",e1.id,e1.name,e1.salary );
    return e1;

}
void diplayemployee(struct employee e1)
{
    printf("%d %s %f",e1.id,e1.name,e1.salary );

}
struct employee higestSalaryemployee(struct employee e1[],int n)
{
    int i;
    struct employee emp;
    emp=e1[0];
    for( i = 1; i <=n-1; i++)
    
        if(emp.salary<e1[i].salary)
          emp=e1[i];
    
    return emp;

}

int main()
{
    // struct employee e1;
     //e1.id=123;
     //e1.salary=999;
     // e1.name[20]='rohit';
   
     inputdata();
     //displayemployee();
     //printf("%f",e1.id);
    
    return 0;
     
}
#include<stdio.h>
struct employee
{
    int id;
    char name[100];
    float salary;

};
struct employee takinginput()
{
    struct employee e1;
    printf("entre id ,name,salary");
    scanf("%d",e1.id);
    fflush(stdin);
    fgets(e1.name,100,stdin);
    scanf("%s",e1.name);
    scanf("%f",e1.salary);
    return e1;
}
struct employee highestsalary(struct employee e1[],int n)

{
    struct employee emp;
    emp=e1[0];
    for (int  i = 1; i <=n-1; i++)
    {
        if (emp.salary<e1[i].salary)
        {
            emp=e1[i];
        }
        return emp;

    }
    
}
 int indexofhighestsalary(struct employee e1[],int n)
{
    struct employee emp;
    int i,index;
    index=0;
    emp=e1[0];
    for (i = 1; i <=n-1; i++)
    {
        if (emp.salary<e1[i].salary)
        {
            emp=e1[i];
            index=i;
        }
        return index;

    }
    
}


void sortsalaryofemployee(struct employee e1[],int n)
{
    struct employee temp;
    int index;
    for (int i = n-1; i >0; i--)
    {
     index=indexofhighestsalary(e1,i+1);
    temp=e1[i];
    e1[i]=e1[index];
    e1[index]=temp;

    }
}
void sortbyname(struct employee e1[],int n)

{
    int r,i;
    struct employee temp;
    for( r =1; r < n; r++)
    {
        for ( i = 0; i <=n-1; i++)
        {
            if (strcmp(e1[i].name,e1[i+1].name))
            {
                temp=e1[i];
                e1[i]=e1[i+1];
                e1[i+1]=temp;
            }
            
        }
        
    }
    
}
struct student
{
  int roll_number;
  char name[20];
};
struct student  takinginputfromuser()
{
    struct student s;
    int r,n;
    printf("entre roll_number and name of the student");
    scanf("%d",&s.roll_number);
    fflush(stdin);
    fgets(s.name,20,stdin);
    scanf("%s",s.name);
    return s;
}
  struct student displaystudent(struct student s)
{
    printf("%d   %s", s.roll_number,s.name);
} 
struct student takinginputArray(struct student s[],int n) 
{
    int i;
    for ( i = 0; i <n; i++)
    {
        s[i]=takinginputfromuser();
    }

    
} 
struct student displayarray(struct student s[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        displaystudent(s[i]);//display ka argument dekho
    }
    
}

struct marks
{
     int rollnumber,chem_marks,maths_marks,phy_marks;
     char name[20];

};




    










