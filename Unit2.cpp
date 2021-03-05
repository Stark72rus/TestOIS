//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


/* String set */
void MyString::SetString(std::string s0)
{
	s = s0;
	Trim();
	Lowercase();
}


/* String without space */
void MyString::Trim()
{
	std::string s2 = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
			s2 = s2 + s[i];
	}

	s = s2;
}


/* Lowercase string
>>> � ���������, �� ���� ��������� ����������������� ������� �����. ����� ������
�������, � ��� ���... :(
*/
void MyString::Lowercase()
{
	//	setlocale(LC_ALL, "Russian");
	std::transform(s.begin(), s.end(), s.begin(), towlower);
}


/* Return true if string is palindrom */
bool MyString::IsPalindrome()
{
	int len = s.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(s[i] != s[len - i - 1])
		{
			return false;
		}
	}
	return true;
}
