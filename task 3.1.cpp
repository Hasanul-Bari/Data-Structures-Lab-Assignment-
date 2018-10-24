/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int INSERT (int item);
int SEARCH(int item);
void DELETE(int item);
void clear_screen(void);


class node
{
public:
    int data;
    node *next;
};


node *start,*avail;


int INSERT (int item)
{
    if(avail==NULL)
    {
        cout<<"OVERFLOW"<<endl;
        return -1;
    }


    node *new_node=avail;
    avail=avail->next;

    new_node->data=item;
    new_node->next=start;

    start=new_node;
    return 0;

}

int SEARCH(int item)
{
    int c=1;

    node *temp=start;
    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            return c;
        }
        else
        {
            c++;
            temp=temp->next;
        }
    }
    return -1;
}

void DELETE(int item)
{
    node *prev;
    node *temp=start;

    if(temp->data==item)
    {
        start=temp->next;
        delete(temp);
        cout<<"Delete successful"<<endl;
        return;

    }
    while(temp!=NULL  &&  temp->data!=item)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        cout<<"Can't delete, Item is not in the list"<<endl;
        return;
    }

    else
    {
        prev->next=temp->next;
        cout<<"Delete successful"<<endl;
        delete temp;
    }
}

void clear_screen(void)
{
    cout<<"\n\npress any key to clear the screen";
    getch();
    system("cls");
}

/* Name: Hasanul Bari
   student id: 1702065
*/

int main()
{
    node *temp,*save;

    start=avail=NULL;

    for(int i=0; i<10; i++)
    {
        temp=new node;

        if(i==1)
            avail=temp;
        else
            save->next=temp;

        save=temp;
    }

    int x;
    do
    {
        cout<<"Menu options"<<endl;
        cout<<"\n0.Exit";
        cout<<"\n1.Insert an item in the list(item inserts at first)";
        cout<<"\n2.Find an item in the list";
        cout<<"\n3.Delete an item from the list";
        cout<<"\n4.Display all items";

        cout<<endl<<endl<<"Enter your option..."<<endl;

        cin>>x;

        switch(x)
        {
        case 0:
            break;
        case 1:
        {
            int n;
            cout<<endl<<"Enter an item : ";
            cin>>n;
            if(INSERT(n)==0)
                cout<<"Insert successful"<<endl;
            else
                cout<<"Insert failed"<<endl;

            clear_screen();

            break;
        }


        case 2:
        {
            int p;
            cout<<endl<<"Enter the item you want to find : ";
            cin>>p;

            if(SEARCH(p)==-1)
                cout<<"Item not found"<<endl;
            else
                cout<<"Item found at position "<<SEARCH(p)<<endl;

            clear_screen();

            break;
        }
        case 3:
        {

            int q;
            cout<<endl<<"Enter the item you want to delete : ";
            cin>>q;
            DELETE(q);

            clear_screen();
            break;
        }
        case 4:
        {
            //DISPLAY();
            temp=start;
            cout<<"The list : ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;

            }
            clear_screen();
            break;
        }

        default:
        {
            cout<<endl<<"Error in input; try again"<<endl;
            clear_screen();
        }
        }

    }
    while(x!=0);

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/

