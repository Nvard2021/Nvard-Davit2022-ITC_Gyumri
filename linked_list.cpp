#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class list
{
private:
    node *node1,*node2;
public:
    list()
    {
        node1 = NULL;
        node2 = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(node1 == NULL)
        {
            node1 = tmp;
            node2 = tmp;
        }
        else
        {
            node2->next = tmp;
            node1 = node2->next;
        }
    }
};

int main()
{
    list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}

