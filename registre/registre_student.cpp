#include <iostream>
#include <string>
using namespace std;

#define MESSAGE "Add new student?"
class Student {
    
    private:
        string first_name;
        string secound_name;
        int mark;
    
    public:
    void set_student(string first_name1, string secound_name1,int mark1){
        first_name = first_name1;
        secound_name = secound_name1;
        mark = mark1;
    }
    
    string get_name(){
        return first_name;
    }

    string get_surname(){
        return secound_name;
    }

    int get_mark(){
        return mark;
    }
};
class Classroom{

    public:
    Student *students;
    void register_student(int index){
        int mark = 0;
        string first_name;
        string secound_name;
        cout << "Enter name" << endl;
        cin >> first_name;
        cout << "Enter secound name" << endl;
        cin >> secound_name;
        cout << "Enter mark" << endl;
        cin >> mark;
        students[index].set_student(first_name,secound_name, mark);
        
    }
    void print_detalis(int index){
    for (int j = 0; j < index; j++){
      cout << "FirstName - " << students[j].get_name() <<"\nSecoundName - " << students[j].get_surname() << "\nMark - " << students[j].get_mark();
    cout << endl;
        }
    }

    Classroom(int size) {
        students = new Student[size];
    }

    ~Classroom() {
        delete [] students;
    }
};

int main() {
    int mark = 0;
    int index = 0;
    string first_name;
    string secound_name;
    string answer;
    Classroom *room1 = new Classroom(13);
    do {
        room1->register_student(index);
        cout << MESSAGE << endl;
        cin >> answer;
        ++index;
    } while(answer == "YES" || answer == "Yes" || answer == "yes");
    
    room1->print_detalis(index);
    delete room1;
}
