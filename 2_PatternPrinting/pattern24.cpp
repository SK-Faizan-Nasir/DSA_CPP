#include<iostream>
/*

*********
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*********

*/

using namespace std;

int main(){

    int i,j,n,start,end,temp;
    cin>>n;
    start=n+2;
    end=n+2;
    for(i=1;i<=n+n;i++)
    {
        for(j=1;j<=n+n-1;j++)
        {
            temp=i+j;
            if(i==1 || i==n+n)
            {
                cout<<"*";
            }
            else if(temp>=start && temp<=end)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        if (i==n)
        {
            start+=1;
            end+=1;
        }
        else if(i<n)
        {
            if(i!=1){
            end+=2;
            }
        }
        else{
            start+=2;
        }
    }
    return 0;
}