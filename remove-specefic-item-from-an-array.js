const array = [2, 5, 9,12,13,54,98,45,67];

console.log(array);

const index = array.indexOf(54);
if (index > -1) {
  array.splice(index, 1);
}

console.log(array); 