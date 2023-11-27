/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Coursera1> 
 * @brief <Assignment 1 for Embedded Systems Coursera course. Simple application that performs
 *         statistical analytics on a a dataset.>
 * 
 *
 * @author <Rudyard Pue>
 * @date <26 November 2023 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


//Function accepts array and size of array and prints statistics including minimum, maximum, mean, and median.
void print_statistics(int test[], int size) {

    printf("\nThe maximum value of the array is: %d", find_maximum(test, SIZE));
    printf("\nThe minimum value of the array is: %d", find_minimum(test, SIZE));
    printf("\nThe median value of the array is: %d", find_median(test, SIZE));
    printf("\nThe mean value of the array is: %d", find_mean(test, SIZE));

}

//Function accepts array and size of array and prints the array to the screen
void print_array(unsigned char test[], int size) {

    printf("\nThe array values are: ");
  
    for (int i = 0; i < size; ++i) {
      
        printf("%d ", test[i]);
      
    }
  
    printf("\n");

}

//Function accepts array and size of array and returns the median value of an array
int find_median(unsigned char test[], int size) {

    if (size % 2 != 0) {

        return (double)test[size / 2];

    }

    int mid1 = test[(size - 1) / 2];
    int mid2 = test[size / 2];
    return (int)(mid1 + mid2) / 2;
  
}

//Function accepts array and size of array and returns the mean of an array
int find_mean(unsigned char test[], int size) {

    if (size == 0) {

        return 0.0;

    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {

        sum += test[i];

    }

    return (int)sum / size;
  
}

//Function accepts array and size of array and returns the maximum value of an array
int find_maximum(unsigned char test[], int size) {

    if (size == 0) {

        return 0;

    }

    int maximum = test[0];  

    for (int i = 1; i < size; ++i) {

        if (test[i] > maximum) {

            maximum = test[i];

        }
    }

    return maximum;

}

//Function accepts array and size of array and returns the minimum of an array
int find_minimum(unsigned char test[], int size) {

    if (size == 0) {
       
        return 0;
    }

    int minimum = test[0];  

    for (int i = 1; i < size; ++i) {

        if (test[i] < minimum) {

            minimum = test[i];

        }

    }

    return minimum;
}

//Function accepts array and size of array and sorts the array from largest to smallest
void sort_array(unsigned char test[], int size) {

    for (int i = 0; i < size - 1; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {

            if (test[j] < test[j + 1]) {

                int temp = test[j];
                test[j] = test[j + 1];
                test[j + 1] = temp;

            }
        }
    }
}

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90 };

    print_array(test, SIZE);
    sort_array(test, SIZE);
    print_statistics(test, SIZE);


}
