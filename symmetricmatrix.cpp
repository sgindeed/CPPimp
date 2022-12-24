#include <iostream>
using namespace std;
int main()
{
int n;
cout &lt;&lt; "Enter size of square matrix\n"; //inputting size of the matrix

cin &gt;&gt; n;

int a[n][n];

cout &lt;&lt; "Enter the matrix row-wise\n";	//inputting the matrix row wise

for (int i = 0; i &lt; n; ++i)

{
	for (int j = 0; j &lt; n; ++j)

	{

		cin &gt;&gt; a[i][j];
	}
}

int ctr = 1;

for (int i = 0; i &lt; n; ++i)	//check for symmetric matrix

{
	for (int j = 0; j &lt; n; ++j)

	{

		if (a[i][j] != -a[j][i])

		{

			ctr = 0;

			break;
		}
	}

	if (ctr == 0)

		break;
}

if (ctr)	//printing if matrix is symmetric

	cout &lt;&lt; "Matrix is skew-symmetric\n";

else	//checking if skew symmetric matrix

{
	ctr = 1;

	for (int i = 0; i &lt; n; ++i)

	{

		for (int j = 0; j &lt; n; ++j)

		{

			if (a[i][j] != (-a[j][i]))

			{

				ctr = 0;

				break;
			}
		}

		if (ctr == 0)

			break;
	}

	if (ctr)	//printing if matrix is skew symmetric matrix

		cout &lt;&lt; "Matrix is skew-symmetric\n";

	else	//if not then its neither of the two

		cout &lt;&lt; "Matrix is neither symmetric nor skew-symmetric\n";
}

return 0;
}