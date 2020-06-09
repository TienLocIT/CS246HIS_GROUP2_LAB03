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
	   assertTrue(c.add(2105000023, 2121000000)>2000000000);
   }
   @Test
   public void testSmallerThanInt() {
	   assertTrue(c.add(-2105000023, -2121000000)<-2000000000);
   }
	

}
