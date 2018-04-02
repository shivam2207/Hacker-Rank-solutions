#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int x1,x2,y1,y2,m1,m2,xmin,xmax,ymin,ymax,x,y,count=0;
		cin >> x1 >> y1 >> x2 >> y2;
		m1=(y2-y1);
		m2=(x2-x1);
		xmin=x1;
		ymin=y1;
		xmax=x2;
		ymax=y2;
		if(xmin>x2)
		{
			xmin=x2;
			xmax=x1;
		}
		if(ymin>y2)
		{
			ymin=y2;
			ymax=y1;
		}
		if(m1==0 && m2!=0)
		{
			count=abs(m2)-1;
		}
		else if(m2==0 && m1!=0)
		{
			count=abs(m1)-1;
		}
		else if(m1==0 && m2==0)
		{
			count=0;
		}
		else
		{
			for(x=xmin+1;x<xmax;x++)
			{
				for(y=ymin+1;y<ymax;y++)
				{
					if(m2*(y-y1)==m1*(x-x1))
					{
						count++;
						break;
					}
				}
			}
		}
		cout << count <<endl;
	}
	return 0;
}