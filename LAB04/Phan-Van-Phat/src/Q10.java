import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q10 {
     Triaangle t=new Triaangle();
	@Test
	void test1() {
		t.number1=1;
		t.number2=2;
		t.number3=3;
		assertEquals(t.maxLength(),t.number2);
	}
	@Test
	void test2() {
		t.number1=3;
		t.number2=2;
		t.number3=1;
		assertEquals(t.maxLength(),t.number1);
	}
	@Test
	void test3() {
		t.number1=2;
		t.number2=3;
		t.number3=1;
		assertEquals(t.maxLength(),t.number2);
	}
	@Test
	void test4() {
		t.number1=-2;
		t.number2=-1;
		t.number3=-3;
		assertEquals(t.maxLength(),t.number2);
	}
	
	

}
