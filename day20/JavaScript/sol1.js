/**
 * @author MadhavBahl
 * @date 16/01/2019
 */

/* ========================================= */
/* ===== Array Partition Problem In JS ===== */
/* ========================================= */

function partition (array, size) {
    let partitionedArray = [],
        toBeAdded = [];

    for (let i=0; i<array.length; i++) {
        if ((i)%size === 0) {
            if (toBeAdded.length > 0)  partitionedArray.push (toBeAdded);
            toBeAdded = [];
        }
        toBeAdded.push (array[i]);
    }
    if (toBeAdded.length > 0)  partitionedArray.push (toBeAdded);
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