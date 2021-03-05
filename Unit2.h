//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <string>

#include <algorithm>

//---------------------------------------------------------------------------
class MyString
{
	private:
	std::string s;
	void Trim();
	void Lowercase();

	public:
	void SetString(std::string s0);
	bool IsPalindrome();
};

#endif
