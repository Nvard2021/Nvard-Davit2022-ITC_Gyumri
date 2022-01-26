#include <iostream>
using namespace std;
void input_elements(int arr[], int size){
	for (int i = 0; i < size; i++){
		cout << "Enter namber for " << "index " << i << " : ";
		cin >> arr[i];
	}
	
	for (int j = 0; j < size; j++){
		cout << "index " << j << " : " << arr[j] << endl;
	}

}
int main(){
int arr[5];
int size = sizeof (arr)/sizeof(int);
input_elements(arr,size);


}
