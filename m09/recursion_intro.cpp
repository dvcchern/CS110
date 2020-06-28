#include <iostream>
#include <vector>
 
void loop( std::vector<int> &arr, int index ) {
    while( index>=0 ) std::cout << arr[index--] << " ";
}
 
void recur( std::vector<int> &arr, int index ) {
    if(index<0) return; 
    // if( index>=0 ) // when without the return above!
    {
        std::cout << arr[index--] << " ";
        recur(arr, index);
        return;
    }
}
 
int main() {
    std::vector<int> arr{1,2,3,4,5};
    int index=arr.size()-1;
    
    loop( arr, index );
    std::cout << std::endl;
    
    recur( arr, index );
}
