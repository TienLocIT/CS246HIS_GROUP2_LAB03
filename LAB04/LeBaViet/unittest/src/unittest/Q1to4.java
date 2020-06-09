package unittest;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q1to4 {

	Calculator c=new Calculator();
	@Test
    public void testAdd() {
    	 assertEquals(c.add(1, 2),3);
    }
   @Test
  public void testbiggerthanInt() {
	   assertTrue(c.add(2105000023, 2121000000)>2000000000);
   }
   @Test
   public void testSmallerThanInt() {
	   assertTrue(c.add(-2105000023, -2121000000)<-2000000000);
   }
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
   @Test
   public void testDiv() {
	   assertEquals(c.div(3, 3),1);
   }
   @Test
   public void testDiv0() {
	   try {
			c.div(1, 0);
		}
		catch(Exception e) {
			fail();
		}
   }
   @Test
   public void testFloat() {
	   assertEquals(c.div(5, 2),2.5);
   }
}
