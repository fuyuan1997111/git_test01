#include <stdio.h>
#include <unordered_map>
#include <map>
#include <string>

int main()
{
	std::unordered_map<int, std::string> _map;
	
	_map[1] = "a";
	_map[2] = "b";

	_map[4] = "c";
	_map[5] = "d";
	std::unordered_map<int, std::string >::iterator _iter=_map.find(3);

	if (_iter == _map.end())
		printf("1\n");
	else
		printf("0\n");
	12321
	return 0;
}