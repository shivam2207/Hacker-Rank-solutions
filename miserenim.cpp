#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
        {
        int n;
        cin >> n;
        int i,sol=0,array[n],flag=0;
        for(i=0;i<n;i++)
            {
            cin >> array[i];
            sol^=array[i];
        }
        for(i=0;i<n;i++)
        {
            if(array[i]!=1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(n%2==0)
                cout << "First" << endl;
            else
                cout <<"Second" << endl;
        }
        else
        {
            if(sol==0)
                cout<<"Second"<<endl;
            else
                cout <<"First" << endl;
        }

    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
