#include<iostream>

using namespace std;

template<typename T>

class vector{
	T* array;
	int total;
	int stored;
	
	public:
	vector(){
		array = new T[1];
		total = 1;
		stored = 0;	
	}

	void add(T element){
		if(total == stored){
			T* array1 = new T[total * 2];

			for(int i = 0; i < total; i++){
				array1[i] = array[i];
			}

			delete[] array;
			total *= 2;
	        	array = array1;	
		}

		array[stored] = element;
		stored++;
	}

	void print(){
		for(int i = 0; i < stored; i++){
			cout << array[i] << " ";
		}
		cout << "\n";
	}
};

int main(){

	vector<int> vectObj;

	vectObj.add(5);
	vectObj.add(3);
	vectObj.add(7);

	vectObj.print();

	return 0;
}
