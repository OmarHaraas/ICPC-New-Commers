import 'dart:io';

void main() {
  String? expression = stdin.readLineSync();
  // stdout.write(expression);
  var operation = '-';
  for (var i = 0; i < expression!.length; i++) {
    if (expression[i] == '/' ||
        expression[i] == '*' ||
        expression[i] == '-' ||
        expression[i] == '+') {
      operation = expression[i];
      break; //now we have the operation.!
    }
  }
  var temp = expression.split(operation);
  // int.parse(temp[0])
  // int.parse(temp[1])
  switch (operation) {
    case '/':
      stdout.write(int.parse(temp[0]) ~/ int.parse(temp[1]));
      break;

    case '+':
      stdout.write(int.parse(temp[0]) + int.parse(temp[1]));
      break;

    case '-':
      stdout.write(int.parse(temp[0]) - int.parse(temp[1]));
      break;
    case '*':
      stdout.write(int.parse(temp[0]) * int.parse(temp[1]));
      break;
    default:
  }
}
