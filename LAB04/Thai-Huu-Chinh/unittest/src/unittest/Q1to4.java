package unittest;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q1to4 {

	Calculator c=new Calculator();
   @Test
   public void testMul() {
	   assertEquals(c.mul(2, 2),4);
   }
   @Test
   public void testMulbiggerThanInt() {
	   assertTrue(c.mul(2105000023, 2121000000)>2000000000);
   }
   @Test
   public void testMulSmallerThanInt() {
	   assertTrue(c.mul(2105000023, -2121000000)<-2000000000);
   }
}
