/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
using namespace std;

int main()
{

    char s[7]="PEOPLE";
    int n=6,C=0,D=0;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if((int)s[j+1]<(int)s[j])
            {
                swap(s[j+1],s[j]);
                D++;
            }
            C++;
        }
    }



    cout<<"The sorted  sequence"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<"  ";
    }

    cout<<endl<<"Number of comparisons  C = "<<C<<endl;
    cout<<"Number of interchanges  D = "<<D<<endl;

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/

