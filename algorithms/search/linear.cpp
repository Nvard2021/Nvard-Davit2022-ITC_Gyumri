#include <iostream>
using namespace std;






  int linear_search(int arr[],int len ,int x){


      for (int i = 0; i < len; i++)
        if (arr[i] == x)
            return arr[i];
            return -1;


 }





  int main(){

     int arr[] = {8, 5, 3, 7, 9};
     int len = sizeof(arr)/sizeof(arr[0]);

     int res= linear_search(arr,len,7);
       if(res == -1){
           cout<<"Not found"<<endl;
         }else{
         
              cout<<res<<endl;
          }


    return 0;
 }
