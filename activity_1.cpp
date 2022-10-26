
#include <string>
#include <vector>
#include <iostream>

int vowel_counter(std::string the_string);

int main() {
    std::string initial_string = "someString";
    std::cout<< vowel_counter(initial_string)<<std::endl;
}

int vowel_counter(std::string the_string) {
    int count= 0;
    std::string vowels = "aeiou";
    for (int i = 0; i<vowels.length(); i++){
        for (int j = 0; j< the_string.length(); j++) {
            if (the_string[j] == vowels[i]){
                count = count + 1;
            }
        }

    }

    return count;
}