#include <iostream>

struct Node{
	int date;
	Node *next;
};

class List {
	private:
		Node* head;
	public:
		List(){
			head = NULL;
		}

	void add_node_head(int date){
		Node* node = new Node();

		node->date = date;
		node->next = NULL;

		if(head == NULL){
			head = node;
		} else {
			Node* temp = head;

			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = node;
		}
	}

	void delete_node(){
		Node *temp = head;
		head = head->next;
		delete temp;
	}
	void delete_position(int d, int position){
		Node *temp = head;
		Node *node = new Node();
		for(int i = 0; i < position; i++){
			node->next = temp->next;
			temp->next = node;
		}
	}

	void print_List(){
		Node* current = head;

		while(current){
				std::cout << current->date << std::endl;
				current = current->next;
		}
	}

	
	~List(){
		while(head != NULL){
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};

int main() {
	int date;
	int position;
	std::cout << "===List===\n";
	List ls;	
	ls.add_node_head(15);
	ls.add_node_head(5);
	ls.add_node_head(6);
	ls.add_node_head(8);
	ls.print_List();
	std::cout << "===Delete node===\n" << std::endl;
	ls.delete_node();
	ls.print_List();
	ls.~List();
	return 0;
}


