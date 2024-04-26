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
 * @file stats.h
 * @brief header file of stats.c
 *
 * Declarations of functions.
 *
 * @author Joaquin Zepeda V
 * @date 24/04/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the elements of an array.
 *
 * This function takes an array and its length as input and prints
 * all elements of the array to the console.
 *
 * @param array_test The array to be printed.
 * @param length The length of the array.
 * @return void
 */
void print_array(unsigned char* array_test, unsigned int length);

/**
 * @brief Prints various statistics of an array.
 *
 * This function takes the median, mean, maximum, and minimum values
 * and prints them to the console.
 *
 * @param median The median value of the array.
 * @param mean The mean value of the array.
 * @param max The maximum value of the array.
 * @param min The minimum value of the array.
 * @return void
 */
void print_statistics(int median, float mean, int max, int min);

/**
 * @brief Finds the median of an array.
 *
 * This function takes an array and its length as input and calculates
 * the median value of the array.
 *
 * @param array_test The array for which the median is calculated.
 * @param length The length of the array.
 * @return median The median value of the array.
 */
int find_median(unsigned char* array_test, unsigned int length);

/**
 * @brief Finds the mean of an array.
 *
 * This function takes an array and its length as input and calculates
 * the mean value of the array.
 *
 * @param array_test The array for which the mean is calculated.
 * @param length The length of the array.
 * @return mean The mean value of the array.
 */
float find_mean(unsigned char* array_test, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 *
 * This function takes an array and its length as input and finds
 * the minimum value in the array.
 *
 * @param array_test The array for which the minimum is found.
 * @param length The length of the array.
 * @return minimum The minimum value of the array.
 */
int find_minimum(unsigned char* array_test, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 *
 * This function takes an array and its length as input and finds
 * the maximum value in the array.
 *
 * @param array_test The array for which the maximum is found.
 * @param length The length of the array.
 * @return maximum The maximum value of the array.
 */
int find_maximum(unsigned char* array_test, unsigned int length);

/**
 * @brief Finds the maximum value in a sorted array.
 *
 * This function takes a sorted array and its length as input and finds
 * the maximum value in the array.
 *
 * @param sorted_array The sorted array for which the maximum is found.
 * @param length The length of the array.
 * @return maximum The maximum value of the array.
 */
unsigned char* sorted_array(unsigned char* sorted_array, unsigned int length);

#endif /* __STATS_H__ */
