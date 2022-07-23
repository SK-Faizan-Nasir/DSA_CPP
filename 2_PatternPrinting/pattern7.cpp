#include<iostream>
/*

*      *
**    **
***  ***
********

*/
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {   
        int space= (i-1)+(2*n - 2*i);
        
        for(int j=0;j<n+n;j++)
        {
        
            if(j>=i && j<=space)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        
        }
    cout<<endl;
    }
    return 0;
}