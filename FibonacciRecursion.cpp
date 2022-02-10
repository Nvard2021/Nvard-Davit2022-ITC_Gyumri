#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
    else
	return fib(n-1) + fib(n-2);
}

	int main (){
	using namespace std::chrono;

        std::chrono::time_point<std::chrono::system_clock> start, end;
	    start = std::chrono::system_clock::now();

	int n = 12;
	cout << fib(n);
	getchar();
	return 0;

        end = std::chrono::system_clock::now();
    	std::chrono::duration<double> elapsed_seconds = end - start;
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
		std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
}


