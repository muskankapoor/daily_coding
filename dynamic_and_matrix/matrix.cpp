// iven a matrix of integers and coordinates of a rectangular region within the matrix, find the sum of numbers falling inside the rectangle. Our program will be called multiple times with different rectangular regions from the same matrix.

// // not optimatal solution two for loops starting from top left and enidng bottom right 
// def matrixRegionSum1(matrix, A, D):
//     if len(matrix)==0:
//         return
//     totalSum=0
//     for i in range(A[0], D[0]+1):
//         for j in range(A[1], D[1]+1):
//             totalSum+=matrix[i][j]
//     return totalSum

idef precomputeSums(matrix):
    topRow, bottomRow=(0, len(matrix)-1)
    leftCol, rightCol=(0, len(matrix[0])-1)
    sums=[[0]*(rightCol-leftCol+1) for i in range(bottomRow-topRow+1)]
    sums[topRow][leftCol]=matrix[topRow][leftCol]
 
    for col in range(leftCol+1, rightCol+1):
        sums[topRow][col]=sums[topRow][col-1]+matrix[topRow][col]
    for row in range(topRow+1, bottomRow+1):
        sums[row][leftCol]=sums[row-1][leftCol]+matrix[row][leftCol]
 
    for col in range(leftCol+1, rightCol+1):
        columnSum=matrix[topRow][col]
        for row in range(topRow+1, bottomRow+1):
            sums[row][col]=sums[row][col-1]+matrix[row][col]+columnSum
            columnSum+=matrix[row][col]
 
    return sums
