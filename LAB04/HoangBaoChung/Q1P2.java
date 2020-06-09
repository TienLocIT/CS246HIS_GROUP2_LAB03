package UnitTest;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q1P2 {

	Question1P2 a=new Question1P2();
	@Test
	public void testUSCLN() {
		assertEquals(a.USCLN(15, 10),5);
	}
	@Test
	public void testBSCNN() {
		assertEquals(a.BSCNN(15, 10),30);
	}


}
