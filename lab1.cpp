#include<iostream>
#include<string>

int main()
{
	int n;
	std::cin >> n ;
	std::cout << n <<" ";
	while(n!=1)
	{
		if(n % 2)
			 n=3*n+1;
		else
			n=n/2;
		std::cout << n <<" ";		
	}
	
}
