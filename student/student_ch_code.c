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
    printf("��ӭʹ��ѧ���ɼ�����ϵͳ\n");
    printf("\n");
    printf("1=����ѧ����Ϣ\n");
    printf("2=�鿴ѧ����Ϣ\n");
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
        printf("ѧ��:%d ����:%s ���ĳɼ�:%5.1f�� ��ѧ�ɼ�:%5.1f�� Ӣ��ɼ�:%5.1f��\n",student[i-1].number,student[i-1].name,student[i-1].CS,student[i-1].MS,student[i-1].ES);
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
    printf("����༶����ƽ������%5.1f��,����ƽ������%5.1f��,��ѧƽ������%5.1f��,Ӣ��ƽ������%5.1f��.\n",Average,CAverage,MAverage,EAverage);
}
void input()
{
    int i;
    printf("����ѧ������:");
    scanf("%d",&n);
    CLS

    for(i=1;i<=n;i++)
    {
        student[i-1].number=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("�����%d��ѧ��������:",i);
        scanf("%s",student[i-1].name);
        CLS
    }

    for(i=1;i<=n;i++)
    {
        printf("�����%d��ѧ�������ĳɼ�:",i);
        scanf("%f",&student[i-1].CS);
        CLS
    }
    for(i=1;i<=n;i++)
    {
        printf("�����%d��ѧ������ѧ�ɼ�:",i);
        scanf("%f",&student[i-1].MS);
        CLS
    }
       for(i=1;i<=n;i++)
    {
        printf("�����%d��ѧ����Ӣ��ɼ�:",i);
        scanf("%f",&student[i-1].ES);
        CLS
    }

}

