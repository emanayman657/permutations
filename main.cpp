#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
using namespace std;
void Swap(char *x,char *y)
{
   swap(*x,*y);
}
void permute(char* b,char *a, int l, int r)
{
//    char c=b;
    int i;
    if (l == r+1)
    {

    cout << a <<endl;
    }
    else
    {
     for (i = l; i <= r; i++)
       {
          Swap((a+l), (a+i));
          permute(b,a , l+1, r);
          Swap((a+l), (a+i));
           permute(b,a , l+1, r);
          Swap((a+l),b);
           permute(b,a , l+1, r);
          Swap(a+i,b); //backtrack
       }
      }}
int main()
 {
      char *b;
   char str [100] ;
   cin >> b >> str;
    int n = strlen(str);
    permute(b,str, 0, n-1);
    return 0;
 }



