#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
// class for searching
class Searching
{
protected:
    int size;
    int *array;

public:
    // this constructor set the size of the array
    friend void algorithmPreference(char ch);
    Searching(int capacity)
    {
        size = capacity;
        array = new int[size];
        cout << "Enter the values stored in array : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        cout << "Array Successfully Initilize !" << endl;
        displayData();
    }

    Searching(); // default constructor
    ~Searching()
    {
        delete[] array;
    }
    void setData();
    void linearSearch(int target);
    int binarySearch(int target);
    void displayData();
};

// applying linear search  algorithm
void Searching::linearSearch(int target)
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
    {
        if (this->array[i] == target)
        {
            cout << target << " is found at index : " << i << endl;
            return;
        }
    }

    cout << target << " is not found" << endl;
}
// applying binary search algorithm
int Searching::binarySearch(int target)
{
    // sort(this->array,size);
    int start = 0, end = size - 1;
    int mid;
    while (start <= end)
    {

        mid = (start + end) / 2;
        if (target < array[mid])
        {
            end = mid - 1;
        }

        else if (array[mid] == target)
        {
            cout << "target value " << target << " is found at index : " << mid << endl;
            return 0;
        }

        else
        {
            start = mid + 1;
        }
    }
    cout << "target value " << target << " is not found  : " << endl;
    return 0;
}

void Searching::setData()
{
    cout << "Enter the values stored in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Array Successfully Initilize !" << endl;
}

void Searching::displayData()
{
    cout << "Array is :  ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

class Sorting : public Searching
{   public:
Sorting(){ }
    Sorting(int capacity)
    {
        size = capacity;
        array = new int[size];
        cout << "Enter the values stored in array : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        cout << "Array Successfully Initilize !" << endl;
        displayData();
    }
    void bubbleSort();
    void slectionSort();
    void insertionSort();
 
};

void Sorting ::bubbleSort(){
    for(int i=0;i<size-1;i++){
         for(int j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
         }
    }
    cout<<"Sorted Array : "<<endl;
    displayData();
}

void algorithmPreference()
{
}

int main()
{
    Searching arrayObject(50);
/*
    cout << "---------------------------------------" << endl;
    auto start_binary_search = chrono::high_resolution_clock::now();
    arrayObject.binarySearch(5);
    auto end_binary_search = chrono::high_resolution_clock::now();

    // Compute the duration
    auto binary_duration = chrono::duration_cast<chrono::microseconds>(end_binary_search - start_binary_search);

    // Output the duration
    cout << "Execution time: " << binary_duration.count() << " microseconds" << endl;
    cout << "---------------------------------------" << endl;
     auto start = chrono::high_resolution_clock::now();
    arrayObject.linearSearch(5);
    auto end = chrono::high_resolution_clock::now();

    // Compute the duration
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    // Output the duration
    cout << "Execution time: " << duration.count() << " microseconds" << endl;
*/

Sorting obj(10);
obj.bubbleSort();
return 0;
}