#include <iostream>
#include <map>
#include <algorithm>
#include <string>


int main()
{
    std::string word;
    std::cout << "Write your word: ";
    std::getline(std::cin, word);
    
    std::map<char, int> CharCount; 

   
    for (char& i : word)
    {
        CharCount[std::tolower(i)]++;
    }

   
    for (char& i : word)
    {

        if (CharCount.at(std::tolower(i)) > 1)
        {
            i = '1';
        }
        else
        {
            i = '2';
        }
    }

    
    std::cout << word << std::endl;

    return 0;
}
