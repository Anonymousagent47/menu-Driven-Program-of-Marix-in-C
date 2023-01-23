#include<stdio.h>
int add(int a[3][3],int b[3][3]);
int sub(int a[3][3],int b[3][3]);
int multi(int a[3][3],int b[3][3]);
int trans(int b[3][3]);

int main()
{
    int opt, a[3][3], b[3][3];
    printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Transpose\n");
    printf("Enter Your Chpice: ");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1: printf("You Choose Addition..\n");
            printf("======================\n");
            add(a,b);
        break;
    case 2: printf("You Choose Substraction..\n");
            printf("======================\n");
            sub(a,b);
        break;
    case 3: printf("You choose Multiplication..\n");
            printf("============================\n");
            multi(a,b);
            break;
    case 4: printf("You Choose Transpose..\n");
            printf("========================\n");
            trans(b);
            break;
    default: printf("Enter valid Arguments");
    }
}

int add(int m[3][3],int m1[3][3])
{
    int sum[3][3];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nEnter Matrix 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]= m[i][j]+ m1[i][j];
        }
    }
    printf("\nDisplaying Substraction of Matrix:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
    }
return sum;
}

int sub(int m[3][3],int m1[3][3])
{
    int sum[3][3];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nEnter Matrix 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]= m[i][j]+ m1[i][j];
        }
    }
    printf("\nDisplaying Substraction of Matrix:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
    }
return sum;
}



int multi(int m[3][3],int m1[3][3])
{
    int sum[3][3];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nEnter Matrix 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=0;
            for(int k=0;k<3;k++){
            sum[i][j]+= m[i][k]*m1[k][j];
            }
        }
    }
    printf("\nDisplaying Multiplication of Matrix:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
    }
return sum;   
}


int trans(int m1[3][3])
{
    
    int sum[3][3];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Value of [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
   
    printf("\nDisplaying Transpose of Matrix:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d\t",m1[j][i]);
        }
    }
return m1;
}
