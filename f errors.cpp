#include <iostream> //we remove  it gives this error ;1	1	C:/Users/LENOVO/Desktop/f errors.cpp	[Error] 'include' does not name a type.if we remove iostream  it gives this error :2	125	C:Users/LENOVO/Desktop/f errors.cpp	[Error] include expects "FILENAME" or <FILENAME>.
using namespace std ; // if we remove std it gives this error :8	2	C:/Users/LENOVO/Desktop/f errors.cpp	[Error] 'cout' was not declared in this scope; did you mean 'std::cout'?

int main()// if we remove int it give this error  2	1	C:/Users/LENOVO/Desktop/f errors.cpp	[Error] 'it' does not name a type; did you mean 'int'?
{	int a = 1;
	int b = 2;
	cout<<a+b; // if we remove cout it give this error :7	2	C:/Users/LENOVO/Desktop/f errors.cpp	[Error] expected primary-expression before '<<' token

	
	return 0;// if we remove ; it give this error:10	10	C:\Users\LENOVO\Desktop\f errors.cpp	[Error] expected ';' before '}' token
}