import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q3 {
Advance3 a=new Advance3();
	@Test
	public void test1() {
		assertEquals(a.fibonacci(-1),-1);
	}
	@Test
	public void test2() {
		assertEquals(a.fibonacci(2),1);
	}
	@Test
	public void test3() {
		assertEquals(a.fibonacci(0),0);
	}
	@Test
	public void test4() {
		assertEquals(a.fibonacci(1),1);
	}
	@Test
	public void test5() {
		assertEquals(a.fibonacci(3),2);
	}
}
