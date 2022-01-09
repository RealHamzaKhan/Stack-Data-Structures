#include <iostream>

using namespace std;
class stakk
{
private:
    int *top,*temp;
    int *stk;
    int sze;
    int *len;
public:
    stakk()
    {
        top=temp=NULL;
        cout<<"ENter size of array : ";
        cin>>sze;
        stk=new int[sze];
    }
    void push()
    {
        if(top==NULL)
        {
            top=stk;
            cout<<"ENter element : ";
            cin>>*top;
            return;
        }
        len=stk+sze-1;
        if(len==top)
        {
            cout<<"Overflow";
        }
        else
        {
            top++;
            cout<<"Enter element";
            cin>>*top;
        }
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        if(top==stk)
        {
            top=NULL;
            return;
        }
        else
        {
            top--;
        }

    }
    void print()
    {

        while(top!=NULL)
        {
            cout<<*top<<"  ";
            pop();
        }

    }
};

int main()
{
    stakk s;
    int i;
    cout<<"Options : ";
    cin>>i;
    while(i!=4)
    {
        if(i==1)
        {
            s.push();
        }
        if(i==2)
        {
            s.pop();
        }
        if(i==3)
        {
            s.print();
        }
        cout<<"Options : ";
    cin>>i;
    }
}
