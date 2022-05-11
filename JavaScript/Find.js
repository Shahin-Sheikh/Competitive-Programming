const ages = [10, 18, 20, 23];

function checkAge(age) {
	return age > 18;
}

const result = ages.find(checkAge);

console.log(result);
