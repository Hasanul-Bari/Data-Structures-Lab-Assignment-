/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
using namespace std;

int LENGTH(const char s[]);
int INDEX(const char T[],const char P[]);
void SUBSTRING(const char s[],int k, int l);
void INSERT(const char T[],int k, const char S[]);
void DELETE(const char T[],int k, int l);
void REPLACE (const char T[], const char p1[], const char p2[] );


char temp[20],result[20],newtext[20];



int LENGTH(const char s[])
{
    int len=0;
    while(s[len]!='\0')
        len++;
    return len;
}


void  SUBSTRING(const char s[],int k, int l)
{
    for(int i=0,j=k; i<l; i++,j++)
    {
        temp[i]=s[j];
    }
    temp[l]='\0';
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



void DELETE(const char T[],int k, int l)
{
    int i=0, j=0;
    SUBSTRING(T,0,k-1);
    while(temp[j]!='\0')
    {
        result[i]=temp[j];
        i++;
        j++;
    }



    SUBSTRING(T,k+l-1,LENGTH(T)-k-l+1);
    j=0;
    while(temp[j]!='\0')
    {
        result[i]=temp[j];
        i++;
        j++;
    }
    result[i]='\0';


}


void INSERT(const char T[],int k, const char S[])
{
    int i=0, j=0;
    SUBSTRING(T,0,k-1);
    while(temp[j]!='\0')
    {
        newtext[i]=temp[j];
        i++;
        j++;
    }

    j=0;
    while(S[j]!='\0')
    {
        newtext[i]=S[j];
        i++;
        j++;
    }


    SUBSTRING(T,k-1,LENGTH(T)-k+1);
    j=0;
    while(temp[j]!='\0')
    {
        newtext[i]=temp[j];
        i++;
        j++;
    }
    newtext[i]='\0';
}




void REPLACE (const char T[], const char p1[], const char p2[] )
{
    int k=INDEX(T,p1);
    if(k==0)
        cout<<"Patten is not found in the text"<<endl;
    else
    {
        DELETE(T,k,LENGTH(p1));
        INSERT(result,k,p2);
    }

}

/* Name: Hasanul Bari
   student id: 1702065
*/

int main()
{
    DELETE("AAABBB",2,2);
    cout<<result<<endl;

    DELETE("JOHN PAUL JONES",6,5);
    cout<<result<<endl;



    REPLACE("AAABBB","AA","BB");
    cout<<newtext<<endl;

    REPLACE("JOHN PAUL JONES", "PAUL", "DAVID");
    cout<<newtext<<endl;

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/

