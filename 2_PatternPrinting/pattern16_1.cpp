#include<iostream>
/*

        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * * 
    * * * * *
      * * *
        *

*/

using namespace std;

int main(){
    int n,i,j,space,count=0,temp;
    cin>>n;
    
    space=n+n-2;
    temp=space+1;
    for(i=1;i<=n+n;i++)
    {   
        for(j=1;j<=temp;j++)
        {
            if(j<=space)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }

        }

        if(i==n+1)
        {
            space=0;
        }
        if(i<=n)
        {
            temp=count+i+space;
            count+=1;
            space-=2;
        }
        else{
            temp=n+n-1;
            space+=2;
        }

        cout<<endl;
    }    
    return 0;
}