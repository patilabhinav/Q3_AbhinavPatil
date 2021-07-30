#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{

	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i = i + 2)
	{

		while (n % i == 0)
		{
			cout << i << " ";
			n = n/i;
		}
	}


	if (n > 2 )
		cout <<"Please input a different number ";
}

int main()
{
	int n;
	cin>>n;

	if(n<10)
    {
        cout<<"Invalid Number";
	}
	else
        primeFactors(n);
	return 0;

}


