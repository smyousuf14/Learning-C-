/**
 * C++ Storage classes. There are five types of storage classes in c++. Automatic, Register, Static, External, 
 * and Mutable. 
 * */

/**
 * The register LOCAL variable allocates memory in register than RAM. Its size is same of register size. It has a faster access than other variables.
 * It is recommended to use register variable only for quick access such as in counter.
 * Note: We can't get the address of register variable.
 * */
int main()
{
    register int counter = 0;
    
    
    return 1;
}
