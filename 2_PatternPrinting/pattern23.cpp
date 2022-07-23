#include<iostream>
/*

   *   
  * *
 *   *
*     *
*     *
 *   *
  * *
   * 
   
*/

using namespace std;

int main(){
    
    int n,i,j;
    cin>>n;
    int temp1=n+1,temp2=n+1;
    for(i=1;i<=n+n;i++)
    {
        for(j=1;j<=n+n-1;j++)
        {
            if(i==1 || i==n+n)
            {
                if(j==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if ( (i+j == temp1) || (i+j == temp2) )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        if (i==n)
        {
            temp1+=1;
            temp2+=1;
        }
        else if(i<n){
            temp2+=2;
        }
        else{
            temp1+=2;
                    }
    }
    return 0;
}