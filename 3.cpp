#include <iostream>
#include <ctime>

using namespace std;

void inputArr(int** arr, int n, int m){
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = rand() % 100;
        }
    }

    cout << endl;

}

void rasArr(int** arr, int n){
    int sum=0;
    for (int i = 0; i < n; i++){
        int j=i;
        sum=sum+arr[i][j];
    }
    std::cout<<sum;
}

void printArr(int** arr, int n, int m){
    cout << "Массив: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout <<  arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;

    std::cout << "Введите количество строк и столбцов: ";
    std::cin >> n;

    m=n;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    inputArr(arr,n, m);

    printArr(arr, n, m);

rasArr(arr,n);
delete [] arr;
    return 0;
}
