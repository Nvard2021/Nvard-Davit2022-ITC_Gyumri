#include <iostream>

int func_arr(int arr[2][3]);
int print_func_arr(int arr[2][3]);
int max_el_func_arr(int arr[3]);
int sum_el_func_arr(int arr[3]);

int main(){
        int arr[2][3];
        int i, j;
        std::cout << "Enter 6 number for array: " << std::endl;
        func_arr(arr);
        std::cout << std::endl << "2D array" << std::endl;
        print_func_arr(arr);
     	 	std::cout << "Max number" << std::endl;
        int max1 = max_el_func_arr(arr[0]);
        int max2 = max_el_func_arr(arr[1]);
        std::cout << "Max number of Line 1 = " << max1 << std::endl;
        std::cout << "Max number of Line 2 = " << max2 << std::endl;
        std::cout << std::endl << "Sum of lines" << std::endl;
        int result = sum_el_func_arr(arr[0]);
        int result1 = sum_el_func_arr(arr[1]);
        std::cout << "Sum of Line 1 = " << result << std::endl;
        std::cout << "Sum of LIne 2 = " << result1 << std::endl;
        return 0;
}

int func_arr(int arr[2][3]){
        for (int i = 0; i < 2; i++){
                for (int j = 0; j < 3; j++){
                        std::cin >> arr[i][j];
                }
        }
		return 0;
}

int print_func_arr(int arr[2][3]){
        for (int i = 0; i < 2; i++){
                for (int j = 0; j < 3; j++)
        std::cout << arr[i][j];
       	std::cout << std::endl;
        }
       	std::cout << std::endl;
				return 0;
}

int max_el_func_arr(int arr[3]){
        int max = arr[0];
        for(int i=1; i<3; i++){
                if(max<arr[i]){
                        max=arr[i];
                }
        }
        return max;
}

int sum_el_func_arr(int arr[3]){
        int result = arr[0];
        for (int i=1; i<3; i++){
                result = result + arr[i];
        }
        return result;
} 
