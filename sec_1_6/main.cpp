#include <iostream>
#include <cstdlib>



int main(int argc, char** argv) {
    int i=1, j=1000000;


//    std::cout << "Input i: ";
//    std::cin >> i;
//
//    std::cout << "Input j: ";
//    std::cin >> j;
    int maxLength=-1;
    int maxLengthNumber=1;

    for( int m=i; m<=j; m++) {
        size_t n=m; //113383;
        int length=1;
        std::cout << "Testing n= "<< n << std::endl;

        if 

        while(n!= 1) {
            // std::cout << n << " ";
            n= (n%2 == 0)? n/2: n*3+1;
            length++;
        }

        if( length > maxLength) {
            maxLength=length;
            maxLengthNumber=m;
        }

    }

    std::cout << std::endl;
    std::cout << "The max cycle length is " << maxLength <<std::endl; 
    std::cout << "The max cycle length number is " << maxLengthNumber <<std::endl; 


    return EXIT_SUCCESS;
}




