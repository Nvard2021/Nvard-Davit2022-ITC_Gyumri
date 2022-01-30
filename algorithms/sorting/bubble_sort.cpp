 #include <iostream>
 using namespace std;

    void swap(int *x, int *y) { 
        int z = *x; 
        *x = *y; 
        *y = z; 
    }
  
   void bubble_sort(int arr[], int n) { 
    
    for (int i = 0; i < n-1; i++)     
      
   
    for (int j = 0; j < n-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 


  void print_arr(int arr[], int len) { 
     
    for (int i = 0; i < len; i++) 
      cout << arr[i] <<" ";
      cout << endl; 
} 



int main (){

  int arr[] = {8, 5, 3, 7, 9}; 
  int len = sizeof(arr)/sizeof(arr[0]); 
 
   bubble_sort(arr ,len);
   print_arr(arr ,len);


  return 0;
}
