function calculation(firstNumber,secondNumber,operation){
    switch(operation){
        case 'add' :
            return firstNumber + secondNumber;
        case 'subtrect' :
            return firstNumber - secondNumber;
        case 'multiply' :
            return firstNumber * secondNumber;
        case 'divide':
            return secondNumber !== 0
            ? firstNumber / secondNumber
            : "Error";
        default :
        return "invalid operation";

    }
}
console.log(calculation(3,6 ,'add'));
console.log(calculation(2,4 ,'subtrect'));
console.log(calculation(5,8 ,'multiply'));
console.log(calculation(4,2 ,'divide'));
