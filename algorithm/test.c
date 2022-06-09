#include<stdio.h>

int main(void)
{
    int input = 0,DP[1001][10] = {0,},output = 0;

    scanf("%d",&input);

    for(int i=0;i<=9;i++)
    {
            DP[1][i] = 1;
    }
    
    for(int i=2;i<=input;i++)
    {
        for(int j=0;j<=9;j++)
        {
            int sum = 0;

            for(int k=j;k<=9;k++)
            {
                sum += DP[i-1][k] % 10007;
            }

            DP[i][j] = sum %10007;
        }    
    }
    for(int k=0;k<=9;k++)
    {
        output += DP[input][k]%10007;
    }
    printf("%d",output%10007);
}