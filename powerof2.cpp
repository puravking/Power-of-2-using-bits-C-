#include <iostream>
using namespace std;
int bitscheck(int n)
{
    int c=0;
    while(n!=0)
        {
            
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
    return c;
}

int main()
{
    int n[]={16,32,47};
    int size=3;
    for(int i=0;i<size;i++)
    {
        int c=bitscheck(n[i]);
        cout<<n[i]<<endl;
        if(c==1)
            cout<<"Power of 2"<<endl;
        else
            cout<<"Not a power of 2"<<endl;
    }
}
