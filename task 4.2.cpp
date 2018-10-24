/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/


#include<iostream>
using namespace std;

long long FACTORIAL(long long FACT, long long N);

long long FACTORIAL(long long FACT, long long N)
{
    if(N==0)
        return FACT;

    FACT=FACTORIAL(FACT,N-1);
    FACT=N*FACT;
    return FACT;

}


int main()
{
    long long n,F=1;
    cout<<"Enter a number : ";
    cin>>n;
    F=FACTORIAL(F,n);
    cout<<"The factorial of "<<n<<" is = "<<F<<endl;

    return 0;
}

/* Name: Hasanul Bari
   student id: 1702065
*/

