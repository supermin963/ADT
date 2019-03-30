#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include <cmath>
using namespace std;
 
int Partition(int A[], int left, int right){
    int p = round(1.0*rand()/RAND_MAX*(right - left) + left);
    swap(A[p], A[left]);
 
    int temp = A[left];
    while(left < right> temp) right--;
        A[left] = A[right];
        while(left &lt; right && A[left] &lt;= temp) left++;
        A[right] = A[left];
    }
    A[left] = temp;
    return left;
}
 
void quickSort(int A[], int left , int right){
    if (left &lt; right){
        int pos = Partition(A, left, right);
        quickSort(A, left, pos -1);
        quickSort(A, pos + 1, right);
    }
}
 
int main(){
    int A[5] ={2, 4, 1, 3, 5};
    quickSort(A, 0, 4);
    for (int i = 0; i &lt; 5; ++i) {
        if(i) printf(" ");
        printf("%d", A[i]);
    }
    return 0;
}