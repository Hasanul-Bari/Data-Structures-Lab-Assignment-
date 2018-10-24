/* Program run and tested on codeblocks 17.12  */

/* Name: Hasanul Bari
   student id: 1702065
*/


#include<iostream>
using namespace std;

int main()
{
    int DATA[13]={11,22,30,33,40,44,55,60,66,77,80,88,99};
    int n=13;

    int item, beg=0, end=12;
    cout<<"Enter the ITEM you want to search = ";
    cin>>item;

    int mid=(int)(beg+end)/2;
    while(beg<=end)
    {
        if(item<DATA[mid])
            end=mid-1;

        else
            beg=mid+1;

        mid=(int)(beg+end)/2;
    }

    if(DATA[mid]==item)
        cout<<"ITEM found at index(index starts from 1) = "<<mid+1<<endl;

    else
        cout<<"ITEM not found"<<endl;

    return 0;

}

/* Name: Hasanul Bari
   student id: 1702065
*/
