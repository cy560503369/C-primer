#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string line;
	while(getline(cin, line))
		if(!line.empty())
			cout << line << endl;
	return 0;
}
