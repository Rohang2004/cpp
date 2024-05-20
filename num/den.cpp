#include<iostream>
using namespace std;
int main()
{
	double num,den,divide;
	cout<<"Enter the numerator :";
	cin>>num;
	cout<<"Enter the denominator :";
	cin>>den;
	try{
		if(den==0)
			throw 0;
		divide = num/den;
		cout<<num<<"/"<<den<<"="<<divide<<endl;
	}
	catch(int num_exception)
	{
		cout<<"Error ! cannot divide by "<<num_exception<<endl;
	}
	return 0;
}
