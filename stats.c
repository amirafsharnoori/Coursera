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
 * @file	stats.c
 * @brief	fuction bodies of first assessment
 *
 * @author	Amir AfsharNoori
 * @date	July 31 2021
 *
 *****************************************************************************/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */

//
    print_statistics(&test,SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char * testArray,unsigned int arraySize)
{
    unsigned char max=0, min=0;
    float mean=0, median=0;

    printf("The original array:\n");
    print_array(testArray,arraySize);
    sort_array(testArray,arraySize);
    printf("The Sorted array:\n");
    print_array(testArray,arraySize);

    max= find_maximum(testArray,arraySize);
    printf("The maximum is: %d\n", max);

    min= find_minimum(testArray,arraySize);
    printf("The minimum is: %d\n", min);

    mean=find_mean(testArray,arraySize);
    printf("The mean value is: %0.2f\n", mean);

    median=find_median(testArray,arraySize);
    printf("The median value is: %0.2f\n", median);
}

void print_array(const unsigned char * testArray,unsigned int arraySize)
{
    for(int i=0;i<arraySize;i=i+4)
    {
        printf("%dth element is:%d\t\t%dth element is:%d\t\t%dth element is:%d\t\t %dth element is:%d\n"
               ,i,testArray[i],i+1,testArray[i+1],i+2,testArray[i+2],i+3,testArray[i+3]);
    }
    printf("\n********************************************************\n");
}

float find_median(unsigned char * testArray,unsigned int arraySize)
{
    unsigned char p;
    sort_array(testArray,arraySize);

    if (arraySize%2)
    {
        p=arraySize/2;
        return testArray[p];
    }
    else
    {
        p=(arraySize+1)/2;
        return (testArray[p]+testArray[p+1])/2;
    }

}

float find_mean(unsigned char * testArray,unsigned int arraySize)
{
    float sum=0;
    for(int i=0;i<arraySize;i++)
        sum+=testArray[i];
    return sum/arraySize;
}

unsigned char find_maximum(unsigned char * testArray,unsigned int arraySize)
{
    unsigned char max=testArray[0];
    for(int i=0;i<arraySize;i++)
    {
        if(testArray[i]>max)  max=testArray[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char * testArray,unsigned int arraySize)
{
    unsigned char min=testArray[0];
    for(int i=0;i<arraySize;i++)
    {
        if(testArray[i]<min)  min=testArray[i];
    }
    return min;
}

void sort_array(unsigned char * testArray,unsigned int arraySize)
{
    unsigned char index=0,temp=0;
    for(int i=0;i<arraySize;i++)
    {
        for(int j=i;j<arraySize;j++)
            if(testArray[i]<testArray[j])
            {
                temp=testArray[i];
                testArray[i]=testArray[j];
                testArray[j]=temp;
            }
    }
}



