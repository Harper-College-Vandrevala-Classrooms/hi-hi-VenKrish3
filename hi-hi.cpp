#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int strcmp_case_insensitive(string, string);

int main()
{
	string str1, str2;
	
	cout << "Please input the first string" << endl;
	cin >> str1;
	cout << "Please input the second string" << endl;
	cin >> str2;
	cout << endl;
	
	cout << "The comparison of " << str1 << " and " << str2 << " is " << strcmp_case_insensitive(str1,str2);
}
	
int strcmp_case_insensitive(string s1, string s2)
{
	int final = 0;
	if(s1.length() < s2.length())
	{
		return -1;
	}
	else if(s1.length() > s2.length())
	{
		return 1;
	}
	else{
		for(int i = 0; i < s1.length(); i++)
		{
			if(tolower(s1[i]) > tolower(s2[i]))
			{
				return 1;
				//final++;
			}
			else if(tolower(s1[i]) < tolower(s2[i]))
			{
				return -1;
				//final --;
			}
		}
		return 0;
	}
	
	/*if(final > 0)
		return 1;
	else if(final < 0)
		return -1;
	else 
		return 0;*/
};
