let sum = 0;
const numbers = [65, 44, 12, 4];
const res = numbers.forEach(myFunction);

function myFunction(item) {
	sum += item;
}

console.log(sum);
