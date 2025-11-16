# include <iostream>
using namespace std;
int main()
{
    int n,value, reversed=0;
    cout << "Enter the number :..";
    cin>>n;
    while (n!=0)
    {
        value=n%10;
        reversed=reversed*10+value;
        n=n/10;
    }
    cout<<"Reversed number:"<<reversed<<endl;
    return 0;

}