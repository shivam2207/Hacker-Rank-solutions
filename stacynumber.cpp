#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool myfunc(string i,string j)
{
        return(i.size()<j.size());
}
int main()
{
        int n,i,j,k,count,q,flag=0,temp;
        cin >> n >> q;
        vector<char> array;
        vector<string> substring;
        array.push_back(0);
        char s[n];
        string str;
        cin >> s;
        for(i=0;i<n;i++)
        {
                array.push_back(s[i]);
        }
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n-i+1;j++)
                {
                        str='\0';
                        for(k=j,count=0;count<i;k++,count++)
                        {
                                if(count==0 && array[k]=='0' && i!=1)
                                {
                                        flag=1;
                                        break;
                                }
                                else
                                {
                                //cout<<array[k]<<" ";
                                        str.append(&array[k],1);
                                        flag=0;
                                }
                        }
                        if(flag==0)
                                substring.push_back(str);
                        //cout<<str<<endl;
                }
        }
        sort(substring.begin(),substring.end());
        sort(substring.begin(),substring.end(),myfunc);
        //for(i=0;i<(int)substring.size();i++)
        //        cout<<substring[i]<<endl;
        while(q--)
        {
                cin>> temp;
                cout<<substring[temp-1]<<endl;
        }
        return 0;
}