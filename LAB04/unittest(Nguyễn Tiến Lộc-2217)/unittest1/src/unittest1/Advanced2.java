package unittest1;

public class Advanced2 {
	public int sum(long number) {
		int sum = 0;
		long index;
		while (number != 0) {
			index = number % 10;
			sum += index;
			number /= 10;
		}
		return sum;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
