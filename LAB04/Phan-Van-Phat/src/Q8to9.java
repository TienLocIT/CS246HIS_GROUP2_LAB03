import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q8to9 {

	@Test
	public void testSortAsc1() {
		Sort s = new Sort();
		s.number1= 6;
		s.number2= 5;
		s.sortAsc();
		assertEquals(5, s.number1);
		assertEquals(6, s.number2);
	}
	@Test
	public void testSortAsc2() {
		Sort s = new Sort();
		s.number1= 5;
		s.number2= 6;
		s.sortAsc();
		assertEquals(5, s.number1);
		assertEquals(6, s.number2);
	}
	
	@Test
	public void testSortDes1() {
		Sort s = new Sort();
		s.number1= 6;
		s.number2= 5;
		s.sortDesc();
		assertEquals(6, s.number1);
		assertEquals(5, s.number2);
	}
	@Test
	public void testSortDes2() {
		Sort s = new Sort();
		s.number1= 5;
		s.number2= 6;
		s.sortDesc();
		assertEquals(5, s.number1);
		assertEquals(6, s.number2);
	}

}

