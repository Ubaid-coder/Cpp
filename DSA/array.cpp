#include <iostream>

void basics(){
    int marks[5] = {90, 10, 44, 70, 30};
    double price[] = {99.59, 104.6, 20.90};

    marks[0] = 88;
    // std::cout << marks[0] << '\n';
    

    int size = 4;
    int salary[size];

    // for(int i=0; i<size; i++){
    //     std::cout << marks[i] << '\n';
    // }

    for(int i=0; i<size; i++){
       std::cout << "Enter salary: ";
    std::cin >> salary[i] ;
   }
    for(int i=0; i<size; i++){
        std::cout << salary[i] << '\n';
    }
};

void smallestNum(){
    int nums[] = {5,20,70,40,-30,20,-5};
    int size = sizeof(nums)/sizeof(int);
    
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }
        smallest = std::min(nums[i], smallest);
    }

    std::cout  << "smalles = " << smallest << '\n';
}

void largetNum(){
    int nums[] = {5,20,70,40,-30,20,-5};
    int size = sizeof(nums)/sizeof(int);
    
    int largest = INT_MIN;
    int index;

    for(int i=0; i<size; i++){
        if(nums[i] > largest){
            largest = nums[i];
            index = i;
        }
        // largest = std::max(nums[i], largest);
        
    }

    std::cout  << "largest = " << largest << '\n';
    std::cout  << "largest number at Index= " << index << '\n';
}



int main()
{
    // smallestNum();
    largetNum();
    return 0;
}