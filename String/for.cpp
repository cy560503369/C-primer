#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str("some string");
	decltype(s.size()) punct_cnt = 0;
	for(auto c : str)
		if(ispunct(c))
			++punct_cnt;
	
	cout << punct_cnt << endl;
	return 0;
}
