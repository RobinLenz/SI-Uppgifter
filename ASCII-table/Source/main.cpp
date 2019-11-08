#include <iostream>
#include <bitset>

int main()
{
    std::cout << sizeof(char) << std::endl;
    
    unsigned char hej;
    unsigned char hej2;
    unsigned char hej3;
    unsigned char hej4;

    std::string binary;
    std::string binary2;
    std::string binary3;
    std::string binary4;

    for (int i = 0; i < 4; i++)
        std::cout << "Dec\tBin\t\tValue\t\t";
    std::cout << std::endl;
    
    for (int i = 0; i < 64; i ++)
    {
        binary = std::bitset<8>(i).to_string();
        binary2 = std::bitset<8>(i+64).to_string();
        binary3 = std::bitset<8>(i+64*2).to_string();
        binary4 = std::bitset<8>(i+64*3).to_string();
        
        hej = i;
        hej2 = i+64;
        hej3 = i+64*2;
        hej4 = i+64*3;

        if (i < 32)
            std::cout << i << "\t" << binary << "\t" << "nun";
        else
            std::cout << i << "\t" << binary << "\t" << hej;
        
        std::cout << "\t\t" << int(hej2) << "\t" << binary2 << "\t" << hej2;
        std::cout << "\t\t" << int(hej3) << "\t" << binary3 << "\t" << hej3;
        std::cout << "\t\t" << int(hej4) << "\t" << binary4 << "\t" << hej4 << std::endl;
    }

    std::cout <<"\nDone!" << std::endl;
    return 0;
}