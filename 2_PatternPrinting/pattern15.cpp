#include<iostream>
/*

    1
   212
  32123
 4321234
543212345

*/

using namespace std;

int main(){
    int n,i,j,space,value;

    cin>>n;
    space=n-1;
    for(i=0;i<n;i++)
    {
        value=i+1;
        for(j=1;j<=i+n;j++)
        {
            if(j<=space)
            {
                cout<<"  ";
            }
            else
            {
                
                if (j==n)
                {
                    value=1;
                    cout<<value<<" ";
                }
                else if(j<n)
                {
                    cout<<value<<" ";
                    value-=1;
                }
                else if(j>n)
                {
                    
                    value+=1;
                    cout<<value<<" ";
                }
                
            }
        }
        cout<<endl;
        space-=1;
    }
    
    return 0;
}