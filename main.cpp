// Name Letter Distance
#include <iostream>
#include <string>

int charToInt(char c)
{
	c = tolower(c);
	return (int)c - 96;
}

int main()
{
	std::string name;
	std::cout << "What is your name? ";

	int distance = 0;
	int lowest = 999;
	int highest = 0;

	getline(std::cin, name);

	//Create an int array to hold the values for the chars
	int values[name.length()];

	//Add chars to the array as ints
	for (unsigned int i = 0; i < name.length(); i++)
	{
		std::cout << charToInt(name[i]) << ", ";
		values[i] = charToInt(name[i]);
		if (values[i] < lowest)
		{
			lowest = values[i];
		}
		if (values[i] > highest)
		{
			highest = values[i];
		}
	}


	//output the distance
	distance = highest - lowest;
	std::cout << std::endl << "lowest: " << lowest << std::endl;
	std::cout << "highest: " << highest << std::endl;
	std::cout << "= " << distance;
}