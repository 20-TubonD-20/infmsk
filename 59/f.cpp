#include <iostream>

using namespace std;

void loop(int a, int k)
{
	cin >> a;
	k=a;



	if(k/1000!=0 && k/1000!=4)
	{
	for(k=k/1000; k>0; k--)	
		{	
		if(k==0)
			break;
		cout << "M";
		}	
	}
	else if(k/1000==4)
	{
		cout << "CM";
		k=k-4000;
	}	



	k=a%1000;
	if(k/100==9)
	{
		cout << "CM";
		k=k%100;	
	}
	
	
	
	
	if(k/500==1 && k/500!=9)
	{
		cout << "D";
		k=k-500;
	}
	else if(k/500==9)
	{
		cout << "CM";
		k=k-900;
	}
	
	
	
		if(k/100!=4)
	{
	for(k=k/100; k>0; k--)	
		{	
		if(k==0)
			break;
		cout << "C";
		}	
	}
	else if(k/100==4)
	{
		cout << "CD";
		k=k-40;
	}	

	k=a%100;



	if(k/50==1 && k/10!=9)
	{
		cout << "L";
		k=k-50;
	}
	else if(k/10==9)
	{
		cout << "XC";
		k=k-90;
	}	




	if(k/10!=4)
	{
	for(k=k/10; k>0; k--)	
		{	
		if(k==0)
			break;
		cout << "X";
		}	
	}
	else if(k/10==4)
	{
		cout << "XL";
		k=k-40;
	}	



	
	k=a%10;
	
	if(k%10!=0)
		if(k%10==1)
			cout << "I";
		else if(k%10==2)
			cout << "II";
		else if(k%10==3)
			cout << "III";
		else if(k%10==4)
			cout << "IV";			
		else if(k%10==5)
			cout << "V";	
		else if(k%10==6)
			cout << "VI";	
		else if(k%10==7)
			cout << "VII";		
		else if(k%10==8)
			cout << "VIII";		
		else if(k%10==9)
			cout << "IX";
	
	
	
}

int main()
{
	int a,k;
	loop(a,k);	
	
}
