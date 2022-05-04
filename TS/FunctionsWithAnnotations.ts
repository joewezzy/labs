//Explicit functions
function getDate(): number {
  return new Date().getDate();
}

function printHello(): void {
  console.log('Hello World!');
}

// Implicit functions with parameters using `const` keyword
const mul = (a, b) => {
  return a * b;
}

// functions with optional parameters
function add(a, b?) {
  return a + b;
}

// functions with default parameters
const exp = (a, x = 2) => {
  return a ** x;
}

// Named parameters
const divide = ({ dividend, divisor }: {dividend: number, divisor: number}) => {
  return dividend / divisor;
}

// Rest parameters
function sub(a, b: number, ...rest: number[]) {
  return a + b + rest.reduce((p, c) => p + c, 0);
}

// function Type Alias
type Negate = (value: number) => number;

// in the functions, the parameter `value` automatically gets assigned the type `number` from the type `Negate`.
const negateFunction: Negate = (value) => value * -1;