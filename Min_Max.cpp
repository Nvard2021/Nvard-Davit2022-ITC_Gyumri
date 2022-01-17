#include <iostream>

int func_arr(int arr[5]);
int max_el_func_arr(int arr[5]);
int min_el_func_arr(int arr[5]);

int main(){
        int arr[5];
        int i;
        std::cout << "Enter 5 number for array: " << std::endl;
        func_arr(arr);
        int max = max_el_func_arr(arr);
        std::cout << "Max number: " << max << std::endl;
        int min = min_el_func_arr(arr);
        std::cout << "Min number: " << min << std::endl;
        return 0;
}

int func_arr(int arr[5]){
        for (int i = 0; i < 5; i++){
        	std::cin >> arr[i];
        }
}

int max_el_func_arr(int arr[5]){
        int max = arr[0];
        	for(int i=1; i<5; i++){
                	if(max<arr[i]){
                        	max=arr[i];
                	}
        	}
        return max;
}

int min_el_func_arr(int arr[5]){
        int min = arr[0];
        	for(int i=1; i<5; i++){
                	if(min>arr[i]){
                        	min=arr[i];
                	}
        	}
        return min;
}

