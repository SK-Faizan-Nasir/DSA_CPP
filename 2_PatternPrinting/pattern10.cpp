#include<iostream>

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if( (i%2==0 and j%2!=0) || (i%2!=0 and j%2==0) )
            {
                cout<<"0 ";
            }
            else
            {
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}