#include<iostream>
using namespace std;

struct node
{
    int data ;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }

};

class queue
{
    private:
    node *front,*rear;
    int size;

    public:
    queue()
    {
        front=rear=NULL;
        size=0;
    }

    void enQueue(int x)
    {
        node *temp=new node(x);
        if(rear==NULL)
        {
            front=rear=temp;
            size++;
            return;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }

    void deQueue()
    {
        if(front==NULL)
        {
            return;
        }
        node *temp=front;
        front=front->next;
        if(front==NULL)
        {
             front=rear=NULL;
        }
        delete temp;
        size--;
    }

    int count()
    {
        return size;
    }

    void display()
    {
        node *curr=front;
        while(curr!=NULL)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
};

int main(void)
{
    queue q;
    q.enQueue(12);
    q.enQueue(15);
    q.enQueue(14);
    q.display();
    cout<<q.count()<<endl;
    q.display();
}