#include <iostream>
#include <string>

int main()
{
	while(true)
	{
		std::cout << "What's your yes or no question?" << std::endl;
		char qAnswer[100];
		std::cin.getline(qAnswer,sizeof(qAnswer));
		bool yesOrNo = true;
		bool answer;
		if (yesOrNo)
		{
			int i;
			i = rand();
			if (i % 2 == 0)
			{
				answer = true;
				std::cout << "Yes" << std::endl;
			}
			else
			{
				answer = false;
				std::cout << "No" << std::endl;
			}
		}
	}
}