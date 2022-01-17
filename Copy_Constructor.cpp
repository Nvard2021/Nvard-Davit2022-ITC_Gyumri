#include <iostream>
#include <string.h>

class Person {
	public:
		int age;
		char *name;
		
		Person(int age, char *name){
			this->age = age;
			this->name = new char(strlen(name) + 1);
			strcpy(this->name, name);
		}

		void change_name(char *new_name){
			delete [] this->name;
			this->name = new char(strlen(new_name) + 1);
			strcpy(this->name, new_name);
		}
	
		Person (Person &other_person) {
			this->age = other_person.age;
			this->name = new char(strlen(other_person.name) + 1);
			strcpy(this->name, other_person.name);
		}
};

int main() {
	Person a(18, "ggg");
	Person b = a;
	std::cout << "a = " << a.name << std::endl;
	std::cout << "b = " << b.name << std::endl;
	std::cout << "====Copy constructor====" << std::endl;
	b.change_name("GGG");
	std::cout << "a = " << a.name << std::endl;
	std::cout << "b = " << b.name << std::endl;
}
