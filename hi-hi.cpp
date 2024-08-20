#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string str1, str2;
	
	cout << "Please input the first string" << endl;
	cin >> str1;
	cout << "Please input the second string" << endl;
	cin >> str2;
	cout << endl;
	return strcmp_case_insensitive(str1,str2);
}

/*int strcmp_case_insensitive( string s1, string s2)
{
    
};*/
