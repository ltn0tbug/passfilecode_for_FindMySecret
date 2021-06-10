#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    double tmpPassword;
    unsigned int password;
    do
    {
        tmpPassword = time(0)%50;
        tmpPassword =tmpPassword/50.0;
        
    } while (tmpPassword==0.0);
    for(int i=0;i<5;i++) tmpPassword=tmpPassword*3.8*(1.0-tmpPassword);
    tmpPassword=tmpPassword*10000;
    password =tmpPassword;
    printf("%d\n",password);
}