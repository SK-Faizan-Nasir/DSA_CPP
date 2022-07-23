#include<iostream>
/*

   *
  ***
 *****
*******
*******
 *****
  ***
   *

*/

using namespace std;

int main(){
    int i,j,space,n,count=0;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {   
        space=n-i;
        for(j=1;j<=count+i+space;j++)
        {
            if(j<=space)
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        count+=1;
        space-=1;
    }

    for(i=n;i>=1;i--)
    {   
        count-=1;
        space=n-i;
        for(j=1;j<=count+i+space;j++)
        {
            if(j<=space)
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        
        space+=1;
    }
    
    return 0;
}