#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class data
{
	int priority;
	char name[50];
	public:
	data()
	{
		priority=0;
	}
	void increment_priority(int x)
	{
		priority+=x;
	}
	char *getname()
	{
		return name;
	}
	int getpriority()
	{
		return priority;
	}
	void setname(char str[])
	{
		strcpy(name,str);
	}
};
int main()
{
	int q,z=0,flag=0,firstpos=0,lastpos=0,k,j;
	
	data d[100];
	char myname[11],decide,tmpname1[20],tmpname2[20],str[200];
	cin.getline(myname,11);
	d[z].setname(myname);
	d[z].getname();
	z++;
	cin>>q;
	getchar();
	for(int i=0;i<q;i++)
	{
		flag=0;
		cin.getline(str,200);
		for(j=0;str[j];j++)
		{
			if(str[j]=='\'')
			{
				lastpos=j-1;
				break;
			}
			else if(str[j]==' ')
			{
				firstpos=j+1;
				flag++;
				if(flag==1)
				{
					tmpname1[j]='\0';
					decide=str[j+1];
				}

			}
			if(flag==0)
			{
				tmpname1[j]=str[j];
			}
			
			//cout<<str[j]<<" "<<firstpos<<" "<<lastpos<<endl;
		}

		//	cout<<str[j]<<" "<<firstpos<<" "<<lastpos<<endl;
		//getchar();
		for(k=firstpos;k<=lastpos;k++)
			tmpname2[k-firstpos]=str[k];
		tmpname2[k-firstpos]='\0';
		d[z].setname(tmpname1);
		switch(decide)
		{
			case 'p':
				{
					d[z].increment_priority(15);
					break;
				}
			case 'c':
				{
					d[z].increment_priority(10);
					break;
				}
			default:
				{
					d[z].increment_priority(5);
					break;
				}
		

		}

		//d[z].increment_priority()
		//cout<<"****"<<tmpname1<<"****"<<tmpname2<<"****";
		
	}
	cout<<z;
	//qsort(d,);
	return 0;
}
