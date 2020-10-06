#include <iostream>
#include <string>

/**
 * main
 * @brief reads username from standart input stream, writes greetings message 
 * to standart output stream
 * @returns 0 if no error occures
 */
int main(){
    std::string name;// Read name from standart input stream
    std::cin>>name;
    std::cout<<"Hello world from "<<name<<std::endl;// Write greeting string
    return 0;
}
