#include"operator.h"

int operator/(const std::string &str, const std::string &needle){
	if(needle.empty() || str.empty()){
		return 0;
	}

	int count = 0;
	std::string::size_type pos = 0;

	while((pos = str.find(needle, pos)) != std::string::npos){
		count++;
		pos += 1;
	}

	return count;
}
