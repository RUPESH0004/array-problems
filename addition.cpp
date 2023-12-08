#include<iostream>
using namespace std; 
main() 
{  
      int  m1[5][5], m2[5][5], m3[5][5];
      int  i, j, row, col;
      
      cout<<"Enter the no.of rows of the matrices to be added(max 5):";
      cin>>row;
      cout<<"Enter the no.of columns of the matrices to be added(max 5):";
      cin>>col;
      
      cout<<"first metrix input \n";
	  for(i=0;i<row;i++)
	  {
	  	for(j=0;j<col;j++)
	  	{
	  		cout<<"\nmatrix1["<<i<<"]["<<j<<"]=  ";
	  		cin>>m1[i][j];
		}
	  } 
	  
	  cout<<"secon metrix input\n";
	  for(i=0;i<row;i++)
	  {
	  	for(j=0;j<col;j++)
	  	{
	  		cout<<"\nmatrix2["<<i<<"]["<<j<<"]=  ";
	  		cin>>m2[i][j];
		}
	  } 
	  
	  cout<<"adding the metrix\n";
	  
	  for(i=0;i<row;i++)
	  {
	  	for(j=0;j<col;j++)
	  	{
	  		m3[i][j]=m1[i][j]+m2[i][j];
		}
	  } 
	  
	  cout<<"added  Matrix is:\n";

	  for(i=0;i<row;i++)
	  {
	  	for(j=0;j<col;j++)
	  	{
	  		cout<<"\t"<<m3[i][j];
		}
		cout<<endl;
	  } 
	  
}