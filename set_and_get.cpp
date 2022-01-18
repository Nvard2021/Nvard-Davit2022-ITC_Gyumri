#include <iostream>


void Set_age(int a);
int Get_age(int a);
void Set_gender(char g);
int Get_gender(char g);
void Set_marriend(char m);
int Get_marriend(char m);

struct Person {
	int age;
	char gender;
	char marriend;
};

int main(){
	int a;
	std::cout << "How old are you: ";
	std::cin >> a;
	Set_age(a);
	char g;
	std::cout << "What your gender: f/m: ";
	std::cin >> g;
	Set_gender(g);
	char m;
	std::cout << "You are married ?: yes(y)/no(n): ";
	std::cin >> m;
	Set_marriend(m);
}

void Set_age(int a){
	if (a < 0)	{
		std::cout << "Not found." << std::endl;
	}	else {
		Get_age(a);
		std::cout << "Age = " << a << std::endl;
	}
}

int Get_age(int a){
	Person firstPerson;
	firstPerson.age = a;
	return a;
}

void Set_gender(char g){
	if(g == 'f'){
		Get_gender(g);
		std::cout << "Gender = " << g << std::endl;
	} else if(g == 'm') {
		g = 'm';
		Get_gender(g);
		std::cout << "Gender = " << g << std::endl;
	} else {
		std::cout << "Not found. " << std::endl;
	}
}

int Get_gender(char g) {
	Person firstPerson;
	firstPerson.gender = g;
	return g;
}

void Set_marriend(char m) {
	if(m == 'y'){
		Get_marriend(m);
		std::cout << "Marriend = " << m << std::endl;
	} else if (m == 'n'){
		m = 'n';
		Get_marriend(m);
		std::cout << "Marriend = " << m << std::endl;
	} else {
		std::cout << "Not found. " << std::endl;
	}
}

int Get_marriend(char m){
	Person firstPerson;
	firstPerson.marriend = m;
	return m;
}
