#ifndef TST_H
#define TST_H
#include<cstring>

class TString {
	
	private:
		char* ptr = nullptr;
		std::size_t len = 0;
	

	public:
		TString(const char* s = nullptr); //construktor
		TString(const TString& s);
		TString(TString&& s);
		~TString(); // destruktor
		TString& operator=(const TString& s); //operator kopiujacy 
		TString& operator=(TString&& s);
		char& operator[]( size_t n);
	    const char& operator[](size_t n)const;

};

#endif //TST_H

