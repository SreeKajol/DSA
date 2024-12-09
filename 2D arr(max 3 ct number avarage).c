#include<stdio.h>
int main()
{
    int student,ct;
    printf("enter the number of student and ct:");
    scanf("%d%d",&student,&ct);
    int mark_shit[ct][student];
//
////           row major
//
//for(int i=0;i<ct;i++){
//    for(int j=0;j<student;j++){
//        scanf("%d",&mark_shit[i][j]);
//    }
//}
//      colum major
    for(int i=0; i<student; i++)
    {
        for(int j=0; j<ct; j++)
        {
            scanf("%d",&mark_shit[j][i]);
        }
    }


    int result[student];
    for(int i=0; i<student; i++)
    {
        int sum=0,mi=100;
        for(int j=0; j<ct; j++)
        {
            sum+=mark_shit[j][i];
            if(mark_shit[j][i]<mi)mi=mark_shit[j][i];
        }
        //printf("%d  %d",sum,mi);
        result[i]=(sum-mi)/3;
    }
    for(int i=0; i<student ; i++)
    {
        printf("%d ",result[i]);
    }








    return 0;
}
