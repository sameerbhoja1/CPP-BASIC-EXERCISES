#include<iostream>

int main() {
int* arr = New int[5];
for (int i = 0; i<5; ++i) {
arr[i] = i + 1;
}

for (int i = 0; i<5; ++i) {
std::cout << arr[i] <<" "; // Output: 1 2 3 4 5
}
std::cout << std::endl;
delete[] arr; // Deallocate the array memory

return 0;
}

