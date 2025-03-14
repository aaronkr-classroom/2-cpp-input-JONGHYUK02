#include <iostream>
#include <string>

int main()
{
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;
	//greeting길이 + 4
	//gretting길이 + 2공백
	const std::string greeting = "Hello, " + name + "!";

	//2번째 4번째 줄 만들기
	const std::string spaces(greeting.size(), ' ');
	const std::string line24 = "* " + spaces + " *";

	//1, 5번째 줄
	const std::string line15(line24.size(), '*');

	//인사 상자 출력
	std::cout << std::endl;
	std::cout << line15 << std::endl;
	std::cout << line24 << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << line24 << std::endl;
	std::cout << line15 << std::endl;
	return 0;
}