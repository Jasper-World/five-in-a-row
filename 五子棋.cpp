#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void print()
{
	cout<<"-------------"<<endl;
	cout<<"| "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<" |"<<endl;
	cout<<"-------------"<<endl;
	cout<<"| "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<" |"<<endl;
	cout<<"-------------"<<endl;
	cout<<"| "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<" |"<<endl;
	cout<<"-------------"<<endl;
}
int main()
{
	print();
	for(int i=1;i<=9;i++)
	{
		if(i%2==1)
		{
			int n;
			cin>>n;
			a[n-1] = 'o';
			system("cls");
			if(a[0]==a[1]&&a[1]==a[2]&&a[2]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			if(a[3]==a[4]&&a[4]==a[5]&&a[5]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			if(a[6]==a[7]&&a[7]==a[8]&&a[8]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			
			if(a[0]==a[3]&&a[3]==a[6]&&a[6]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			if(a[1]==a[4]&&a[4]==a[7]&&a[7]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			if(a[2]==a[5]&&a[5]==a[8]&&a[8]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			
			if(a[0]==a[4]&&a[4]==a[6]&&a[6]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			if(a[2]==a[4]&&a[4]==a[8]&&a[8]!=' ')
			{
				cout<<"oʤ";
				break;
			}
			print();	
		}
		else
		{
			int n;
			cin>>n;
			a[n-1] = 'x';
			system("cls");
			if(a[0]==a[1]&&a[1]==a[2]&&a[2]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			if(a[3]==a[4]&&a[4]==a[5]&&a[5]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			if(a[6]==a[7]&&a[7]==a[8]&&a[8]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			
			if(a[0]==a[3]&&a[3]==a[6]&&a[6]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			if(a[1]==a[4]&&a[4]==a[7]&&a[7]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			if(a[2]==a[5]&&a[5]==a[8]&&a[8]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			
			if(a[0]==a[4]&&a[4]==a[6]&&a[6]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			if(a[2]==a[4]&&a[4]==a[8]&&a[8]!=' ')
			{
				cout<<"xʤ";
				break;
			}
			print();	
		}
		
	} 
	
	return 0;
} 
