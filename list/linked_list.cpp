#include <iostream>
#include <string>

using namespace std;
#define MESSAGE "add new node?"
struct Node
{
    int data;
    Node *next;
};

class List
{
private:
    Node *head;

public:
    List()
    {
        head = NULL;
    }

    void addNewNodeHead(string answer, int index){
        do {
            cout << MESSAGE << endl;
            cin >> answer;
            if(answer == "YES" || answer == "Yes" || answer == "yes"){
                cout << "Enter number" << endl;
                cin >> index;
                addNodeToHead(index);
                }
        } while (answer == "YES" || answer == "Yes" || answer == "yes");
    }

    void addNewNodeTail(string answer, int index){
        do {
            cout << MESSAGE << endl;
            cin >> answer;
            if(answer == "YES" || answer == "Yes" || answer == "yes"){
                cout << "Enter number" << endl;
                cin >> index;
                addNodeToTail(index);
            }
        } while (answer == "YES" || answer == "Yes" || answer == "yes");
    }

    void addNodeToHead(int d)
    {
        Node *nd = new Node();

        nd->data = d;
        nd->next = head;
        head = nd;
    }

    void addNodeToTail(int d) {
    Node* newNode = new Node();

    newNode->data = d;
    newNode->next = NULL; 
  
    if(head == NULL) {
        head = newNode;
    } else {
    
    Node* temp = head;
    while(temp->next != NULL){
      temp = temp->next;
            }
    temp->next = newNode;
        }    

    }

    void addNode(int data, int position) { 
        Node* node = new Node();
    
        Node* temp = head;

        for(int i = 0; i < position; i++){
            temp = temp->next;
        }
        node->data = data;
        node->next = temp->next;
        temp->next = node;

} 

    void deleteFromHead() {
        Node* temp = head;
        head = head->next;
        delete temp;

        }

    void deleteFomTail() { 
        Node* temp = head;
        Node *prev = NULL;
        while(temp && temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        
        prev->next = NULL;
        std::cout << temp->data;
        delete temp;
    }

    void delete_nt(int position) {
            Node* temp = head;
            Node *prev = NULL;
            for(int i = 0; position >= i; i++){
                prev = temp;
                temp = temp->next;
            }

            prev->next = temp->next;
            delete temp;
    }

    void printList()
    {
        Node *current = head;

        while(current)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main()
{
    int data;  
    int index;
    int position;
    string answer;
    string quation = "Yes";
    int result;
    List ls;
    cout << "sort numbers from beginning to end write(1) or if sort from end to beginning write(2)" << endl;
    cin >> result;
    if (result == 1){
        ls.addNewNodeHead(answer, index);
    } else {
        ls.addNewNodeTail(answer, index);
    }
    while( quation != "exit"){
    ls.printList();
    cout << "Do you want to add(1) or delete(2) a node?" << endl;
    cin >> result;
    if(result == 1){
        cout << "add from the beginning(1) or end(2) or middle(3)" << endl;
        cin >> result;
        if(result == 1){
            ls.addNewNodeHead(answer, index);
        } else if (result == 2){
            ls.addNewNodeTail(answer, index);
        } else if (result == 3){
            cout << "enter data?" << endl;
            cin >> data;
            cout << "enter position?" << endl;
            cin >> position;
            ls.addNode(data, position);
            } else {
            cout << "Pleace try again" << endl; 
        }
            ls.printList();
    }else if (result == 2){
        cout << "delete from the beginning(1) or end(2) or middle(3)" << endl;
        cin >> result;
        if(result == 1){
            ls.deleteFromHead();
        } else if (result == 2){
            ls.deleteFomTail();
        } else if (result == 3){
            cout << "enter position?" << endl;
            cin >> position;
            ls.delete_nt(position);
        } else {
            cout << "Pleace try again" << endl; 
        }
            ls.printList();
    }
    cout << "Continue or exit" << endl;
    cin >> quation;
    }
    return 0;
}
