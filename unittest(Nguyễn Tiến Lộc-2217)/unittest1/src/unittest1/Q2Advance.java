package unittest1;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q2Advance {
	Advanced2 a=new Advanced2();
	@Test
	public void test1() {
		assertEquals(a.sum(5478),24);
	}
	@Test
    public void test2() {
    	assertEquals(a.sum(-5478),-24);
    }

}
