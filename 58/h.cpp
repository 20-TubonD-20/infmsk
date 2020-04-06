#include <iostream>

using namespace std;

int a,b,ost,c,k;

int main()
{
	cin >> a >> b;
	
	k=a;
	
	for(a=a; a<=b; a++)			// От a до b проходимся
	{
		k=a;					// Приравниваем новое k к a, чтоб сохранить a
		c=0;
		while(k>0)				// При 0 считаем, что число проверено 
		{
			if(k%10==0)			// Исключаем 0
				{
					c=0;		// c - счётчик, который после цикла говорит, что число подходит или нет
					break;
				}
			ost=k%10;			// Находим остаток, т.е. в итоге проходимся по числу справа налево
			if(a%ost==0)		// Нроверяем цифру
				{
					c=1;		
				}				//		_-TubonD-_		//
			else 					
				{
					c=0;
					break;
				}
				k=k/10;			// Сдвигаем число
		}
		//	setlocale(LC_ALL, "Russian");
		if(c==1)
		//	cout << "ответ >>  " << a << endl;
		cout << a << " ";
	 
			
	}
//	setlocale(LC_ALL, "Russian");
//	cout << "нажмите пробел для выхода";
	cin.get();
}
