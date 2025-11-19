// 1? Functions In C++ Or Prime Number Or Factorial Number Or So On
// 1. Functions In C++ Or Prime Number Or Factorial Number Or So On

// #include<iostream>
// using namespace std;
// bool Prime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for(int i=2;i<n;i=i+1)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//         return 1;
//     }
// }
// int Fact(int n)
// {
//     int ans=1;
//     for(int i=1;i<=n;i=i+1)
//     {
//         ans=ans*i;
//     }
//     return ans;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter a:";
//     cin>>a;
//     cout<<"Enter b:";
//     cin>>b;
//     cout<<Prime(a)<<endl;
//     cout<<Fact(a)<<endl;
//     cout<<Prime(b)<<endl;
//     cout<<Fact(b)<<endl;
//     cout<<Prime(b-a)<<endl;
//     cout<<Fact(b-a)<<endl;
//     return 0;
// }

// 2? Functions In C++ Sum Or Multiply Or So On
// 2. Functions In C++ Sum Or Multiply Or So On

// #include<iostream>
// using namespace std;
// int Sum(int a,int b) // Return_Type Function_Name (Parametrs 1,Parametrs 2) // Function Declare
// {
//     int ans=a+b; // Function_Define
//     return ans; // return Value
// }
// void fun()
// {
//     cout<<"Hello Coders";
// }
// int main() // Main Function
// {
//     int m,n; // Declaration // Initiallization
//     cin>>m>>n;// Insertion Operation // Assertion Operation
//     cout<<Sum(m,n);// (Arguments 1,Arguments 2)
//     fun();
// }

// 3?
// 3.

// #include<iostream>
// using namespace std;
// void swap(int a,int b) // Pass By Value
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;

// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<b;
// }
// #include<iostream>
// using namespace std;
// void swap(int &a,int &b) // Pass By Reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;

// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<b;
// }
// #include<iostream>
// using namespace std;
// void Swap(int a,int b) // Function Overloading
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;

// }
// void Swap(float &c,float &d)
// {
//     float r=c;
//     c=d;
//     d=r;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<b;
//     float f1=4.8,f2=3.6;
//     Swap(f1,f2);
//     cout<<f1<<" "<<f2;   
// }

// 4? Convert a To A Or So On
// 4. Convert a To A Or So On

// #include<iostream>
// using namespace std;
// char convert(char name)
// {
//     char ans=name-'a'+'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cin>>name;
//     cout<<convert(name);
//     return 0;
// }

// 5? Armstrong Number
// 5. Armstrong Number

// #include<iostream>
// #include<math.h>
// using namespace std;
// int countdigit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count++;
//         n/=10;
//     }
//     return count;
// }
// bool Armstrong(int num,int digit)
// {
//     int n=num,ans=0,rem;
//     while(n)
//     {
//         rem=n%10;
//         n/=10;
//         ans=ans+ pow(rem,digit);
//     }
//     if(ans==num)
//     {
//         return 1;
        
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int num;
//     cin>>num;
//     int digit=countdigit(num);
//     cout<<Armstrong(num,digit);

// }

// 6? Find Trailing Zero In A Factorial Or Bishop Or Nim Game
// 6. Find Trailing Zero In A Factorial Or Bishop Or Nim Game

// 7?
// 7.



// 8?
// 8.
// 9?
// 9.
// 10?
// 10.
// 11?
// 11.
// 12?
// 12.
// 13?
// 13.
// 14?
// 14.
// 15?
// 15.
// 16?
// 16.
// 17?
// 17.
// 18?
// 18.
// 19?
// 19.
// 20?
// 20.
// 21?
// 21.
// 22?
// 22.
// 23?
// 23.
// 24?
// 24.
// 25?
// 25.
// 26?
// 26.
// 27?
// 27.
// 28?
// 28.
// 29?
// 29.
// 30?
// 30.