#include <iostream>
#include <string>

int main()
{
	//Hello world 프로그램 전체 문자열
	std::string incl = "#include <iostream>";
	std::string def = "int main() {";
	std::string print = "\tstd::cout << \"Hello, World!\" << std::endl";
	std::string ret = "\treturn 0;";
	std::string end = "}";

	//Hello world 프로그램 출력
	std::cout << incl << std::endl << std::endl
		<< def << std::endl
		<< print << std::endl
		<< ret << std::endl
		<< end << std::endl;

	return 0;

}