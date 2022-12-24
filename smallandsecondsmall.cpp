#include <bits/stdc++.h>
using namespace std;
int main()
{
int array[100], i, n;

cout &lt;&lt; "Enter number of elements in the array: ";

cin &gt;&gt; n;

cout &lt;&lt; "\nEnter array: ";

for (i = 0; i &lt; n; i++)

	cin &gt;&gt; array[i];

//sorting the array

sort(array, array + n);

//first two elements are the result

cout &lt;&lt; "Smallest number is:  " &lt;&lt; array[0] &lt;&lt; "\nSecond smallest number is " &lt;&lt; array[1] &lt;&lt; endl;

return 0;
}