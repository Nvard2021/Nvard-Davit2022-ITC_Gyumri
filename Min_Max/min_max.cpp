#include <iostream>
#include <string>
using namespace std;

int max_value(int arr[8], int size ){
	int max;
    max = arr[0];
    for(int i=1;i < size;i++)
	{
		if(arr[i]>max){
			max = arr[i];
        }
    }
    return max;
}

int min_value(int arr[8], int size){
    int min;
    min = arr[0];
	for(int i=1;i < size;i++)
	{
		if(arr[i] < min){
			min = arr[i];
        }
    }
    return min;
}

void print_element(int arr[8], int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << std::endl;
    }
}

int main(){
    int arr[] ={ 1, 2, 3, 5, 8, 9, 10, 52};
    string quation;
    cout << "Max or Min" << endl;
    cin >> quation;
    int size = sizeof(arr)/sizeof(int);
    if(quation == "max" || quation == "Max" || quation == "MAX")
    {
        int max = max_value(arr, size); 
	    std::cout << "Element is : \n";
        print_element(arr, size);
	    std::cout << "Max element is : " << max << std::endl;
    } else if (quation == "min" || quation == "Min" || quation == "MIN")
    {
        int min = min_value(arr, size);
	    std::cout << "Element is :\n";
        print_element(arr, size);
	    std::cout << "Min element is : " << min << std::endl;
    } else {
        cout << "Wrong: Pleace try again" << endl;
    }
}
