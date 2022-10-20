#include<iostream>
#include <cctype>
using namespace std;

int main(int ac, char **av)
{
	if (ac <= 1)
	{
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
		for (int i = 1; i < ac; i++)
		{
			string str = av[i];
			transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout<<str<<" ";
		}
	cout<<endl;
	return(1);
}