// http://www.cyberforum.ru/cpp-beginners/thread3621.html
#include <iostream>
#include <stdio.h>

 using namespace std;

  int main()
    {
		
		int a[100][100]={0};
		int n,j,i;
		//---------------------
		cin>>n;
        //----------------------
		int t=1;
		i=0;
		int v=0;
		int s=0;
		int r=1;
		int l=1,c=0,d=0;
		int f;
		f=n;
		while (t<=n*n)
		{
			//заполняем справа на лево
			for (j=s;j<f;++j)
			{
				a[i][j]=t;
				++t;
				
			}v=j-1;
			--j;
			//заполняем с верху вниз
			if (t<=n*n)
			{
			for (i=r;i<f;++i)
			{
				a[i][j]=t;
				++t;
			}l=i-1;
			--i;
			}
			//заполняем с лева на право
			if (t<=n*n)
			{
			for (j=v-1;j>=c;--j)
			{
               a[i][j]=t;
				++t;
			}
			}
			if (t<=n*n)
			{
			//заполняем с низу верх
			for (i=l-1;i>d;--i)
			{
               a[i][j+1]=t;
				++t;
			}
			}
			//уменшаем параметры матрицы(что бы числа шли внутрь а не заполнялись поверх тех которы уже заполнены)
			--f;
			
			++s;
			++r;
			++c;
			++d;
			++i;
		}

		//вывод массива
		for (i=0;i<n;++i)
		{
			for (j=0;j<n;++j)
			{
				cout<<a[i][j]<<" ";
			} 
			cout<<endl;
		}

		return 0;
  }