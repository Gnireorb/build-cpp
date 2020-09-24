#include <iostream>
#include <Windows.h>
#include <future>

int main()
{
	std::cout << "hello." << std::endl << std::endl;
	std::cout << "press END to end this application." << std::endl;

	while (!GetAsyncKeyState(VK_END)) { std::this_thread::sleep_for(std::chrono::milliseconds(10)); }
}
