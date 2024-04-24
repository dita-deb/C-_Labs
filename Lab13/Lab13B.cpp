/*
Class: CSE 1321L
Section : WE1 C++
Term : Summer 2021
Instructor : Mokter Hossain
Name : Anindita Deb
Lab# : 13B
*/

#include <iostream>
using namespace std;

// this function returns average of elements of 2D array
float findAverage(int* arr, int r, int c)
{
    int i, j;

    int sum = 0;
    float average = 0.0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // store num at ith, jth cell
            sum += *((arr + i * c) + j);
        }
    }

    average = (float)sum / ((float)r * c);

    return average;
}

// this function returns sum of elements of 2D array
int findSum(int* arr, int r, int c)
{
    int i, j;

    int sum = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // store num at ith, jth cell
            sum += *((arr + i * c) + j);
        }
    }

    return sum;
}


int main()
{
    int r = 0, c = 0, i = 0, j = 0;
    int num = 1;
    int arr;

    cout << "Please enter the number of rows: ";
    cin >> r;
    cout << "Please enter the number of columns: ";
    cin >> c;

    cout << "\nI have " << r << " rows and " << c << " columns. I need to fill-up " << (r * c) << " spaces.\n" << endl;

    arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int arr['i']['j'];

            arr[i][j]=num++;
        }
    }

    cout << "The " << r << "x" << c << " array:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << (int*)arr[i][j] << "|";
        }
        cout << endl;
    }

    // calling function that will return sum of all values in the 2D array
    cout << "\nThe sum of " << r << "x" << c << " array = " << findSum((int*)arr, r, c);

    // calling function that will return average of all values in the 2D array
    cout << "\n\nThe average of " << r << "x" << c << " array = " << findAverage((int*)arr, r, c);

    return 0;
}
