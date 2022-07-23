#include<iostream>

/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

using namespace std;

int main(){

    int n,i,j,start,end;
    cin>>n;
    start=1;
    end=n+n;
    for(i=1;i<=n+n;i++)
    {
        for(j=1;j<=n+n;j++)
        {
            if(j<=start || j>=end)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        if (i<n)
        {
            start+=1;
            end-=1;
        }
        else if(i>n)
        {
            start-=1;
            end+=1;
        }
    }
    return 0;
}