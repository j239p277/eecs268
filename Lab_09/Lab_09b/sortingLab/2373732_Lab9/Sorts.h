#ifndef _SORTS_H_
#define _SORTS_H_

template <typename T>
void bubbleSort(T a[], int n);

template <typename T>
void insertionSort(T a[], int n);

template <typename T>
void selectionSort(T a[], int n);

template <typename T>
void quickSort(T a[], int n);

template <typename T>
void quickSort3(T a[], int n);

template <typename T>
void imergeSort(T a[], int n);

template <typename T>
void mergeSort(T a[], int n);

template <typename T>
void shellSort(T a[], int n);

template <typename T>
void radixSort(T a[], int n, int d, int b);

#include "bubbleSort.cpp"
#include "insertionSort.cpp"
#include "selectionSort.cpp"
#include "quickSort.cpp"
#include "mergeSort.cpp"
#include "shellSort.cpp"
#include "radixSort.cpp"

#endif
