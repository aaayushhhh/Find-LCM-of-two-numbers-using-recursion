#include<stdio.h>

int findlcm(int, int);   

int main()
{

    int a, b, lcm;
    printf("\n\nEnter 2 numbers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = findlcm(a,b);    // function call
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b, lcm);
    
    return 0;
}

int findlcm(int a, int b)  
{
  
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        findlcm(a,b);
        return temp;
    }
}
