#include <iostream>
#include "header.h"

using namespace std ; 

TString fabryka(const char *s)
{
 return TString(s);
}

int main()
{

	TString s1;
	TString s2("Krystian ");
	TString s3{ s2 };
	s1 = "hello world";
	TString s4 {std::move(s1)};
	TString s5 = fabryka("moja fabryka");
	

}
