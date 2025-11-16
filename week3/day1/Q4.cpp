# include <iostream>
using namespace std;
int main()
{
    int n,num=0;
    cout <<"Enter the value:  ";
    cin>>n;
    do
    {
        n=n/10;
        num ++;
    } while (n!=0);
    cout <<"Number of the digit in value is: "<<num<<endl;
    return 0;
}