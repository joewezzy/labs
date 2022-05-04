// TS array has a specific syntax. 

// Declare array
const names: string[] = [];


// Readonly array
const integers: readonly number[] = [1, 2, 3, 4];


// Generic type array 
let fulNname: Array<string> = ['first', 'last'];


// Type Inference
const adult = [true, false];


// fixed length
let fruits: string[] = ['Apple', 'Grape'];


// TS array can hold values of multiple datatypes. The variable type is infered either explicitly or inplicitly.
let arr = [1, 'Apple', false];


// Accessing array elements using the for loop
for(let i in arr) { console.log(arr[i]);}

/**
 * 
 * TS Array Methods
 * 
 * Method            ===>  	Description
 * ......................................
 * 
 * concat()          ===>  	Joins two arrays and returns the combined result
 * copyWithin()      ===>  	Copies a sequence of elements within the array
 * fill()            ===>  	Fills the array with a static value from the provided start index to the end index
 * includes()        ===>  	Checks whether the array contains a certain element
 * indexOf()         ===>  	Returns the index of the first match of a value in the array (-1 if not found)
 * join()            ===>  	Joins all elements of the array into a string
 * lastIndexOf()     ===>  	Returns the last index of an element in the array
 * pop()             ===>  	Removes the last element of the array and return that element
 * push()            ===>  	Adds new elements to the array and returns the new array length
 * sort()            ===>  	Sorts all the elements of the array
 * shift()           ===>  	Removes and returns the first element of the array
 * splice()          ===>  	Adds or removes elements from the array
 * slice()           ===>  	Extracts a section of the array and returns the new array
 * toString()        ===>  	Returns a string representation of the array
 * toLocaleString()  ===>  	Returns a localized string representing the array
 * unshift()         ===>  	Adds one or more elements to the beginning of the array
 */

function varDemo(a: number) {
  var a = 10;
}