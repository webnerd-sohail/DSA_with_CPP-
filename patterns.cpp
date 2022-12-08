#include<iostream>
using namespace std;

int main()
{
    // rectangular pattern
    // rows = 4 and column = 5
    /*

    *****
    *****
    *****
    *****
    */

//    int a,b;
//    cout<<"enter the number of rows and column"<<endl;
//    cin>>a>>b;

//    for (size_t i = 0; i < a; i++)
//    {
//         for (size_t j = 0; j < b; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//    }

// hollow rectangular patterns
/*
        *****
        *   *
        *   *
        *****
*/
//    int row1, col1;
//    cout<<"enter th number of rows and columns"<<endl;
//    cin>>row1>>col1;

//    for(int i = 1; i<=row1; i++)
//    {
//         for(int j = 1; j <=col1; j++)
//         {
//             if(i==1||i==row1||j==1||j==col1)
//             {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";

//             }
//         }
//         cout<<endl;
//    }
// }

/*
3. inverted half pyramid

*******
******
*****
****
***
**
*



int a;
   cout<<"enter th number of rows"<<endl;
   cin>>a;

 /*
 my approach

 for(int i=1; i<=a;i++ )
   {
    for(int j=a; j>=i; j--)
    {
        cout<<"*";
    }
    cout<<endl;
   }
  


//alternate approach
for(int i=a; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
*/

/*

3. right shifted half pyramid 

     *
    **
   ***
  ****
 *****
******




int a;

cout<<"enter the number of rows and column"<<endl;
cin>>a;

for(int i=1; i<=a; i++)
{
    for(int j=1; j<=a; j++)
        {
            if(j<=(a-i)){

            cout<<" ";
            }
            else
            cout<<"*";
        }
        cout<<endl;

*/


// int n,i,j;

//         int count=1;
// cin>>n;

// for(i=1;i<=n;i++)
// {
//     for(j=1;j<=i;j++)
//     {
//         cout<<""<<count;
//         count++;
//     }
//     cout<<endl;
// }

int t;
cin>>t;
for(int i=1; i<=t; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
int temp=(2*t-2*i);
    for(int j=1; j<=temp;j++)
    {
        cout<<" ";

    }
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

for(int i=t; i>=1; i--)
{
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
int temp=(2*t-2*i);
    for(int j=1; j<=temp;j++)
    {
        cout<<" ";

    }
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}




}






