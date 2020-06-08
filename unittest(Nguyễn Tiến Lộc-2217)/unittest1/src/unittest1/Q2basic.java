package unittest1;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q2basic {
    Calculator c=new Calculator();
	 @Test
	   public void testSub() {
		   assertEquals(c.sub(2, 2),0);
	   }
	   @Test
	   public void testSubbiggerthanInt() {
		   assertTrue(c.sub(2105000023, -2121000000)>2000000000);
	   }
	   @Test
	   public void testSubSmallerThanInt() {
		   assertTrue(c.sub(-2105000023, 2121000000)<-2000000000);
	   }
}
