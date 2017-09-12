#include <cstdio>
#include <cstring>

using namespace std; 

const int maxn = 2017 ;

int A[maxn] , n ;


int main(){

	scanf("%d",&n) ;
	
	for(int i = 1 ; i <= n ; ++i){
		scanf("%d",&A[i]) ;
	}

	int now_index =  0 , now_value = 0 ;
	
	for(int i = 2 ; i <= n ; ++i){
		now_value = A[i] ;
		now_index = i - 1 ;
		for(; now_index > 0 ; now_index--){
			if(A[now_index] < now_value) break ;
			A[now_index + 1] = A[now_index] ; 
		}
		A[now_index + 1] = now_value ; 
	}	
	
	for(int i = 1 ; i <= n ; ++i){
		printf("%d ",A[i]) ;
	}
	
	printf("\n") ;

	return 0 ;
}

