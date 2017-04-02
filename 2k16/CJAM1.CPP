#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int T,n,i,j,a[20];
cin>>T;
for(i=0;i<T;i++)
{
 cin>>a[i];
}
int num,rem,temp,n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
n0=n1=n2=n3=n4=n5=n6=n7=n8=n9=0;
for(i=0;i<T;i++)
{
 num=a[i];
 cout<<"num="<<num<<endl;
 for(j=1;j<1000;j++)
 {
	num=num*j;
	if(n0==0||n1==0||n2==0||n3==0||n4==0||n5==0||n6==0||n7==0||n8==0||n9==0)
	{
	temp=num;
		while(num>0)
		{
		 rem=num%10;
		 switch(rem)
		 {
		 case 0: n0++;
		 break;
		 case 1: n1++;
		 break;
		 case 2: n2++;
		 break;
		 case 3: n3++;
		 break;
		 case 4: n4++;
		 break;
		 case 5: n5++;
		 break;
		 case 6: n6++;
		 break;
		 case 7: n7++;
		 break;
		 case 8: n8++;
		 break;
		 case 9: n9++;
		 }
		 num=num/10;
		}
	}
	else
	{
	cout<<"value of n flags="<<n0<<n1<<n2<<n3<<n4<<n5<<n6<<n7<<n8<<n9;
	a[i]=temp;
	}
	break;
 }
}
for(i=0;i<T;i++)
{cout<<"answer="<<a[T]<<endl;}
getch();
}
