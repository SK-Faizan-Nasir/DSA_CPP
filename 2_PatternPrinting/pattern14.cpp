#include<iostream>

/*

    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

using namespace std;

int main(){
    int n,temp,temp2,i,j;
    cin>>n;
    temp=n-1;
    for(i=1;i<=n;i++)
    {   
        temp2=1;
        for(j=1;j<=temp+i;j++)
        {
            if(j<=temp)
            {
                cout<<" ";
            }
            else
            {
                cout<<temp2<<" ";
                temp2+=1;
            }
        }
        temp-=1;
        cout<<endl;
    }
    return 0;
}