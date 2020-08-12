#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;

    int petak[n][m]; 
    petak[0][0] = 1;
    
    // intit baris pertama
    for(j=1; j<=m-1; j++) {
    	petak[0][j] = 1;
	}
	
	
        
    //init kolom pertama
    for(i=1; i<=n-1; i++) {
    	petak[i][0] = 1;	
	}
        
    
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=m-1; j++)
        {
            petak[i][j] = petak[i-1][j] + petak[i][j-1];
        }
    }

    cout<<petak[n-1][m-1]<<"\n";

}
