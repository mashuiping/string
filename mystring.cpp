#include <string.h>
#include "mystring.h"


String::String(const char *str){
	if(str == NULL){
	  m_data = new char[1];
	  m_data[0] = '\0';
	}	
	else{
		m_data = new char[strlen(str)+1];
		strcpy(m_data, str);
	}
}

String::String(const String & other){
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
}

String::~String(){
	delete [] m_data;
	m_data = NULL;
}

String & String::operator = (const String & other){
	if(*this == other)
	  return *this;
	else{
		delete [] m_data;
		m_data = new char[strlen(other.m_data) + 1];
		strcpy(m_data, other.m_data);
		return *this;
	}
}


String & String::operator + (const String & other){
	String * newString = new String();
	delete [] newString->m_data;
	newString->m_data = new char[strlen(m_data) + strlen(other.m_data) + 1];
	strcpy(newString->m_data, m_data);
	strcat(newString->m_data, other.m_data);
	return *newString;	
}

bool String::operator == (const String & other){
	return strcmp(m_data, other.m_data) == 0;
}
size_t String::getLength(){
	return strlen(m_data);
}

ostream & operator << (ostream & output, const String & other){
	output << other.m_data;
	return output;
}
