// Prompt

//Given a positive number X. Find all Jumping Numbers smaller than or equal to X. 
//Jumping Number : A number is called Jumping Number if all adjacent digits in it
//differ by only 1. All single digit numbers are considered as Jumping Numbers.For
//example 7, 8987 and 4343456 are Jumping numbers but 796 and 89098 are not.


#include <iostream>
#include <string>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {
	
	int X;

	std::cin >> X;

	for (int number = 0; number <= X; number++) {
		std::string str_numb = std::to_string(number);

		if (str_numb.size() == 1) {
			std::cout << number << " ";
		}

		else {
			auto it = str_numb.begin();
			bool is_jumping = true;

			while (is_jumping && it+1 != str_numb.end()) {
				
				//std::cout << *it << " - " << *(it + 1) << " = " << *it - *(it + 1) << "\n";

				if (abs(*it - *++it) != 1) {
					is_jumping = false;
				}
			}
			//std::cout << "\nis jumping: " << is_jumping << "\n\n";
			if (is_jumping) std::cout << number << " ";
		}

	}
	


	PAUSE;
	return 0;
}