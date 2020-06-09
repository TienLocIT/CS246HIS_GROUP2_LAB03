package unittest;

public class MaxNumber {
	public int max3(int number1, int number2, int number3) {
		if (number1 > number2)
			if (number1 > number3)
				return number1;
			else
				return number3;
		else if (number2 > number3)
			return number2;
		else
			return number3;
	}
	public int max2(int number1, int number2) {
		if (number1 > number2)
			return number1;
		else
			return number2;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
