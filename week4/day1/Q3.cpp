#include <iostream>
using namespace std;
int sumArr(int ram[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=ram[i];
    }
    return sum;
}
int main ()
{
    int n;
    cout <<"Enter the element :\n";
    cin>>n;
    int ram[n];
    cout <<"enter..."<<n<<"......element:\n ";
    for (int i=0;i<n;i++)
    {
        cin>>ram[i];
    }
    int total=sumArr(ram,n);
    cout<<"Total sum="<<total;
    return 0;
}