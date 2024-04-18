#include <csignal>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <list>

int	main(int argc, char **argv, char **envp){

    int x(0);
    std::cout << x << std::endl;

    x = x + 2147483648;
    std::cout << x << std::endl;

    x = x + 2147483648;
    std::cout << x << std::endl;
    std::cout << std::endl;
	(void)envp;
	(void)argc;
	(void)argv;
}
