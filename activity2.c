#include <stdio.h>        // printf
#include <assert.h>       // assert
#include <limits.h>       // named constants for min, max of C integer data types

// Ben Bridenbaugh
float sales_example(float item_cost, unsigned short num_items, float tax);

// TODO: (Task 2) Put declaration of loop_example here
void loop_example();

void utype_sizes();

// TODO: (Task 4) Put declaration of stype_sizes here



int main() {
    // TASK 1: sales example
    float total1;
    total1 = sales_example(3.94, 4, 0.06);
    printf("Total1 = $%.2f\n", total1);
    float total2 = sales_example(4,4,0.1);
    printf("Total2 = $%.2f\n",total2);
    float total3 = sales_example(1,3,0.09);
    printf("Total3 = $%.2f\n",sales_example(1,3,0.09));
    float total4 = sales_example(1,3,0.0);
    printf("Total4 = $%.2f\n",total4);

    // TODO: Test on multiple calls, then add assert statements here

    assert(total1 = (3.94*4)*1.06);
    assert(total2 = (4*4)*1.1);
    assert(total3 = (1*3)*1.09);
    assert(total4 = (1*3)*1);

    // TASK 2: loop experiment
    loop_example();

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

    float preTaxAmount = item_cost * num_items;
    float postTaxAmount = preTaxAmount * (1.0 + tax);
    if (tax == 0.0){
        printf("No Sales Tax\n");
    }
    return postTaxAmount;
}

/** TODO TASK 2:
    * Create your loop_example function here
    */
   void loop_example(){
    for (int i = 10; i < 26; i+=5)
    {
        printf("i = %d\n",i);
        printf("i^2 = %d\n", i*i);
    }

    
    
   }

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
