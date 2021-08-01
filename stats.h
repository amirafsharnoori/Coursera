/*****************************************************************************
* 		Copyright (C) 2021 by Amir AfsharNoori
*
* 		Redistribution, modification or use of this software in source or binary
* 		forms is permitted as long as the files maintain this copyright. Users are
* 		permitted to modify this and use it to learn about the field of embedded
* 		software. Amir AfsharNoori are not liable for any misuse of this material.
*
 *****************************************************************************/
/**
 * @file	stats.h
 * @brief	Header file for project
 *
 * @author	Amir AfsharNoori
 * @date	July 31 2021
 *
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__




/*****************************************************************************
 * @brief Function to print statistics of an array
 * This function prints the statistics of an array including minimum, maximum, mean, and median.
 * @param   array address
 * @param   array length
 * @return	void
 ****************************************************************************/
void print_statistics(unsigned char *,unsigned int);


/*****************************************************************************
 * @brief Function to print array
 * This function prints an array of data and a length, prints the array to the screen
 * @param   array address
 * @param   array length
 * @return	void
 ****************************************************************************/
void print_array(unsigned char *,unsigned int);


/*****************************************************************************
 * @brief   Function to find the median
 * This function finds the median of array.
 * @param   array address
 * @param   array length
 * @return	the median value
 ****************************************************************************/
int find_median(unsigned char *,unsigned int);


/*****************************************************************************
 * @brief   Function to find the mean
 * This function finds the mean value of the array
 * @param   array address
 * @param   array length
 * @return  the mean value
 ****************************************************************************/
int find_mean(unsigned char *,unsigned int);


/*****************************************************************************
 * @brief Function to find the max
 * This function finds the maximum value of array
 * @param   array address
 * @param   array length
 * @return	the maximum value
 ****************************************************************************/
unsigned char find_maximum(unsigned char *,unsigned int);

/*****************************************************************************
 * @brief Function to find the min
 * This function finds the minimum value of array
 * @param   array address
 * @param   array length
 * @return	the minimum value
 ****************************************************************************/
unsigned char find_minimum(unsigned char *,unsigned int);


/*****************************************************************************
 * @brief Function to sort the array
 * This function sorts the array
 * @param   array address
 * @param   array length
 * @return  void
 ****************************************************************************/
void sort_array(unsigned char *,unsigned int);

#endif // __STATS_H__
