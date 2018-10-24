/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/


#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;

void push(int  ITEM);
int pop(void);

int STACK[100];
int maxstk=90;
int top;

void push(int  ITEM)
{
    if(top==maxstk)
    {
        cout<<"OVERFLOW"<<endl;
        exit(1);
    }
    top=top+1;
    STACK[top]=ITEM;

}
int pop(void)
{
    int  ITEM;
    if(top==maxstk)
    {
        cout<<"UNDERFLOW"<<endl;
        exit(1);
    }
    ITEM=STACK[top];
    top=top-1;

    return ITEM;

}

/* Name: Hasanul Bari
   student id: 1702065
*/



int main()
{
    string s="5,6,2,+,*,12,4,/,- ";
    cout<<"The postfix expression : "<<s<<endl;

    s=s+")";                                    /*  ')' acts as sentinel  */

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ' || s[i]==',')
            continue;

        else if(isdigit(s[i]))
        {
            int num=0;

            while(isdigit(s[i]))
            {
                num=num*10 + (s[i]-'0');
                i++;
            }
            i--;
            push(num);


        }

        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            int a=pop();
            int b=pop();
            int c;

            if(s[i]=='+')
                c=b+a;
            else if(s[i]=='-')
                c=b-a;
            else if(s[i]=='*')
                c=b*a;
            else if(s[i]=='/')
                c=b/a;

            push(c);

        }
        else if(s[i]==')')           /*  ')' acts as sentinel  */
            break;
    }

    int value=pop();
    cout<<"VALUE = "<<value<<endl;

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/

