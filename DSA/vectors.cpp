#include <iostream>
#include <vector>

using namespace std;
void vectorsFunctions(){
    vector<int> age;
    age = {55,34,75,23,12,34,16};
    // cout <<"size = " << age.size();
    // for(int u_age: age){ //for each loop
    //     cout << u_age << '\n';
    // }
    vector<char> alphabet(3,'a');
    alphabet.push_back('b');
    alphabet.push_back('c');
    alphabet.push_back('d');
    alphabet.pop_back();
  for(char alp: alphabet){
      cout << alp << '\n';
  }
  
  cout << "FRONT VALUE\n" ;
  cout<<alphabet.front() << '\n';
  cout << "BACK VALUE\n" ;
  cout<<alphabet.back() << '\n';
  cout << "Acces At Particular Index\n";
  cout << alphabet.at(4) << '\n';
}
void dynamicMemory(){
        cout << "DYNAMIC MEMORY\n";
    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(5);
    
    cout << vec.size() << endl;
    cout << vec.capacity()<<endl;
}
int main(){
    // vectorsFunctions();
    // dynamicMemory();
    
    vector<int> nums = {1,2,5,1,2,5,4};
    int ans = 0;
    for(int num: nums){
        ans ^= num; 
    }
    
 cout << ans;
 

    
    
    return 0;
}