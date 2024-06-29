//rot13 chypering and dechypering
#include <string>
#include <iostream>

std::string EncryptString_rot13(std::string& source);
std::string DecryptString_rot13(std::string& source);

int main()
{
    std::string s("abc");

    std::string z (EncryptString_rot13(s));


    std::cout<<(EncryptString_rot13(s))<<" "<<std::endl;

    std::cout<<(DecryptString_rot13(z))<<" "<<std::endl;


    return 0;
}

std::string EncryptString_rot13(std::string& source)
{
	std::string transformed;
	for (size_t i = 0; i < source.size(); ++i) 
    {
		if (isalpha(source[i])) 
        {
			if ((tolower(source[i]) - 'a') < 14)//check where our current charcter is,so we can tell if we add 13 to our character will we go to special character or not
				transformed.append(1, source[i] + 13);//add the new chiperedtext to the result string to be returned to user
			else//adding 13 will cause us to go into special characters ,so we will remove 13 as an alternative
				transformed.append(1, source[i] - 13);
		} else 
        {
			transformed.append(1, source[i]);//if not alphanumeric we will not chyper it
		}
	}
	return transformed;
}


std::string DecryptString_rot13(std::string& source)
{
	std::string transformed;
	for (size_t i = 0; i < source.size(); ++i) 
    {
		if (isalpha(source[i])) 
        {
			if ((tolower(source[i]-13) - 'a') <= 14)//check where our current charcter is,so we can tell if we add 13 to our character will we go to special character or not
				transformed.append(1, source[i] - 13);//add the new chiperedtext to the result string to be returned to user
			else//adding 13 will cause us to go into special characters ,so we will remove 13 as an alternative
				transformed.append(1, source[i] + 13);
		} else 
        {
			transformed.append(1, source[i]);//if not alphanumeric we will not chyper it
		}
	}
	return transformed;
}

