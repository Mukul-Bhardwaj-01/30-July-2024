//30 July Q1 solution
//Code to take n elements in an array and Find & Display all possible triplets (a,b,c) where a+b=c 

#include <iostream>
using namespace std;

// First we'll create a list of n integers input by user

void input(int n, int A[]) 
{
    cout << "Start Entering Elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
        cout << "\n";
    }
    cout << "Input Taken:\n";

    for (int i = 0; i < n; i++) 
    {
        cout << A[i] << "\t";
    }
    cout << endl;
}

// Function to sort the array

void Sorting(int n, int A[]) 
{
    int temp;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (A[i] > A[j]) 
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    cout << "Enter Number of elements you want in list :\n";
    cin >> n;
    int A[n];
    input(n, A);
    Sorting(n, A);

    cout << "Unique triplets (a, b, c) where a + b = c :\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                if (A[i] + A[j] == A[k]) 
                {
                    cout << "(" << A[i] << ", " << A[j] << ", " << A[k] << ")\n";
                }
            }
        }
    }

    return 0;
}
