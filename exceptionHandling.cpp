#include <iostream>

using namespace std;

int main(){
    string word = "Sentence";
   try{
        cout << word.at(5) << endl;
   }catch(out_of_range& e){
       cout << "Exception: " << e.what();
   }
   
  try{
    //   int *array = new  int[99999999999999];
       throw runtime_error("Problem encountered!");
  }
  catch(exception&e){
      cout << "Exception: " << e.what();
  }
//   catch(out_of_range& e){
//       cout << "Exception: " << e.what();
//   }
//   catch(bad_alloc& e){
//       cout << "Exception: " << e.what();
//   }
    
    return 0;
}