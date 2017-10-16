#include <iostream>
#include "header.h"
#include "operatory.h"

using namespace std ; 
using namespace MojeOperatory;

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
	s4=move(s5);
	s4=fabryka("ostatni obiekt");

  	for(auto c : s4)cout<<c<< "-";
  	for(auto& c : s4)c = toupper(c);
    cout<<endl<<"___________________"<<endl;
    
    cout<<s4<<endl;
    cout<<endl<<"___________________"<<endl;

}
