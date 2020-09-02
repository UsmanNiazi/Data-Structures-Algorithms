#include<iostream>
using namespace std;
int find(int input[], int size, int x, int i) {
    if (size == i) 
    {
        return -1;
    }

    if (input[i] == x) 
    {
        return i;
    }

    return find(input, size, x, i + 1);

}
int count(int input[], int size, int x, int i)
{
    return 1;
}
int f(int input[], int value,int i)
{
    if (sizeof(input)/4 == 0)
        return 0;
    else
    {
        if (input[1] == value)
        {
            cout << i << endl;
            return value;
        }
        else
            return f(input+1,value,i+1);
    }
}
int main() 
{
    int arr[] = { 9,8,10,8 };
    int x = 8;
    int size = 4;
    //cout << find(arr, size, x, 0);
    cout << f(arr, 6,0);
    //cout << sizeof(arr)/4;
    return 0;
}