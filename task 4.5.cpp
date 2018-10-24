/* Program run and tested on codeblocks 17.12  */


/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
#include<cstdlib>
using namespace std;

void INSERT(int ITEM);
void DELETE(void);

char QUEUE[100];
int FRONT;
int REAR,n=50;

void INSERT(int ITEM)
{
    if((FRONT==1 && REAR==n) || FRONT==REAR+1)
    {
        cout<<"OVERFLOW"<<endl;
        exit(1);
    }

    if(FRONT==0)
    {
        FRONT=1;
        REAR=1;
    }
    else if(REAR==n)
        REAR=1;
    else
        REAR=REAR+1;

    QUEUE[REAR]=ITEM;

}

void DELETE(void)
{
    int ITEM;
    if(FRONT==0)
    {
        cout<<"UNDERFLOW"<<endl;
        exit(1);
    }

    ITEM=QUEUE[FRONT];

    if(FRONT==REAR)
    {
        FRONT=0;
        REAR=0;
    }
    else if(FRONT==n)
        FRONT=1;
    else
        FRONT=FRONT+1;
}

/* Name: Hasanul Bari
   student id: 1702065
*/


int main()
{
    INSERT('A');
    INSERT('B');
    INSERT('C');

    cout<<"(i) insert A, B, and C  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(ii) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    INSERT('D');
    INSERT('E');

    cout<<"(iii) insert D, E  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(iv) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(v) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    INSERT('F');

    cout<<"(vi) insert F  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(vii) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    INSERT('G');
    INSERT('H');

    cout<<"(viii) insert G, H  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(ix) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(x) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    INSERT('K');

    cout<<"(xi) insert K  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(xii) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(xiii) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    DELETE();

    cout<<"(xiv) delete  :  ";
    for(int i=FRONT; i<=REAR; i++)
        cout<<QUEUE[i]<<" ";
    cout<<endl;


    return 0;
}

/* Name: Hasanul Bari
   student id: 1702065
*/

