#include <iostream>
#include<string>

int main()
{
 //   std::string str = "January February March April May June";
	//
	//while (str.find(" ") < str.length())
	//{
	//    str.replace(str.find(" "), 1, ",");
	//    std::cout << str << "\n";
	//} 

 //   std::cout << str;

	std::string str;
	std::getline(std::cin, str);
	std::cout << str << "\n";
	int count = 0;
	int i = 0;
	while ((i = str.find(" ", i + 1)) < str.length())
	{
		count++;
	}
	
	std::cout << "Count = " << count << "\n";

	count = 0;

	//for (int i = 0; i < str.length(); i++)
	//{
	//	if (isupper(str[i]))
	//	{
	//		count++;
	//	}
	//
	//}
	
	for (std::string::iterator i = str.begin(); i < str.end(); i++)
	{
		if (isupper(*i))
		{
			count++;
		}
	}

	std::cout << "Count = " << count << "\n";

	for (int i = 0; i <= str.length() / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[str.length() - i - 1];
		str[str.length() - i - 1] = tmp;
	}

	str.r
	
	std::cout << "Reverse: " << str << "\n";
}
