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
 * @brief <Header file for coursera assignment 1 >
 *
 * 
 *
 * @author <Rudyard Pue>
 * @date <26 Nov 2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

//Prints the array stats to the screen
void print_statistics(int test[], int size);

//Function prints the array to the screen
void print_array(unsigned char test[], int size);

//Function returns the median value of an array
int find_median(unsigned char test[], int size);

//Function returns the mean of an array
int find_mean(unsigned char test[], int size);

//Function returns the maximum value of an array
int find_maximum(unsigned char test[], int size);

//Function returns the minimum of an array
int find_minimum(unsigned char test[], int size);

//Function sorts the array from largest to smallest
void sort_array(unsigned char test[], int size);

#endif /* __STATS_H__ */
