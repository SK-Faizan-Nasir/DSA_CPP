#include<iostream>

/*

    *****
   *****
  *****
 *****
*****

*/

using namespace std;

int main(){
    int n,temp,i,j;
    cin>>n;
    temp=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=temp+n;j++)
        {
            if(j<=temp)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        temp-=1;
        cout<<endl;
    }
    return 0;
}