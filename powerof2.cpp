#include <iostream>
using namespace std;
int bitscheck(int n)
{
    int c=0;
    while(n!=0)
        {
            // To check if last bit is 1 or not
            
            if(n&1)
                {
                    c++;
                    n=n>>1;
                }
            else
                {
                    n=n>>1;
                    continue;
                }
        }   
    return c;//returning number of 1's in the number in binary form
}

int main()
{
    int n[]={16,32,47};
    int size=3;
    for(int i=0;i<size;i++)
    {
        int c=bitscheck(n[i]);
        cout<<n[i]<<endl;
        // Logic:if there is only one 1 bit in the number that means the numebr is a power of 2
        if(c==1)
            cout<<"Power of 2"<<endl;
        else
            cout<<"Not a power of 2"<<endl;
    }
}
