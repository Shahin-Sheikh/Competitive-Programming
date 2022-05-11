const obj = [15, 24, 56, 32];

const res = obj.every(checkAge);

function checkAge(age) {
	return age > 18;
}
console.log(res);
