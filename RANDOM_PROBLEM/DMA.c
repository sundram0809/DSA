#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void f3()
{
    int *p,i,s,sum=0;
    printf("entre n number for sum");
    scanf("%d",&s);
    p=(int*)malloc(sizeof(int)*s);
    for ( i = 0; i <s; i++)
    {
        scanf("%d",p+i);//p[i] nahi use kar skte hai hai
    }
    for ( i = 0; i <s; i++)
    {
        sum=sum+p[i];
    }
    printf("%d",sum);
    free(p);
}
int main()
{
    f3();
    printf("\n");
    return 0;
}

struct student
{
       char name[20];
       int roll;
     char college[40];

};

struct team
{
      struct student s1;
      struct student s2;
};
struct student* newstudent (char n[],int r,char c[])
{
    struct student *p;
    p=(struct student *)malloc(sizeof(struct student));
    strcpy(p->name,n);
    p->roll=r;
    strcpy(p->college,c);
    return p;


};


struct team* newteam(struct student n,struct student m)
{
        struct team *t;
        t=(struct team*)malloc(sizeof(struct team));
        //strcpy(t->s1,n); character hoga taab ye aayega 
        // guru el char ka valve usme copy karne ke liye use hota hai;
        t->s1=n;
        t->s2=m;
        return t;
};

struct student displaystudent(struct student *p)
{
    printf("%c   %d   %c",p->name,p->roll,p->college);
    //jiska ham object banaye hai uska print karana hoga;
};
struct team displayteam(struct student s)
{
     printf("team: ");
     displayteam(s.p)
};
