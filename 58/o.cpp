#include <iostream>

using namespace std; 

int a;

int main()
{
	cin >> a;
	
	int k=a, count=0, i=a,ost,ost2,c=0;
	
	while(k>0)
	{
		k/=10;			//считаем кол-во цифр
		count=count+1;
		
	}
	
		k=a;		// вернём k
	for(count=count; count>=1; count--)		//обработка каждой цифры
		{
			
			if(i%10==0)
				{
					ost=15;		//лайфхак при делении на 0*
					
				}
			else
					ost=i%10;			//* без доп условий находим остаток, т.е. считаем справа налево, проверяя каждую цифру
			k=i;							//fixed?		//fixed?(2)
		while(k>0)
			{
					k/=10;	//сдвиг к след цифре
								
				if(k%10==0 && k!=0)			//fixed?
					{
						ost2=15;		//лайфхак при делении на 0*	
						if(ost==ost2)	//сверяем		//fixed?
						{
							c=1;		//показатель правильного ответа
							break;
						}			
						
					}
				
				else if(ost==k%10)
					{
						c=1;		//что и раньше, но без приколов с 0
						break;
						
					}
			}
			i=i/10;			//след цифра		//fixed?
			if(c==1)
				break;
		}
		if(c==1)
			cout << "YES";
		else
			cout << "NO";
	}
	

