#include<iostream>
using namespace std;
int main(){
	double a[5],sum=0,per;
	cout<<"enter the marks for 5 subjects :"<<endl;
	for(int i=0; i<5; i++)
	{cout<<"mark of subject"<<i++<<":";
	cin>>a[i];
	if (a[i]>100)
	{
		cout<<"nvalid mark! enter again"<<endl;
		cin>>a[i];
		
	}
	sum=sum+a[i];
	
	}
	per=(sum/500)*100;
	if(per>800) cout<<"distinction";
	else if(per<80&&per>=70)
	{cout<<"1st division";
	}
	else if (per<50&&per>=45)
	{cout<<"3rd division";
	}
	else if(per<45)
	{cout<<"sorry!try more";
	
	}
	
	return 0;
}
