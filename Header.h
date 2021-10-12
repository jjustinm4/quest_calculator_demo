float division(float number1, float number2)
{
	//handling the divide by zero error
	if (number2 == 0)
	{
		return 0;
	}
	else 
	{
		return number1 / number2;
	}
}
float addition(float number1, float number2) 
{
	return number1 + number2;
}
float substraction(float number1, float number2) {
	return number1 - number2;
}
float multiplication(float number1, float number2) {
	return number1 * number2;
}
