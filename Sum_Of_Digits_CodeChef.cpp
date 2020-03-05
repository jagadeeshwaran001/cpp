//link for the problem:-https://www.codechef.com/problems/FLOW006
#include <iostream>
using namespace std;

int main() {
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,rem;
        cin>>n;
        int sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        cout<<sum<<"\n";
    }
	return 0;
}
