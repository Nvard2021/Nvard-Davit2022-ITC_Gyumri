#include <iostream>
#include <algorithm>
#include <vector>

int main (){

	std::vector<int> v = { 9, 8, 5, 7, 22, 46, 3, 4};
	
	std::sort(v.begin(), v.end(), [](int a, int b){
		return a > b;
	});
	for (auto element : v)
	{
		std::cout << element << std::endl;
	}

return 0;
}
