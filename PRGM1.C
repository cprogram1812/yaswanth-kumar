#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],x[10];
 int len1,i,j=0,z,len2;
 clrscr();
 printf("\nEnter a string: ");
 gets(a);
 len1=strlen(a);
 for(i=len1-1;i>=1;i--)
 {
    if(a[i]!=' ')
   {
   /*storing the data temporarily*/x[j]= a[i];
     j++;
    }
    if(a[i]==' ')
    {
       len2=strlen(x);
       j=0;
      for(z=len2-1;z>=1;z--)
      {
	printf("%c",x[z]);
	x[z]='\0';
      }
       printf(" ");
     }
  }
   len2=strlen(x);
   for(z=len2-1;z>=1;z--)
   {
     printf("%c",x[z]);
    }

 getch();
 }

