#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int choice;

cout &lt;&lt; "1. Shutdown Your Computer \n";

cout &lt;&lt; "2. Restart Your Computer \n";

cout &lt;&lt; "3. Exit\n";

cout &lt;&lt; "\n Enter your choice : ";

cin &gt;&gt; choice;

switch (choice)

{

	case 1:
		cout &lt;&lt; "System will shutdown after 30 seconds \n";

		system("C:\\windows\\system32\\shutdown /s /t 30 \n\n");

		break;

	case 2:
		cout &lt;&lt; "System will restart in 30 seconds\n";

		system("C:\\windows\\system32\\shutdown /r /t 30\n\n");

		break;

	case 3:
		exit(0);

	default:
		cout &lt;&lt; "Wrong Choice!!\n";
}

return 0;
}

