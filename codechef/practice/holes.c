#include<stdio.h>
int main()
{
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
int a[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
int i,t;
char c;
scanf("%d",&t);
int count=0;
getchar();
while(t--)
{
count=0;
while((c=getchar())!='\n')
{
	count+=a[c-'A'];
}
printf("%d\n",count);
}
return 0;

}
