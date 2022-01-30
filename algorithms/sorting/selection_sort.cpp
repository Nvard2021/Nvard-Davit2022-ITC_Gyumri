 #include <iostream>
 using namespace std;


    void swap(int *x, int *y) {
           int z = *x;
           *x = *y;
           *y = z;
       }

  
    void selection_sort(int arr[], int n){
      int  min;
 
   
     for (int i = 0; i < n-1; i++){
        
        min = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min])
            min = j;
 
        swap(&arr[min], &arr[i]);
    }
   } 
   



   void print_arr(int arr[], int len) {
  
       for (int i = 0; i < len; i++)
          cout << arr[i] <<" ";
          cout << endl;
   }

  int main(){


    int arr[] = {8, 5, 3, 7, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

      selection_sort(arr,len);
      print_arr(arr,len);

    return 0;
 }
