/**
 * @author MadhavBahl
 * @date 16/01/2019
 */

/* ========================================= */
/* ===== Array Partition Problem In JS ===== */
/* ========================================= */

function partition (array, size) {
    let partitionedArray = [];

    for (let element of array) {
        let partition = partitionedArray[partitionedArray.length - 1];
        
        if (!partition || partition.length === size) {
            partitionedArray.push ([element]);
        } else {
            lastEle.push (element);
        }
    }

    return partitionedArray;
}

// Test our partition function
console.log(partition ([1,2,3,4,5,6,7,8], 2));
console.log(partition ([1,2,3,4,5,6,7], 2));
console.log(partition ([1,2,5,3,4,6,7,1,2,4,6,4,5], 3));
console.log(partition ([1,2,5,3,4,6,7,1,2,4,6,4,5], 4));

/**
 * Required Output
 * [ [ 1, 2 ], [ 3, 4 ], [ 5, 6 ], [ 7, 8 ] ]
 * [ [ 1, 2 ], [ 3, 4 ], [ 5, 6 ], [ 7 ] ]
 * [ [ 1, 2, 5 ], [ 3, 4, 6 ], [ 7, 1, 2 ], [ 4, 6, 4 ], [ 5 ] ]
 * [ [ 1, 2, 5, 3 ], [ 4, 6, 7, 1 ], [ 2, 4, 6, 4 ], [ 5 ] ]
 */