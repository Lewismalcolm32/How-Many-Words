#include <iostream>
#include <string>

int countWords(const std::string& someString){
	int counter = 0;
	int index = 0;
	for (char x : someString){
		++index;
		if (x == *"\n" || x == *"	" || x == *" "){ ++counter; }
		if (!someString[index]) { ++counter; }
	}
	return counter;
}

int main(){
	std::cout << countWords("Hello Govnor it is a pleasure to meet you") << std::endl;
	system("pause");

}