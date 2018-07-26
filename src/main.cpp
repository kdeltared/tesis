#include <iostream>

struct Test{
    int a;
    int b;
    int c;
};


int test(int a, int b){
    int c =  a + b;
    return c;
}

void test_struct(Test *a){
    a->c = a->a + a->b;
    return;
}

void test_func(void (*func)(Test *), Test *a){
    func(a);
}


int main(){
    std::cout << "Hola\n";
    std::cout << "Hola2\n";
    std::cout << "Hola3\n";

    int a;

    // std::cin >> a;
    a = 45;
    std::cout << a << std::endl;

    int res = test(a, 10);
    std::cout << res << std::endl;

    if(a >= 20){
        std::cout << "if\n";
    }else{
        std::cout << "else\n";
    }

    Test my_struct;

    my_struct.a = 30;
    my_struct.b = 50;

    test_struct(&my_struct);

    std::cout << my_struct.c << std::endl;

    my_struct.a = 50;
    test_func(test_struct, &my_struct);

    std::cout << my_struct.c << std::endl;

    return 0;
}
