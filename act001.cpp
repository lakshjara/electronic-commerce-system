int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <size; i+=2)
    sum += array[i];
}
return sum;

int main(){
    int size = 0;
    cout << "Indroduce el tamaño de la lista: " << end1;
    cin >> size;
    if(size<=0){
        cout << "Tamñano inválido " << en1;
        return 0;
    }
}