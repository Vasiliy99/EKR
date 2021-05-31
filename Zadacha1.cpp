    #include<iostream>
		#include<cmath>
		using namespace std;
		main()
		{
		int a, b, d1, d2, k, kk, max, i1;
		k=0;
		cin>>a>>b;
		for (int i=a; i<=b; i++)
		{
		if (abs(i)>99)
		{
			i1=abs(i);
			kk=0;
			while (i1>0)
			{
				i1=i1/10;
				kk=kk+1;
			}
			d1=abs(i)/pow(10,(kk-2));
			d2=i%100;
			d2=abs(d2);
			if (abs(d1-d2)>0)
			{
			if (i%(d1-d2)==0		)
			{
				 k=k+1;
				 max=i;
			}
			}
		}
		}
		if (k==0)
		{
			cout<<0<<" "<<0;
		}
		if (k>0)
		{
			cout<<k<<" "<<max;
		}
		}	
