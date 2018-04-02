#include <iostream>
#include <algorithm>

using namespace std;
typedef struct datastucture
{
	int orderno;
	int ordertime;
	int processtime;
	int completiontime;
}datastucture;

bool sort_by_completiontime( const datastucture & lhs, const datastucture & rhs )
{
   return lhs.completiontime < rhs.completiontime;
}

int main()
{
	int n,i;
	cin >> n;
	datastucture ds[n];
	for(i=0;i<n;i++)
	{
		cin >> ds[i].ordertime>> ds[i].processtime;
		ds[i].completiontime=ds[i].ordertime+ds[i].processtime;
		ds[i].orderno=i+1;
	}
	sort(ds,ds+n,sort_by_completiontime);
	for(i=0;i<n-1;i++)
		cout<<ds[i].orderno<<" ";
	cout<<ds[i].orderno<<endl;
	return 0;
}