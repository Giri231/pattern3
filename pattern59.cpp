#include<iostream>

using namespace std;

int main()

{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--){
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}
