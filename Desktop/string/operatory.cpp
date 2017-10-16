#include"operatory.h"
#include"header.h"
#include<string>
using namespace std;





ostream& MojeOperatory::operator<<(ostream& strumien,const TString& s)
 	{
 	 	return strumien<<(s.ptr ? s.ptr : "pusty");
 	 	
 	}
 	

istream& MojeOperatory::operator<<(istream& strumien,TString& s)
 	{
 	 	string tmp;
 	 	getline(strumien,tmp);
 	 	delete[] s.ptr;
 	 	s.len =tmp.size();
 	 	if(s.length()>0){
 	 		s.ptr=new char[s.len+1];
 	 		strcpy(s.ptr,tmp.c_str());//c_str() metoda wyciagajaca const char ze string
		}
		else
		{
			s.ptr=nullptr;
		  
		}
 	 	return strumien;
    }

