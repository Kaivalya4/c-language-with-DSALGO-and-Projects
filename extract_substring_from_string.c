#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char mainstr[30],sub[30];
    int i=0,pos,len1,len2;
    printf("enter the main string : ");
    gets(mainstr);
    len1=strlen(mainstr);
    printf("\nenter starting position of substring : ");
    scanf("%d",&pos);
    printf("\nenter the length of the substring : ");
    scanf("%d",&len2);
    if(len2>len1)
    {
        printf("\nerror length of substring is exceeding the limit !!");
        exit(0);
    }
    while(i<len2)
    {
        sub[i]=mainstr[pos];
        i++;
        pos++;
    }
    sub[i]='\0';
    printf("\nrequired substring is : \n");
    puts(sub);
    return 0;
}
