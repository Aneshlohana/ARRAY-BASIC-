#include<iostream>
using namespace std;
int main()
{
	//int x=10;  ---->scalar variable;
	//int A[5];------>Vector variable;
	
	//Declaration;
	//int A[5];---->leads to garabage value;
	//int A[5]={2,4,6,8,10};
	//int A[5]={2,4}; others will be zero;
	//int A[5]={0}; all are zero;
	//int A[]={2,3,4,5,6}; valid ;
	
	
	//If we want to access all element of array;
	//for(int i=0;i<5;i++)
	//{
	//	cout<<A[i];
	//}
	
//	int A[5]={2,4,6,8,10};
//	
//	cout<<A[2]<<endl;
//	cout<<2[A]<<endl;
//	cout<<*(A+2);
    int arr[5]={3,3,4,5,5};
    cout<<arr[3]<<endl;
    cout<<&arr<<endl;
    cout<<(&arr+1);
    
}
