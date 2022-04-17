#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
};
struct list
{
    node* head;
    node* tail;
};
void initlist(list &l)
{
    l.head = l.tail = NULL;
}
node* initnode(int x)
{
    node* p = new node;
    if (p == NULL)
    {
        cout<<"Memory is not allocated";
        return NULL;
    }
    p->next = p->prev = NULL;
    p->data = x;
    return p;
}
void addfirst(list &l , node* p)
{
    if (l.head == NULL)
    {
        l.head = l.tail = p;
    }
    else
    {
        p->next = l.head;
        l.head->prev = p;
        l.head = p;
    }
}
void addlast(list &l , node* p)
{
    if (l.head == NULL)
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p;
        p->prev = l.tail;
        l.tail = p;
    }
}
void sort(list &l)
{
    node *p = new node;
    for (node* q = l.head->next; q != NULL; q = q->next)
    {
        p = q->prev;
        while (p != NULL && p->data > q->data)
        {
            swap(p->data, q->data);
            p = p->prev;
        }
    }
}
void xuat(const list &l)
{
    node* p = new node;
    p = l.head;
    while (p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
int main()
{
    list l;
    initlist(l);
    node* p = new node;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        p = initnode(n);
        addlast(l, p);
    }
    sort(l);
    xuat(l);
}