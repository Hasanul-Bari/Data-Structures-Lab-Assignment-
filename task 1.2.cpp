/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/


#include<iostream>
using namespace std;

int length(const char s[]);
void  SUBSTRING(const char s[],int k, int l);
void INSERT(const char T[],int k, const char S[]);


char temp[20],result[20];


void  SUBSTRING(const char s[],int k, int l)         //function to acquire the required substring
{
    for(int i=0,j=k; i<l; i++,j++)
    {
        temp[i]=s[j];
    }
    temp[l]='\0';
}

int length(const char s[])      //function to acquire the length of a string
{
    int len=0;
    while(s[len]!='\0')
        len++;
    return len;
}

void INSERT(const char T[],int k, const char S[])
{
    int i=0, j=0;
    SUBSTRING(T,0,k-1);
    while(temp[j]!='\0')
    {
        result[i]=temp[j];
        i++;
        j++;
    }

    j=0;
    while(S[j]!='\0')
    {
        result[i]=S[j];
        i++;
        j++;
    }


    SUBSTRING(T,k-1,length(T)-k+1);
    j=0;
    while(temp[j]!='\0')
    {
        result[i]=temp[j];
        i++;
        j++;
    }
    result[i]='\0';


    cout<<result<<endl;
}

int main()
{
    INSERT("AAAAA",1,"BBB");
    INSERT("AAAAA",3,"BBB");
    INSERT("AAAAA",6,"BBB");

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/

