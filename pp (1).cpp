#include <iostream>
using namespace std;

void func(int arr[],int start,int last,int c)
{ 
    //int sum=0;
    if(start>last)
    {
        
        if(c==0)
        { 
            for(int i=0;i<=last;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            func(arr,start+1,last,c-arr[start]);      
    }  
}

  int main()
  {
      int c, len;
      cout<<"enter the length of array\t";
      cin>>len;
      cout<<"enter the value of c\t";
	  cin>>c;
      int* arr=new int[len];
      func(arr,0,len-1,c);

      return 0;
  }