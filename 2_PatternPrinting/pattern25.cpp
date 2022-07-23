#include<iostream>

/*

*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *

*/

using namespace std;

int main(){
    int n,i,j,end;
    cin>>n;
    
    end=n+n+1;
    
    for(i=1;i<=n+n;i++)
    {
        for(j=1;j<=n+n;j++)
        {
            if(j==1 || j==n+n || j==i || i+j==end)
            {
                cout<<"*";
            }
            else{cout<<" ";}
            
        }
        cout<<endl;
        
    }

    return 0;
}