// // #include<iostream>
// // #include<vector>
// // #include<algorithm>

// // using namespace std; 

// // int maxSumFromStack(vector<int>& stack, int N, int K) { 

// //     vector<int> queue(stack.rbegin(), stack.rend()); 
// //     int sum = 0;
// //     for(int i = 0; i < K; ++i) { 
// //         sum += queue.back();
// //         queue.pop_back(); 
// //     }
// //     return sum;

// // }

// // int main() {
// //     int N = 10;
// //     int K = 5;

// //     vector<int> stack = {10, 9, 1, 2, 3, 4, 5, 6, 7, 8};
// //     int result = maxSumFromStack(stack, N, K);
// //     cout << result << endl;

// //     return 0;
// // }

#include<stdio.h>
int funct1(char a, char b);
int funct2(char *pa, char *pb);
main()
{
    char a="X";
    char b="Y";
    int i,j;

    i=funct1(a,b);
    printf("a=%c, b=%c \n",a,b);


    j=funct2(&a,&b);
    printf("a=%c, b=%c \n",a,b);

    funct3(&a,&b);
    printf("a=%c,b=%c\n",a,b);

    funct4(&a,&b);
    printf("a=%c,b=%c\n",a,b);
}
int funct1(char c1,char c2)
{
    c1='P';
    c2='Q';
    return((c1<c2)?c1:c2);
}

int funct2(char *c1,char *c2)
{
    *c1='P';
    *c2='Q';
    return((*c1==*c2)?*c1:*c2);
}
void funct3(char *c1,char *c2)
{
    (*c1)++;
    (*c2)++;
}

void funct4(char *c1,char *c2)
{
    c1++;
    c2++;

    return 0;
}

