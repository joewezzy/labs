// In this section, we'll cover ts type alias and interfaces

// Type Alias

type CarType = string;
type CarColor = string;
type CarWeight = number;
type CarModel = string;
type Cars = {
  type: CarType,
  color: CarColor,
  weight: CarWeight,
  model: CarModel
}

let type: CarType = 'Hyundia';
let color: CarColor = 'black';
let weight: CarWeight = 123;
let model: CarModel = 'Elantra';
let car: Cars = {
  type: type,
  color: color,
  weight: weight,
  model: model
};



// Interface

interface Point {
  x: number,
  y: number
}

let point: Point = {
  x: 12,
  y: 3
} 

// Extending Interfaces
interface Area {
  getArea: () => number;
}

interface Volume extends Area {
  getVolume: () => number;
}

interface Rectangle {
  length: number,
  breadth: number
}

interface ColoredRectangle extends Rectangle {
  color: string
}

let coloredRectangle: ColoredRectangle = {
  length: 12,
  breadth: 5,
  color: 'green'
}