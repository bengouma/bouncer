#include <iostream>

char* encryptPass(char *pass) {
    return pass;
}

void manipulateVal(int &num) {
    num = 1;
}

int main() {
    char test[] = "hi\n";
    std::cout << encryptPass(test);
    std::cout << "hello\n";

    int i = 0;
    std::cout << &i;
    std::cout << "\n";

    manipulateVal(i);
    std::cout << &i;
    std::cout << "\n";
    
    return 0;
}