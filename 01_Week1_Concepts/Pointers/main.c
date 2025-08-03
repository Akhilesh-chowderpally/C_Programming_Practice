#include<stdio.h>
int main()
{
    // POINTERS

    int var = 50;  
    int *p_var; 

    p_var = &var;

    printf("contents inside the variable by using variable name %d \n", var);
    printf("address of var by pointer * %p\n", p_var);
    printf("address of var by address of operator(&) %p\n", &var);

    printf("whats inside the variable by dereference operator (*) %d\n", *p_var);


    *p_var = 100;
    printf("value inside var after changing it by using * operator %d \n", var);

    // SIZE OF FUNCTION

    printf("size of int %zu \n", sizeof(int));
    printf("size of char %zu \n", sizeof(char));
    printf("size of short int %zu \n", sizeof(short));
    printf("size of long int %zu \n", sizeof(long));
    printf("size of float %zu \n", sizeof(float));
    printf("size of double %zu \n", sizeof(double));

    // POINTER ARTHEMATIC 

    int arr[5] = {100, 120, 140, 160};
    int *p_arr;
    p_arr = &arr[0];
    printf("address of index 0 : %p\t", p_arr);     printf("value %d\n", *p_arr);
    printf("address of index 1 : %p\t", p_arr+1);   printf("value %d\n", *(p_arr+1));  /* *(p_arr + 1) will point to the next address location not the next value */ 
    printf("address of index 2 : %p\t", p_arr+2);   printf("value %d\n", *(p_arr+2));  // p_ar + 1 will point to the next address value
    printf("address of index 3 : %p\t", p_arr+3);   printf("value %d\n", *(p_arr+3));

    // BIT WISE OPERATORS OR | , AND &, XOR ^, NOT ~, LEFT SHIFT <<, RIGHT SHIFT >>

    unsigned char led_register = 0b00000000; // All LEDs are OFF

    // 1. Set bit 2 (turn LED 2 ON)
    led_register |= (1 << 2); // 0b00000000 | 0b00000100 = 0b00000100
    printf("After setting bit 2: %d\n", led_register); // Prints 4

    // 2. Set bit 5 (turn LED 5 ON)
    led_register |= (1 << 5); // 0b00000100 | 0b00100000 = 0b00100100
    printf("After setting bit 5: %d\n", led_register); // Prints 36

    // 3. Clear bit 2 (turn LED 2 OFF)
    led_register &= ~(1 << 2); // 0b00100100 & 0b11111011 = 0b00100000
    printf("After clearing bit 2: %d\n", led_register); // Prints 32

    // 4. Toggle bit 5 (turn LED 5 OFF, since it was ON)
    led_register ^= (1 << 5); // 0b00100000 ^ 0b00100000 = 0b00000000
    printf("After toggling bit 5: %d\n", led_register); // Prints 0
    return 0;

}