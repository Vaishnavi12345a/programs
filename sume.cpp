#include<iostream>
using namespace std;
int main()
{

   int i=2,n,sum=0;
   cout<<"enter n"<<endl;
   cin>>n;

while(i<=n)
{
   if(i%2==0)
{
   sum=sum+i;
}
i=i+1;
}
cout<<sum<<endl;
}

