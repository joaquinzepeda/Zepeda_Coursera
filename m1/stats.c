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
 * @file stats.c
 * @brief Stats for assignment week 1 
 *
 * Code for statistic calculation including minimum, maximum, mean and median.
 *
 * @author Joaquin Zepeda
 * @date 24/04/2024
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  struct array_dataset {
    unsigned char* array;
    unsigned char* sorted_array;
    int median;
    int mean;
    int max;
    int min;
  };

  struct array_dataset array_test;
  array_test.array = test;

  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  array_test.sorted_array = sorted_array(test, SIZE);
  array_test.median = find_median(array_test.sorted_array, SIZE);
  array_test.mean = find_mean(test, SIZE);
  array_test.max = find_maximum(test, SIZE);
  array_test.min = find_minimum(test, SIZE);

  print_statistics(array_test.median, array_test.mean, array_test.max, array_test.min);

}


/* Add other Implementation File Code Here */

void print_array(unsigned char* array_test, unsigned int length){
    printf("Array:\n");
      for (int i = 0; i < length; i++) {
        printf("%u ", array_test[i]);
    }
    printf("\n");
}

void print_statistics(int median, float mean, int max, int min){
    printf("Statistics values:\n");
    printf("Median: %d\n", median);
    printf("Mean: %.2f\n", mean);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

int find_median(unsigned char* array_test_sorted, unsigned int length){

    // take the middle element for the median
    int median = length / 2;
    if (length % 2 == 0) { // par
        return (array_test_sorted[median- 1] + array_test_sorted[median]) / 2;
    } else { //impar
        return array_test_sorted[median];
    }
}

float find_mean(unsigned char* array_test, unsigned int length){
    float sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array_test[i];
    }
    return sum / length;
}

int find_minimum(unsigned char* array_test, unsigned int length){
    int min = array_test[0];
    for (int i = 1; i < length; i++) {
        if (array_test[i] < min) {
            min = array_test[i];
        }
    }
    return min;
}

int find_maximum(unsigned char* array_test, unsigned int length){
    int max = array_test[0];
    for (int i = 1; i < length; i++) {
        if (array_test[i] > max) {
            max = array_test[i];
        }
    }
    return max;
}

unsigned char* sorted_array(unsigned char* array, unsigned int length){
      for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;

}