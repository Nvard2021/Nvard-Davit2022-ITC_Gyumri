  #include <iostream>
  using namespace std;
   
       void swap(int *x, int *y) {
          int z = *x;
          *x = *y;
          *y = z;
      }




   void print_arr(int arr[], int len) {
 
         for (int i = 0; i < len; i++)
           cout << arr[i] <<" ";
           cout << endl;
         }

     int partition (int arr[], int small, int end){
          int pivot = arr[end]; 
          int i = (small - 1); 
 
           for (int j = small; j <= end - 1; j++){
       
               if (arr[j] < pivot) {
                      i++; 
                swap(&arr[i], &arr[j]);
              }
          }
              swap(&arr[i + 1], &arr[end]);
      return (i + 1);
}
  void quick_sort(int arr[], int start, int end){
    if (start < end){
     
        int p_index = partition(arr, start, end);
 
        quick_sort(arr, start, p_index - 1);
        quick_sort(arr, p_index + 1, end);
    }
}

  int main(){

     int arr[] = {8, 5, 3, 7, 9};
     int len = sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr, 0, len - 1);
    
    print_arr(arr, len);




     return 0;
  }
