let bubbleSort = (arr) => {
  for(i = 0; i < arr.length; i++) {
      for(j = 0; j < arr.length; j++) {
          if (arr[j] > arr[j+1]) {
              arr.splice(j+2, 0, arr[j])
              arr.splice(j, 1)
          }
      }
  }
  return arr;
}

bubbleSort([1, 8, 3, 2, 9, 5, 4])