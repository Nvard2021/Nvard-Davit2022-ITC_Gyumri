#include <iostream>

void set_age(int a);
void get_age(int a);
void set_gender(char g);
void get_gender(char g);
void set_married(char m);
void get_married(char m);

struct Person{
    int age;
    char gender;
    char married;
};

int main(){
    int a;
    char g;
    char m;
    std::cout << "Enter your age" << std::endl;
    std::cin >> a;
    set_age(a);
    std::cout << "Enter your gender(f or m)" << std::endl;
    std::cin >> g;
    set_gender(g);
    std::cout << "Enter your status, married or not(y or n)" << std::endl;
    std::cin >> m;
    set_married(m);

}

void set_age(int a){
    if (a < 0){
        std::cout << "Not found" << std::endl;
    }else{
        get_age(a);
    }
}
void get_age(int a){
    Person first;
    first.age = a;
    std::cout << "Age = " << first.age << std::endl;
}
void set_gender(char g){
	if(g == 'f' || g == 'm'){
        	get_gender(g);
        }else{
                std::cout << "Not found" << std::endl;
       }	
}

void get_gender(char g){
	Person second;
	second.gender = g;
	std::cout << "Gender = " << second.gender << std::endl;
}

void set_married(char m){
	if(m == 'n' || m == 'y'){
        	get_married(m);
        }else{
                std::cout << "Not found" << std::endl;
       }	
}

void get_married(char m){
	Person third;
	third.married = m;
	std::cout << "Married = " << third.married << std::endl;
}
