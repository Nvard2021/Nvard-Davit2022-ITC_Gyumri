 #include <iostream>
 using namespace std;




    void print_arr(int arr[], int len) {
  
         for (int i = 0; i < len; i++)
            cout << arr[i] <<" ";
            cout << endl;
     }
  

   void merge(int arr[],int l,int m ,int r){

     int n1 = m - l +1;
     int n2 = r - m;
    
     int left[n1];
     int  right[n2];


       for(int i = 0; i < n1;i++)
          left[i]=arr[l +i];
        for(int j = 0;j < n2;j++)
          right[j] = arr[m+1+j];
        
         int i=0;
         int j=0;
         int k=l;
            while(i<n1 && j<n2){
              if(left[i] <= right[j]){
                  arr[k] = left[i];
                   i++;
                 }else{
                     arr[k] = right[j];
                      j++;
                   }
                  k++;
            }
          while(i < n1){
            arr[k] = left[i];
             i++;
             k++; 
          }
         while(j < n2){
          arr[k] = right[j];
           j++;
           k++;

          }
    }     

      void merge_sort(int arr[],int l,int r){
       
           if(l<r){
             int m = l+(r-1)/2;
          
             merge_sort(arr,l,m);
             merge_sort(arr,m+1,r);
             merge(arr,l,m,r);
           }
       }
  



int main(){



    int arr[] = {8, 5, 3, 7, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
   
     merge_sort(arr,0,len-1);
     print_arr(arr,len);




   return 0;
}
