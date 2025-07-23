# include <iostream>

int operation(int x, int y) {
	int add = x + y;
	int sub = x - y;
	int mul = x * y;
	int dvi = x / y;
	return add, sub, mul, dvi;
}

int nop() {
	int x;
	int y;
	float final;
	std::cout << "What is the value of x?" << "\n";
	std::cin >> x;
	std::cout << "What is the value of y?" << "\n";
	std::cin >> y;
	final = operation(x, y);
	for (int every = 0; every < final; ++every) {
		std::cout << final << "\n";
	}
	return 0;
}

int final_price(int price, float disccount = 0.0) {
	float final = price * (1 - disccount);
	return final;
}


int main() {
	int price;
	std::string dis;
	std::cout << "What is the price? " << "\n";
	std::cin >> price;
	std::cout << "Does it have  a discount? " << "\n";
	std::cin >> dis;
	float final;
	if (dis == "yes") {
		float disccount;
		std::cout << "What is the discount ? " << "\n";
		std::cin >> disccount;
		final = final_price(price, disccount);
		std::cout << "You must pay " << final << "\n";
	}
	else {
		final = final_price(price);
		std::cout << "You must pay " << final << "\n";
	}
	return 0;
}
//just to prove that key words don't work in c++ but do in python.
 
int key_words(int the_first, int the_second) {
	int result = the_first - the_second;
	return result;
}
int main() {
	int first;
	int second;
	int final;
	std::cout << "What is the number given to x?" << "\n";
	std::cin >> first;
	std::cout << "What is the number given to y?" << "\n";
	std::cin >> second;
	final = key_words(first, second);
	std::cout << "The resul is " << final;
	return 0;
}

