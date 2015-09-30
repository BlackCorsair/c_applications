#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Please, enter your first name: ";
	string name;
	cin >> name;	
	
	// creating the frame
	string message = "* Hello, "+name+" i'm gonna kill your mother, and her bridge friends...*";
	string first_last(message.size(), '*');
	string space(message.size()-2, ' ');
	string border = "*"+space+"*";
	
	// putting out 
	cout 
	<<	first_last << endl 
	<<	border << endl
	<<	message << endl
	<< border << endl
	<< first_last << endl;
			
}