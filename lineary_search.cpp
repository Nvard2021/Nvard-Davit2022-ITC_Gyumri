#include <iostream>

int linearSearch(int array[], int size, int searchValue){
     for(int i = 0; i < size; i++){
        if(searchValue == array[i]){
            return i;
  
        }
 

    }
        return -1;

}

int main(){
    int a[]= {15, 23, 7, 45, 87,16};
    int userValue;
   std::cout << "Enter an integer: " << std::endl;
   std::cin >> userValue;
   int result = linearSearch(a, 6, userValue);
   if(result >=0){
     std::cout << "The number "<< a[result] << "was found at the element with index"<< result << std::endl;
     

   }else {

   std::cout << "The number" << userValue << "was not found element "<<std::endl;


   }


return 0;

}
