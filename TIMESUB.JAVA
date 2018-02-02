import java.io.*;
import java.util.Calendar;
public class Seconds
{
public static void main(String[] args) 
{
                      + now.get(Calendar.MINUTE)
                      + ":"
                      + now.get(Calendar.SECOND));
    now.add(Calendar.SECOND,100);
    System.out.println("New time after adding 100 seconds : "
                      + now.get(Calendar.HOUR_OF_DAY)
                      + ":"
                      + now.get(Calendar.MINUTE)
                      + ":"
                      + now.get(Calendar.SECOND)
    now = Calendar.getInstance();
    now.add(Calendar.SECOND, -50);
     System.out.println("Time before 50 minutes : " + now.get(Calendar.HOUR_OF_DAY)
                      + ":"
                      + now.get(Calendar.MINUTE)
                      + ":"
                      + now.get(Calendar.SECOND));
   }
