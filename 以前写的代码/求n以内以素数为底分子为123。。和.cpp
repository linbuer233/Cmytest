#include <iostream>
using namespace std;
#include <cmath>
using namespace std;

double isPrime(int n){
	int m;
	if(n<2)
		return 0;
	else{
		// cout<<"why";
		for(m = 2;m<=sqrt(n);++m){
			if(n%m==0){
				// cout<<n<<"  "<<m<<"dead"<<endl;
				return 0;
			}
		}
		// cout<<"alive";
	}
	// cout<<"-v";
	return 1;
}

double function(int n){
	int i;
	double s = 0,j = 1,sign = -1;
	for(i = 1;i<=n;i++){
		// cout<<" "<<i;
		if(isPrime(i)){
			s+=sign*(j/i);
			j++;
			sign = -sign;
		}
	}
	// cout<<s;
	return s;
}

double func(int n){
	int m,u,i;
	double s = 0,j = 1,sign = -1;
	for(i = 0;i<=n;i++){
		if(i<2)
			u = 0;
		else{
			u = 1;
			for(m = 2;m<=sqrt(i);++m){
				if(i%m==0){
					u = 0;
					break;
				}
			}
		}
		if(u){
			s+=sign*(j/i);
			j++;
			sign = -sign;
		}
	}
	return s;
}

int main()
{
	cout<<function(10)<<endl;
	cout<<func(10);
	return 0;
}