#include <iostream>
#include<string>

void analyse(std::string& str, int& digits, int& letters, int& spaces);
int countOfWord(const std::string& str, const std::string& word);
std::string& replaceSymbols(std::string& str, const char* oldSymbols, const char* newSymbols);
std::string& reverse(std::string& str);

int main()
{
	std::string str;
	std::cout << "Enter a string: ";
	std::getline(std::cin, str);

	std::cout << "Your string: " << str << "\n";

	int digits = 0;
	int alphas = 0;
	int spaces = 0;
	
	analyse(str, digits, alphas, spaces);

	std::cout << "Digits: " << digits << "\n";
	std::cout << "Letters: " << alphas<< "\n";
	std::cout << "Spaces: " << spaces << "\n";

	int hellos = countOfWord(str, "Hello");

	std::cout << "\"Hello\": " << hellos << "\n";

	str = replaceSymbols(str, ",", ".");

	str = reverse(str);

	std::cout << "Reverse: " << str << "\n";
}

void analyse(std::string& str, int& digits, int& letters, int& spaces)
{
	for (std::string::iterator i = str.begin(); i < str.end(); i++)
	{
		if (isdigit(*i))
		{
			digits++;
		}
		else if (isalpha(*i))
		{
			letters++;
		}
		else if (isspace(*i))
		{
			spaces++;
		}
	}
}

int countOfWord(const std::string& str, const std::string& word)
{
	int count = 0;
	int i = 0;
	while ((i = str.find(word, i + 1)) < str.length())
	{
		count++;
	}
	return count;
}

std::string& replaceSymbols(std::string& str, const char* oldSymbols, const char* newSymbols)
{
	while (str.find(oldSymbols) < str.length())
	{
		str.replace(str.find(oldSymbols), 1, newSymbols);
	}
	return str;
}

std::string& reverse(std::string& str)
{
	for (int i = 0; i <= str.length() / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[str.length() - i - 1];
		str[str.length() - i - 1] = tmp;
	}
	return str;
}
