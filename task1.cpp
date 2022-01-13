#include <iostream>
#include <string>
using namespace std;

int minimum_func(int [],int);
int maximum_func(int [],int);

int main(){
	int minimum[3] = {1,8,6};
	int maximum[3] = {1,8,6};
	int size = sizeof(minimum)/sizeof(int);
	string answer;
	cout << "Enter min or max" << endl;
	cin >> answer;
	if (answer == "min" || answer == "Min" || answer == "MIN"){
	cout << minimum_func(minimum, size) << endl;
	}
	else if (answer == "max" || answer == "Max" || answer == "MAX"){ 
	cout << maximum_func(maximum, size) << endl;
	}
	else{
	cout << "Pls try again:" << endl;
	}
}

int minimum_func(int minimum[], int size){
	int min = minimum[0];
	for (int i = 0; i < size; i++){
		if(min > minimum[i]){
			min = minimum[i];
		}
	}
	return min;
}


int maximum_func(int maximum[], int size){
	int max = maximum[0];
	for (int i = 0; i < size; i++){
		if(max < maximum[i]){
			max = maximum[i];
		}
	}
	return max;
}
