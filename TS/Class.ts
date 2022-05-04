class User {
  private name: string;
  private readonly age;

  constructor(name: string, age: number = 12, private color: string = 'dark') {
    this.name = name;
    this.age = age;
  }

  getName() {
    return this.name;
  }

  getAge() {
    return this.age;
  }

  getComplexion(): string {
    return this.color;
  }

  printUser() {
    console.log(`User's name is ${this.name} and ${this.age} years old! ${this.color} in complexion. `);
  }
}

const person = new User('john', 25);
person.printUser();
console.log(person.getAge);
console.log(person.getName);
console.log(person.getComplexion);