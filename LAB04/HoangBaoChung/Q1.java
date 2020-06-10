package UnitTest;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Q1 {

	Question1P1 c=new Question1P1();
	@Test
    public void testAdd() {
    	 assertEquals(c.add(1, 2),4);
    }
   @Test
  public void testbiggerthanInt() {
	   assertEquals(c.add(Integer.MAX_VALUE, 1),Integer.MAX_VALUE+1);
   }
   @Test
   public void testSmallerThanInt() {
	   assertEquals(c.add(Integer.MIN_VALUE,-1),Integer.MIN_VALUE-1);
   }
	

}
