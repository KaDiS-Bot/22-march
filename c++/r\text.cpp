#include <bits/stdc++.h> 
int boringFactorials(int n, int p)
{
	int factorial=1;
	while (n>0){
		factorial=factorial*n;
		n--;
	}
	return(factorial%p);
}