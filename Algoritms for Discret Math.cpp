#include <iostream>
#include<string>
using namespace std;

void display(int* arr,int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int bin(int x, int* arr) {
    int i = 0;
    string b;
    while (x > 0)
    {
        arr[i] = x % 2;
        x /= 2;
        i++;
    }
    return i;
}


int main() {
    
    int a[8] = {1,4,23,144,11,33,10,99},n=8,x=144;
    
    //Procedure: Finding max
    /*int max=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    cout << max;*/



    //Procedure: Linear search
 
    //For version
    /*int x = 144;
    bool lamp = 1;
    for (int i = 0; i < n; i++)
    {
        if (x==a[i])
        {
            cout << i <<endl;
            lamp = 0;
            break;
        }
    }
    if (lamp==1)
    {
        cout << 0<<endl;
    }*/

    //While version
    /*int i = 0;
    while (i <= n and x != a[i])
    {
        i++;
    }
    if (i <= n)cout << i; else cout << 0;
    */



    //Procedure: Binary search
    /*int i = 0,j=n-1,m;
    
    while (i<j)
    {
        m = (i + j) / 2;
        if (x > a[m]) i = m + 1; else j = m;
    }
    if (x == a[i]) cout << i; else cout << 0;*/



    //Procedure: Bubble sort
    /*int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                k = a[j];
                a[j]=a[j+1];
                a[j+1] = k;  
            }
        }
    }*/

    //Advanced Bubble sort
   /* int i=0;
    bool lamp = false;
    while (i<n and lamp==false)
    {
        lamp = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
                lamp = false;
            }
        }
        i++;
    }
    display(a,8);*/



    //Procedure: Insertion sort
    /*int j,m;
    for (int i = 1; i < n; i++)
    {
        j = 0;
        while (a[i] > a[j]) j++;
        m = a[i];
        for (int k = 0; k < i-j; k++)
        {
            a[i - k] = a[i -k-1];
        }
        a[j] = m;
    }
    display(a,8);*/
    
    

    //Procedure: Greedy
    /*int d[4] = {};
    int c[5] = { 25,10,5,1 };
    int p = 90;
    for (int i = 0; i < 3; i++)
    {
        d[i] = 0;
        while (p>=c[i])
        {
            d[i] += 1;
            p -= c[i];
        }
    }
    display(d,4);*/
    


    //Procedure: Eucledian
  /*  int x=20, y=50,r;
    while (y!=0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    cout << x;*/
    


   //Procedure: Binary Modular Exponentiation
    /*int arr[100], arr1[100], s, l, power;
    s = bin(13, arr);
    int b = 3, m = 7;
    l = 1;
    power = b % m;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == 1)
        {
            l = (l * power) % m;
        }
        power = (power * power) % m;
    }
    cout << "Answer is : " << l;*/

    

   //Procedure: Factorial
    /*int factorial = 1;
    for (int i = 1; i < n+1; i++)
    {
        factorial *= i;
    }
    cout << "Factorial: "<<factorial;*/

    
    
    //Procedure: Binary Addition of Integers
    /*int a1[100], b[100], s[100], c=0, d,k,k1;
    k = bin(6, a1);
    k1= bin(5, b);
    
    for (int i = 0; i < k1; i++)
    {
        d = (a1[i] + b[i] + c) / 2;
        s[i] = a1[i] + b[i] + c - 2 * d;
        c = d;
    }
    s[k] = c;
    display(s, k1+1);*/


    return 0;
}
