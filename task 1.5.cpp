/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
using namespace std;

int LENGTH(const char s[]);
int pattern_matching(const char P[],const char T[]);

int LENGTH(const char s[])
{
    int len=0;
    while(s[len]!='\0')
        len++;
    return len;
}


int pattern_matching(const char P[],const char T[])
{
    int k=0,INDEX,c=0,l;
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
            INDEX=k+1;
            return INDEX;
        }

    }
    INDEX=0;
    return INDEX;

}


int main()
{

    char P[50]="abc";
    char T[50]="ababababab";
    cout<<"Pattern is at index (index starts from 1, if 0 then not found) = "<<pattern_matching(P,T)<<endl;;


    char P1[50]="aaa";
    char T1[50]="abaabbaaabbbaaaabbbb";
    cout<<"Pattern is at index (index starts from 1, if 0 then not found) = "<<pattern_matching(P1,T1)<<endl;

    return 0;
}

/* Name: Hasanul Bari
   student id: 1702065
*/
