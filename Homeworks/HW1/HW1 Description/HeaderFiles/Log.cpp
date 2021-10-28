#include <iostream>
using namespace std;

void printMessage (char const *message){
    std::cout << message << std::endl;
}

int main(){
    char const *message = "Hello World\n";
    printMessage("Hello World");
}




