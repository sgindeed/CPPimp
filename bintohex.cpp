#include <iostream>
using namespace std;
int main()
{
char bno[1000], hex[1000];

int temp;

long int i = 0, j = 0;

cout &lt;&lt; "Enter Binary Number : ";

cin &gt;&gt; bno;

while (bno[i])

{

	bno[i] = bno[i] - 48;

	++i;
}

--i;

while (i - 2 &gt;= 0)

{

	temp = bno[i - 3] *8 + bno[i - 2] *4 + bno[i - 1] *2 + bno[i];

	if (temp &gt; 9)

		hex[j++] = temp + 55;

	else

		hex[j++] = temp + 48;

	i = i - 4;
}

if (i == 1)

	hex[j] = bno[i - 1] *2 + bno[i] + 48;

else if (i == 0)

	hex[j] = bno[i] + 48;

else

	--j;

cout &lt;&lt; "\nHexadecimal Number equivalent to Binary Number : ";

while (j &gt;= 0)

{

	cout &lt;&lt; hex[j--];
}

return 0;
}