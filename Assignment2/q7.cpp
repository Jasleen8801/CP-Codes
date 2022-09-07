#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col, sum;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements: "<<endl;
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            cin>>arr[i][j];
    for(i=0; i<row; i++){
        sum=0;
        for(j=0; j<col; j++){
            sum = sum+arr[i][j];
        }
        cout<<"Sum of elements of a row in a matrix "<<sum<<endl;
    }
    return 0;
}

