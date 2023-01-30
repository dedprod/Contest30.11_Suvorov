#include <iostream>
using namespace std;

void ArrInput(int* Arr,int num){
    std::cout<<"Введите Элементы массивы, через нажатие enter "<<endl;
    for (int i = 0; i < num; i++) {
        std::cin>>Arr[i];
    }
    std::cout<<endl;
}
void Finder(int* Arr,int k,int num){
    int sum=0;
    double maxsred = 1000;
    for (int i = 0; i < num-k; i++){
        sum=0;
        double sred=0;
        for( int j=i; j <i+k;j++){
            sum+=Arr[j];
        }
        sred=sum/k;
        if (sred<maxsred){
            maxsred=sred;
        }
    }
    std::cout<<endl;
    std::cout<<"Минимальное среднее значение равно: "<<maxsred;
}

void PrintArr(int* Arr,int num){
    for (int i = 0; i < num; i++) {
        std::cout<<Arr[i]<<" ";
    }
}

int main()
{
    int num;
    int k;
    cout << "Введите количество элементов массива: ";
    cin >> num;
    std::cout<<endl;
    cout << "Введите количество элементов подмассива: ";
    cin >> k;
    std::cout<<endl;
    int *Arr = new int[num];
    ArrInput(Arr,num);
    PrintArr(Arr,num);
    Finder(Arr,k,num);
    delete [] Arr;
    return 0;
}
