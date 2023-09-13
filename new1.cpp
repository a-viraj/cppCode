#include<iostream>
using namespace std;
int mcm(int arr[],int n)
{
    int m[n][n];
    for(int i=1;i<n;i++){
        m[i][i]=0;
    }
    for(int l=2;l<n;l++)
    {
        for(int i=1;i<n-l+1;i++)
        {
            int j=i+l-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<j;k++)
            {
                int t=m[i][k]+m[k+1][j]+arr[i-1]*arr[j]*arr[k];
                m[i][j]=min(m[i][j],t);
            }
        }
    }
    return m[1][n-1];
}
int main(){
int arr[] = {1, 2, 3, 4};
   int size = 4;
   cout << "Minimum number of matrix multiplications: " << mcm(arr, size);

}