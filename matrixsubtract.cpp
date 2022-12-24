#include <iostream>
using namespace std;
void subtract(int[5][5], int[5][5], int, int);
int display(int[5][5], int, int);
int main()
{
int a[5][5], b[5][5], r1, c1, r2, c2;
cout<<"\n Enter rows for first matrix: ";
cin>>r1;
cout<<"\n Enter columns for second matrix: ";
cin>>c1;
cout<<"\n Enter rows for first matrix: ";
cin>>r2;
cout<<"\n Enter columns for second matrix: ";
cin>>c2;
// To check if columns of first matrix are equal to rows of second matrix
if (r1 != r2 || c1!=c2)
return 0;
// Storing elements of first matrix.
printf("\nEnter elements of first matrix \n");
for(int i=0; i<r1; i++)
{
for(int j=0; j<c1; j++)
cin>>a[i][j];
}

// Storing elements of second matrix.
cout<<"\nEnter elements of second matrix\n";
for(int i=0; i<r2; i++)
{
for(int j=0; j<c2; j++)
cin>>b[i][j];
}
cout<<"\n display a\n";
display(a, r1, c1);
cout<<"\n display a\n";
display(b, r2, c2);
//calling the function to subtract a and b. passing number of rows
//and columns in both of them
subtract(a, b, r1, c1);
return 0;
}
void subtract(int a[5][5], int b[5][5], int row, int col)
{
int c[5][5];
//input 0 for all values of c, in porder to remove
//the garbage values assigned earlier
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
c[i][j]=0;
}
//we apply the same formula as above
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
c[i][j]=a[i][j]-b[i][j];
}
//to display matrix
cout<<"\n Matrix c after Subtraction is:\n";
display(c, row, col);
}
int display(int c[5][5], int row, int col)
{
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
cout<<c[i][j]<<" ";
cout<<"\n";
}
return 0;
}