#include <iostream>
#include <string>

int main()
{
	while(true)
	{
		std::cout << "What's your yes or no question?" << std::endl;
		char qAnswer[100];
		std::cin.getline(qAnswer,sizeof(qAnswer)); // Puts answer in a char array, serves no purpose but waiting for an answer
		bool yesOrNo = true;
		int i = rand(); //Assign random number
		
		switch (i % 2) //Even number returns "Yes". Uneven number returns "No".
		{
		case 0:
			std::cout << "Yes" << std::endl;
			break;
		default:
			std::cout << "No" << std::endl;
			break;
		}
	}
}