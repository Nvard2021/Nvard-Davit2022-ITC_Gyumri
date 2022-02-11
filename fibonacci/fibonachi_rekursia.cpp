#include <iostream>
#include <chrono>
#include <ctime>


using namespace std;
int fib(int);
void fibonacci(int);

int main(){
using namespace std::chrono;
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
  cout << fib(7) <<"\n";
  fibonacci(7);
  cout <<"\n";
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";

}

int fib(int n){
  if(n < 2){
     return 1;
  } else {
     return fib(n - 1) + fib(n - 2);
  }
}


void fibonacci(int n){
  int a = 0;
  int b = 1;
  int c = b + a; 
  for(int i = 0;i< n;i++){
    cout << a <<" ";
    int k = a + b;
    a = b;
    b = k;
  }
}


