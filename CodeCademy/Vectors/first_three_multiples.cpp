#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num){
    std::vector<int> multiples;
    int i = 0;
 
    for(int j = num; i < 3; j++){
      if(j % num == 0){
        multiples.push_back(j);
        i++;
        }
    }

    return multiples;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}