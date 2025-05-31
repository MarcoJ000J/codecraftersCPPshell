#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Uncomment this block to pass the first stage
  std::cout << "$ ";

  std::string input;
  std::getline(std::cin, input);

  if (input == "exit 0") return 0;


  else if (input.find("echo") != std::string::npos) std::cout << input.substr(5) << std::endl;

  else if (input.find("type") != std::string::npos) {
	  std::string temp = input.substr(5);
	  if(temp == "echo" || temp == "exit" || temp == "type") std::cout << temp << " is a shell builtin" << std::endl;
	  else std::cout << temp << ": is a invalid command";
  }


  else std::cout << input << ": command not found"<< std::endl;

  main();
}
