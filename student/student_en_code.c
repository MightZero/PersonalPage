#include <stdio.h>
#include <stdlib.h>
#define CLS system("cls");
int n=0;
struct stude
{
    int number;
    char name[20];
    float CS;
    float MS;
    float ES;
}student[];
void main()
{
    hello();
}
void hello()
{
    void output();
    void star();
    void input();
    void d();
    star();
    printf("Welcome to Student achievement management system!\n");
    printf("\n");
    printf("1=input the student information\n");
    printf("2=View student information\n");
    star();
    d();
}
void d()
{
    void output();
    void star();
    void input();
    int a;
    scanf("%d",&a);
    CLS
    if(a==1)
    {
        input();
        CLS
        hello();
    }
    else if(a==2)
    {
        output();
        system("pause");
        CLS

        hello();
    }
    else
    {
        hello();
        d();
    }
}
void star()
{
    printf("*********************************************\n");
}
void output()
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("No.%d Name:%s Chinese score:%5.1f Maths score:%5.1f English score:%5.1f\n",student[i-1].number,student[i-1].name,student[i-1].CS,student[i-1].MS,student[i-1].ES);
    }
    float Csum,CAverage,Msum,MAverage,Esum,EAverage,Average;
    for(Csum=0,i=1;i<=n;i++)
    {
        Csum=Csum+student[i-1].CS;
    }
    CAverage=Csum/n;
    for(Msum=0,i=1;i<=n;i++)
    {
        Msum=Msum+student[i-1].MS;
    }
    MAverage=Msum/n;
    for(Esum=0,i=1;i<=n;i++)
    {
        Esum=Esum+student[i-1].ES;
    }
    EAverage=Esum/n;
    Average=(Csum+Msum+Esum)/(n*3);
    printf("This class's Total average is %5.1f,Chinese average is %5.1f,maths average is %5.1f,English average is %5.1f.\n",Average,CAverage,MAverage,EAverage);
}
void input()
{
    int i;
    printf("Enter the number of the student:");
    scanf("%d",&n);
    CLS

    for(i=1;i<=n;i++)
    {
        student[i-1].number=i;
    }
    for(i=1;i<=n;i++)
    {
        if(i==1||i>20&&i%10==1)
        {
            printf("Enter %dst student's name:",i);
            scanf("%s",student[i-1].name);
            CLS
        }
        else
        {
            if(i==2||i>20&&i%10==2)
            {
                printf("Enter %dnd student's name:",i);
                scanf("%s",student[i-1].name);
                CLS
            }
            else
            {
                printf("Enter %dth student's name:",i);
                scanf("%s",student[i-1].name);
                CLS
            }
        }

    }

    for(i=1;i<=n;i++)
    {
        if(i==1||i>20&&i%10==2)
        {
            printf("Enter %dst student's Chinese score:",i);
            scanf("%f",&student[i-1].CS);
            CLS
        }
        else
        {
            if(i==2||i>20&&i%10==2)
            {
                printf("Enter %dnd student's Chinese score:",i);
                scanf("%f",&student[i-1].CS);
                CLS
            }
            else
            {
                printf("Enter %dth student's Chinese score:",i);
                scanf("%f",&student[i-1].CS);
                CLS
            }
        }

    }
    for(i=1;i<=n;i++)
    {
        if(i==1||i>20&&i%10==1)
        {
            printf("Enter %dst student's maths score:",i);
            scanf("%f",&student[i-1].MS);
            CLS
        }
        else
        {
            if(i==2||i>20&&i%10==2)
            {
                printf("Enter %dnd student's maths score:",i);
                scanf("%f",&student[i-1].MS);
                CLS
            }
            else
            {
                printf("Enter %dth student's maths score:",i);
                scanf("%f",&student[i-1].MS);
                CLS
            }
        }

    }
       for(i=1;i<=n;i++)
    {
        if(i==1|i>20&&i%10==1)
        {
            printf("Enter %dst student's English score:",i);
            scanf("%f",&student[i-1].ES);
            CLS
        }
        else
        {
            if(i==2||i>20&&i%10==2)
            {
                printf("Enter %dnd student's English score:",i);
                scanf("%f",&student[i-1].ES);
                CLS
            }
            else
            {
                printf("Enter %dth student's English score:",i);
                scanf("%f",&
                      student[i-1].ES);
                CLS
            }
        }

    }
}

