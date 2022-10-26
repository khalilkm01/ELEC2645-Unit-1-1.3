#include <iostream>
#include <map>

int main(){
    std::map<std::string,int> grades;
    grades["Kabir"] = 82;
    grades["Jamie"] = 12;
    grades["Faser"] = 74;
    grades["Dan"] = 64;
    std::string highest_grade = grades.begin()->first;
    
    for (std::map<std::string,int>::iterator i = grades.begin(); i != grades.end(); i++){

        if (i->second > grades[highest_grade]){
            highest_grade = i->first;
        }
    }
    std::cout <<"Highest grade was achieved by: " << highest_grade << " with a grade of " << grades[highest_grade] << "/100" <<std::endl;
}