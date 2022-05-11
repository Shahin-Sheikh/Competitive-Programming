const ages = [10, 18, 20, 23];

const res = ages.findIndex(checkAge);

function checkAge(age) {
	return age > 18;
}

console.log(res);
