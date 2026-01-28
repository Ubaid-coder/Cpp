#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main(){

    // int numbers[100];
    // for(int i=1; i<=100; i++){
    //     numbers[i] = {i};
    // }
    // int size = sizeof(numbers) / sizeof(int);
    // int index;
    // int myNum;

    // std::cout << "Enter element to search for: " << "\n";
    // std::cin >> myNum;

    // index = searchArray(numbers, size, myNum);

    // if(index != -1){
    //     std::cout << myNum << " is at index " << index;

    // }else{
    //     std::cout << myNum << " is not in the array";
    // }

    std::string foods[] = {"Biryani", "Tika", "Nihari", "Haleem", "Burger", "Pizza", "Karahi", "Handi", "Mutton"};
    int size = sizeof(foods) / sizeof(std::string);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for food: " << "\n";
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);
    if(index != -1){
        std::cout << myFood << " is at index " << index;

    }else{
        std::cout << myFood << " is not in the array";
    }

    return 0;
}
//Linear Search
int searchArray(std::string array[], int size, std::string element){

    for(int i=0; i < size; i++){
        
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}