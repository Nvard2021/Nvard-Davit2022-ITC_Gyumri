#include <iostream>
using namespace std;
int main(){
	int arr[5], i, max, min;
	int count = sizeof(arr)/sizeof(arr[0]);
	cout << "Enter array elements: ";

	for(i=0; i<count; i++){
		cin >>arr[i];
	}

	max = arr[0];
	for(i=0; i<count; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}

	min = arr[0];
        for(i=0; i<count; i++){
                if(min>arr[i]){
                        min = arr[i];
                }
        }

	cout<< "The max element in array is: " << max <<"\n";
	cout<< "The min element in array is: " << min <<"\n";

	return 0;
}
