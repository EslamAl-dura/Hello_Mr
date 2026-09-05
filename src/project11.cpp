#include <iostream>
#include <string>

using namespace std;
int main(){
	string MR;
	string food;
	cout<<"what is your name?";
	getline (cin,MR);
	cout<<"Hi,MR."<<MR<<",\n";
	cout<< "what is your favorite food?";
	getline(cin,food);
	cout<<"I like "<<food<<" too Mr."<<MR;
	return 0;
}
