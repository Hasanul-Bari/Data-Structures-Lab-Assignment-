/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
using namespace std;
int FIBONACCI(int FIB,int N);

int FIBONACCI(int FIB,int N)
{
    if(N==0 || N==1)
    {
        FIB=N;
        return FIB;
    }

    int FIBA=FIBONACCI(FIBA,N-2);
    int FIBB=FIBONACCI(FIBB,N-1);
    FIB=FIBA+FIBB;
    return FIB;



}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int F=FIBONACCI(F,n);
    cout<<"The "<<n<<" th number in Fibonacci sequence is = "<<F<<endl;
}

/* Name: Hasanul Bari
   student id: 1702065
*/

