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

void print_statistics(int test[], int min, int max, int mean, int median)

//Function prints the array to the screen
void print_array(int test[])

//Function returns the median value of an array
int find_median(int test[])

//Function returns the mean of an array
int find_mean(int test[])

//Function returns the maximum of an array
int find_maximum(int test[])

//Function returns the minimum of an array
int find_minimum(int test[])

//Function sorts the array from largest to smallest
void sort_array(int test[])

#endif /* __STATS_H__ */
