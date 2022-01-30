 #include <iostream>
 using namespace std;


   void insertion_sort(int arr[], int len){
    int  k;
    int j;
    for (int i = 1; i < len; i++) {
        k = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
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

       insertion_sort(arr,len);
       print_arr(arr,len);


      return 0;
  }
