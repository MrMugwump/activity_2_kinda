#include <stdio.h>        // printf
#include <assert.h>       // assert
#include <limits.h>       // named constants for min, max of C integer data types


float sales_example(float item_cost, unsigned short num_items, float tax);

// TODO: (Task 2) Put declaration of loop_example here

void utype_sizes();

// TODO: (Task 4) Put declaration of stype_sizes here



int main() {
    // TASK 1: sales example
    float total1;
    total1 = sales_example(3.94, 4, 0.06);
    printf("Total1 = $%.2f\n", total1);
    // TODO: Test on multiple calls, then add assert statements here

    // TASK 2: loop experiment
    // TODO: place function call here

    // TASK 3: unsigned integer types, sizes, and maximums
    utype_sizes();

    // TASK 4: signed integer types, sizes, mins and maxs
    // TODO: place function call here

    return 0;
}


/** TODO TASK 1:
    * Complete the function below to implement the simple sales example
    */
float sales_example(float item_cost, unsigned short num_items, float tax) {
    // TODO: Complete this definition (removing the default return)
    return 0.0;
}

/** TODO TASK 2:
    * Create your loop_example function here
    */

/** TODO TASK 3:
    * Add print statements to print the max values and sizes of each unsigned
    * integer type (short, int, long), based on the example of unsigned char.
    */
void utype_sizes() {
	printf("unsigned char | max: %hu | size: %zu\n", 
           (unsigned char) UCHAR_MAX, 
           sizeof(unsigned char));
}

/** TODO TASK 4:
    * Create your stype_sizes function here to print min/max values and sizes of 
    * signed integer types: char, short, int, long
    */
