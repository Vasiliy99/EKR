#include<iostream>
	#include<cmath>
	using namespace std;
	main()
	{
	int a, b, d1, d2, d3, k, s, d23, kk=0, max=0, m;
	int r=0;
	cin>>a>>b;
	for (int i=a; i<=b; i++)
	{
		d1=0;
		d2=0; 
		d3=0;
		s=0;
		for (int i1=3; i1<i; i1++)
		{
			if (i%i1==0)
			{
			k=0;
			for (int i2=2; i2<i1; i2++)
			{
				if (i1%i2==0)
				{
					k=1;
				}
			}
			if (k==0)
			{
				s++;
				d1=i1;
				break;
			}
			}
		}
		if (s==1)
		{
			d23=i/d1;
		for (int i1=3; i1<d23; i1++)
		{
			if (d23%i1==0)
			{
			k=0;
			for (int i2=2; i2<i1; i2++)
			{
				if (i1%i2==0)
				{
					k=1;
				}
			}
			if (k==0)
			{
				s++;
				d2=i1;
				break;
			}
			}
		}
		}
		if (s==2)
		{
		d3=d23/d2;
		k=0;
		for (int i2=2; i2<d3; i2++)
			{
				if (d3%i2==0)
				{
					k=1;
				}
			}
			if (k==0)
			{
				s++;
			}
		}
		if (s==3 and d1!=d2 and d1!=d3 and d2!=d3 and d1%10==d2%10 and d2%10==d3%10)
		{
			kk++;
		}
		if ((d3-d1)>(d2-d1))
		{
			r=d3-d1;
		}
		else
		{
			r=d2-d1;
		}
		if (r>max)
		{
		max=r;
		m=i;
		}
	}
	if (kk==0)
	{
		cout<<0<<" "<<0;
	}
	if (kk>0)
	{
		cout<<kk<<" "<<m;
	}
	}
