#include <iostream>
using namespace std;


def partition1(arr, left, right, pivotIndex):
    arr[right], arr[pivotIndex]=arr[pivotIndex], arr[right]
    pivot=arr[right]
    swapIndex=left
    for i in range(left, right):
        if arr[i]<pivot:
            arr[i], arr[swapIndex] = arr[swapIndex], arr[i]
            swapIndex+=1
    arr[right], arr[swapIndex]=arr[swapIndex], arr[right]
    return swapIndex
 
def kthLargest1(arr, left, right, k):
    if not 1<=k<=len(arr):
        return
    if left==right:
        return arr[left]
 
    while True:
        pivotIndex=random.randint(left, right)
        pivotIndex=partition1(arr, left, right, pivotIndex)
        rank=pivotIndex-left+1
        if rank==k:
            return arr[pivotIndex]
        elif k<rank:
            return kthLargest1(arr, left, pivotIndex-1, k)
        else:
            return kthLargest1(arr, pivotIndex+1, right, k-rank)


def partition2(arr, left, right, pivot):
    swapIndex=left
    for i in range(left, right+1):
        if arr[i]<pivot:
            arr[i], arr[swapIndex] = arr[swapIndex], arr[i]
            swapIndex+=1
    return swapIndex-1
 
def kthLargest2(arr, left, right, k):
    length=right-left+1
    if not 1<=k<=length:
        return
    if length<=5:
        return sorted(arr[left:right+1])[k-1]
 
    numMedians=length/5
    medians=[kthLargest2(arr, left+5*i, left+5*(i+1)-1, 3) for i in range(numMedians)]
    pivot=kthLargest2(medians, 0, len(medians)-1, len(medians)/2+1)
    pivotIndex=partition2(arr, left, right, pivot)
    rank=pivotIndex-left+1
    if k<=rank:
        return kthLargest2(arr, left, pivotIndex, k)
    else:
