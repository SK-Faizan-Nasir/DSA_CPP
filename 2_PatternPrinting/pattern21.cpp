#include<iostream>
/*

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/

using namespace std;

int main(){

    int n,i,j,temp;
    cin>>n;
    temp=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=temp;j++)
        {
            cout<<j<<" ";
        }
        temp-=1;
        cout<<endl;
    }
    return 0;
}