#include<iostream>
using namespace std;
int main()
{
  int num,limit,i;
  char choice;
  cout<<"To find prime numbers from series, Enter (1):";
  cout<<"\nTo check the prime number,Enter (2):" << endl;
  cin >> choice;
  switch(choice)
  {
   case '1':
   {
      cout<<"Enter limit = ";
      cin>> limit;
      cout<<"Prime numbers from 1 to" << limit << "is :";
      for( i=2;i<=limit;i++)
      {
        int c=0;
        for(int j=2 ; j<=i/2;j++)
        {
         if(i % j == 0)
          { 
            c++;    
          }       
        }
        if (c==2)
        {
         cout<< i << " , ";
        }
      }
     break;
    }
   case '2':
   {
     cout<<"Enter Number = ";
     cin>> num;
     int e=0;
      for(int i=1;i<=num;i++)
      {
        if(num % i == 0)
        {
          e++;
        }
      }  
      if (e==2)
      {
        cout<<num <<  " is a prime Number.";
      }
      else 
      {
        cout<< num <<" is not a prime Number";
      }
     break;
    }
    
    default:
    cout<<"Invalid input.";
  }
 return 0;

}