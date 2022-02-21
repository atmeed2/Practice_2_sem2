//
//  main.cpp
//  Practice_2_sem2
//
//  Created by Leonid Zemtsov on 21.02.2022.
//

#include <iostream>
#include <string>
#include <sstream>


/* Первое Задание */
void task1() {
    std::cout << "Hello World" << std::endl;
}


/* Второе задание */
void task2(std::string s, std::string sentence) {
    
    std::string word;
    int count = 0;

    
    for ( std::istringstream is( sentence ); is >> word; ){
        
        count ++;
        
        if (word == s) {
            std::cout << "Расположение: "<< count << " Слово: " << word << std::endl;
        }
        
    }
}

/* Третье задание */
void task3(char *s) {
    short i;
    long res = 0;
   
    for ( i = 0 ; i < sizeof (long) * 8 && s[i] ; ++i ){
       res <<= 1;
       res |= (s[i] - '0');
    }
    

    std::cout << res << std::endl;
}

/* Четвертое задание */
void task4(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    std::cout << bin << std::endl;
}


int main(int argc, const char * argv[]) {
    
    task1();
    
    task2("Привет", "hello Привет hola Привет прив");
    
    task3("101");
    
    task4(5);
    
    
    return 0;
}
