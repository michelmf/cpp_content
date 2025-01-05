// Remembering C++
#include <algorithm>
#include <iostream>
#include <cassert>
#include <vector>

#define OK 0

int main(int argc, char** argv) {

    std::vector<float> teste_vector{0, 1, 2, 3, 4, 5, 500};

    float a = 1;
    float b = 2.0;
    float c = a + b;

    std::cout << "Hello World!" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;

    assert(a + b == c);
    assert(
        std::all_of(
            teste_vector.begin(),
            teste_vector.end(),
            [](float x) -> bool { return x <= 10; }
        )
    );

    return OK;

}
