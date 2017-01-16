#include <iostream>
using namespace std;

class String{
public:
	String(const char *str = NULL);          
	String(const String & other);
	~String();
	String & operator = (const String & other);
	String & operator + (const String & other);
	bool operator == (const String & other);
	size_t getLength();
	friend ostream & operator << (ostream & output, const String & other);
private:
	char *m_data;
};

