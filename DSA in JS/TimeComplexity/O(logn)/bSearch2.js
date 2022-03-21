const binarySearch = (list, item) => {
  let low = 0;
  let high = list.length - 1;

  while (low <= high) {
    const mid = Math.floor((low + high) / 2);
    const guess = list[mid];

    if (guess === item) {
      //   return mid;
      return mid;
    }

    if (guess > item) {
      return high = mid - 1;
    } else {
      return low = mid + 1;
    }
  }

  //return null; //if not found
  return console.log("value not found");
};

console.log(binarySearch([1, 2, 3, 4, 5, 6, 7, 12, 13, 14, 15, 16, 20, 25, 40, 70], 11));
