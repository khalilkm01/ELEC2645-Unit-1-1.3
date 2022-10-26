
#include <complex>
#include <iostream>

int main(){
    
    double capacitance;
    double frequency;
    std::cin>> capacitance;
    std::cin>> frequency;

    std::complex<double> v;

    v= std::complex<double>(0,-1/(capacitance*frequency));
    std::cout<<v<<std::endl;
}