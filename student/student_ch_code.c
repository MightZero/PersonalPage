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
    printf("欢迎使用学生成绩管理系统\n");
    printf("\n");
    printf("1=输入学生信息\n");
    printf("2=查看学生信息\n");
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
        printf("学号:%d 姓名:%s 语文成绩:%5.1f分 数学成绩:%5.1f分 英语成绩:%5.1f分\n",student[i-1].number,student[i-1].name,student[i-1].CS,student[i-1].MS,student[i-1].ES);
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
    printf("这个班级的总平均分是%5.1f分,语文平均分是%5.1f分,数学平均分是%5.1f分,英语平均分是%5.1f分.\n",Average,CAverage,MAverage,EAverage);
}
void input()
{
    int i;
    printf("输入学生人数:");
    scanf("%d",&n);
    CLS

    for(i=1;i<=n;i++)
    {
        student[i-1].number=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("输入第%d个学生的姓名:",i);
        scanf("%s",student[i-1].name);
        CLS
    }

    for(i=1;i<=n;i++)
    {
        printf("输入第%d个学生的语文成绩:",i);
        scanf("%f",&student[i-1].CS);
        CLS
    }
    for(i=1;i<=n;i++)
    {
        printf("输入第%d个学生的数学成绩:",i);
        scanf("%f",&student[i-1].MS);
        CLS
    }
       for(i=1;i<=n;i++)
    {
        printf("输入第%d个学生的英语成绩:",i);
        scanf("%f",&student[i-1].ES);
        CLS
    }

}

