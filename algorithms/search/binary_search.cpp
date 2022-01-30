#include <iostream>
 using namespace std;



  int binary_search(int arr[],int start,int end ,int x){

  
     if(end >=start){

       int mid=(start+end)/2;
 
        if (arr[mid] == x)
           return arr[mid];

              if (arr[mid] > x)
             return binary_search(arr, start, mid - 1, x);

             return binary_search(arr, mid + 1, end, x);
     }
     return -1;
  }
 






 
 int main(){

   
      int arr[] = {1, 2, 3, 4, 5,6};
      int len = sizeof(arr)/sizeof(arr[0]);
 
      int res= binary_search(arr,0,len-1,5);
        if(res == -1){
            cout<<"Not found"<<endl;
          }else{
 
               cout<<res<<endl;
           }





    return 0;
 }
