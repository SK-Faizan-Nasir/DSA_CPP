#include<iostream>

/*

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

using namespace std;

int main(){
    int n,temp,i,j;
    cin>>n;
    temp=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=temp+i;j++)
        {
            if(j<=temp)
            {
                cout<<" ";
            }
            else
            {
                cout<<i<<" ";
            }
        }
        temp-=1;
        cout<<endl;
    }
    return 0;
}