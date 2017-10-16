#ifndef TST_H
#define TST_H
#include "operatory.h"
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
		
		char& operator[](size_t n);
	    const char& operator[](size_t n) const;
	    
	    char* begin(){return ptr;}
	    char* end(){return ptr +len;}
	    size_t length() const {return len;}
		void clear(){delete[]ptr;ptr=nullptr;len=0;}
		bool empty()const {return len ? false :true ;}
		char& front() {return *ptr;}
		const char& front() const {return *ptr;}
		char& back(){return *(ptr+len-1);}
		const char& back() const{return*(ptr+len-1);}
		friend std::ostream& MojeOperatory::operator<<(std::ostream& strumien,const TString& s);
		friend std::istream& MojeOperatory::operator<<(std::istream& strumien,TString& s);

};

#endif //TST_H

