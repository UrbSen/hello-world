#include <iostream>
 
using namespace std;
 
int main()
{
	char name[20];
  cout<<"Name, please?";
	cin>>name;
	cin.ignore();
  cout<<"Greetings "<<name<<", welcome to Urban's first C++ program!\n"<< "Hello World!";
  cin.get();
}
