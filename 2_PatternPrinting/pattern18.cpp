#include<iostream>

/*

*   *   *
 * * * *
  *   *

*/

using namespace std;

int main(){

    int i,j,n,laststr;
    cin>>n;
    for(i=1;i<=3;i++)
    {
        laststr=i;
        for(j=1;j<=n;j++)
        {
            if(j==laststr)
            {
                cout<<"*";
                if(i==2){
                    laststr+=2;
                        }
                else{
                    laststr+=4;
                    }
            }
            else{
                cout<<" ";
            }
            
            
            }
        cout<<endl;
    }
    return 0;
}