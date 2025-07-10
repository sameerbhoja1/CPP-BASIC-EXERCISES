#include<iostream>
#include<string>

struct Person {
std::string name;
int age;
float height;
};

int main() {
Person Alice = {"Alice", 34, 5.4f};
std::cout <<"Name: "<< Alice.name <<"\nAge: "<<Alice.age<<"\nHeight: "<<Alice.height<< std::endl;
return 0;
}

