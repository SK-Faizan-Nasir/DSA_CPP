#include<iostream>
/*
     1 
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
*/

using namespace std;

int main(){

    int n,c,i,j,space;
    cin>>n;
    space=n;
    for(i=1;i<=n;i++)
    {
        c=1;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for (j=1;j<=i;j++)
        {
         cout<<c<<" ";
         c=c*(i-j)/j;   
         
        }
        cout<<endl;
        space-=1;
    }

    return 0;
}