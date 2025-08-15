//Palindrom Number means numbers whose reverse is the number itself. Example: 111-111,121-121,1441-1441,3223-3223 etc.

#include <bits/stdc++.h>
int reverse(int x){
    int l,r=0;
  while(x>0)
    {
        l=x%10;
        r=r*10 + l;
        x=x/10;
    }

  return r;
}

//FOR PALINDROM WE WILL CREATE A DUPLICATE(which will duplicate x) and if dup=r print true
