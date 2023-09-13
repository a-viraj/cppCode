#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);//to store a sentence
    cin.ignore();//clear buffer
    int i=0,c_length=0,max_length=0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(c_length>max_length)
            {
                max_length=c_length;
            }
            c_length=0;
        }
        c_length++;

        i++;
        if(arr[i]=='\0')
        {
            break;
        }
    }
    cout<<max_length<<endl;
}