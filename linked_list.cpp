#include <iostream>

struct Node { 
	int data;
	Node *next;
};

class List {
	private:
	Node* head;
	public:
	List() {
		head = NULL;
	}

	void add_node_head(int d){
		Node* node = new Node();
		
		node->data = d;
		node->next = NULL;
		if (head == NULL) {
			head = node;
		} else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = node;
		}
	}
	
	void delete_node(){
		Node* temp =  head;
		head = head->next;
		delete temp;
		//temp = head->next;
	}
	
	void print_list () {
		Node* current = head;
		while (current != NULL){
			std::cout << current->data << std::endl;
			current = current->next;
		}
	}
};

int main(){
	int d;
	List ls;
	ls.add_node_head(1);
	ls.add_node_head(2);
	ls.add_node_head(4);
	ls.add_node_head(8);
	ls.add_node_head(6);
	ls.add_node_head(9);
	ls.add_node_head(3);
	std::cout << "Add node " << std::endl;
	ls.print_list();
	ls.delete_node();
	std::cout << "Delete node " << std::endl;
	ls.print_list();
}
