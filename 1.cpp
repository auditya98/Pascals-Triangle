/*
Program
---------------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
	        arr[i][j]=0;
	    }
	}
	arr[0][0]=1;
	for(i=1;i<10;i++)
	{
	    //printf("i am in i in %d ,",i);
	    arr[i][0]=1;
	    for(j=1;j<i+1;j++)
	    {
	        //printf("i am in j in %d ,",j);
	        arr[i][j]=(arr[i-1][j-1]+arr[i-1][j]);
	        //printf(" \n%d\n",arr[i-1][j-1]);
	    }
	    //printf("\n");
	}
	//printf("i am out of loop,\n");
cout<<arr[8][3];
}
