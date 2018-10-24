/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
using namespace std;

int LENGTH(const char s[])
{
    int len=0;
    while(s[len]!='\0')
        len++;
    return len;
}


int INDEX(const char T[],const char P[])
{
    int k=0,IND,c=0,l;
    int max=LENGTH(T)-LENGTH(P);

    while(k<=max)
    {
        c=0;
        for(l=0; l<LENGTH(P); l++)
        {
            if(P[l]!=T[k+l])
            {
                k++;
                break;
            }
        }
        if(l==LENGTH(P))
        {
            IND=k+1;
            return IND;
        }

    }
    IND=0;
    return IND;

}

int main()
{
    char S[50]="JOHN PAUL JONES";
    char T[50]="A THING OF BEAUTY IS A JOY FOREVER";

    cout<<"Index starts from 1, if 0 then not found"<<endl<<endl;

    cout<<"In  '"<<S<<"'"<<endl;
    cout<<"JO is at index  = "<<INDEX(S,"JO")<<endl;
    cout<<"JOY is at index = "<<INDEX(S,"JOY")<<endl;
    cout<<"JO is at index  = "<<INDEX(S,"JO")<<endl;
    cout<<"A is at index  = "<<INDEX(S,"A")<<endl;
    cout<<"A is at index  = "<<INDEX(S,"A")<<endl;
    cout<<"S is at index  = "<<INDEX(S,"THE")<<endl;

    cout<<endl;

    cout<<"In  '"<<T<<"'"<<endl;
    cout<<"JO is at index  = "<<INDEX(T,"JO")<<endl;
    cout<<"JOY is at index  = "<<INDEX(T,"JOY")<<endl;
    cout<<"JO is at index  = "<<INDEX(T,"JO")<<endl;
    cout<<"A is at index  = "<<INDEX(T,"A")<<endl;
    cout<<"A is at index  = "<<INDEX(T,"A")<<endl;
    cout<<"S is at index  = "<<INDEX(T,"THE")<<endl;

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/


