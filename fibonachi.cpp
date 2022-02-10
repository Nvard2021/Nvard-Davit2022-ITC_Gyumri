#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

void Print(int F1, int *arr);

void sumF(int F1, int *arr){
int F2 = F1;
arr[0]=0;
arr[1]=1;
	for(int i=2;i<50; i++){
	int F=arr[i-1]+arr[i-2];
	arr[i]=F;
		}
   Print(F1, arr);
}

void Print(int F1, int *arr){
		for(int i=0; i<50; i++){
				if(i == F1){
						cout << arr[i] << endl;
				}
		}
		
}


int main(){
using namespace std::chrono;
    std::chrono::time_point<std::chrono::system_clock> start, end;
	    start = std::chrono::system_clock::now();
      
int size = 50;
int arr[size];
sumF(49, arr);
    end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
  
    return 0;
}
