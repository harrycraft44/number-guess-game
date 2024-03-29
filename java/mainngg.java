import java.util.Random;
import java.util.Scanner;

public class mainngg
{
	public static void main(String[] args) {
        Random rand = new Random(); 
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
        int randomNumber = rand.nextInt(100); 
        System.out.println(randomNumber);
        boolean whilecon = true;
        int guess;
        int attempts = 6;

        while(whilecon){
            System.out.println("guess:");
            guess = myObj.nextInt();  // Read user input
            if(randomNumber < guess){
                System.out.println("too high");
                attempts--;
            }else if(randomNumber > guess){
                System.out.println("too low");
                attempts--;
            }else if(randomNumber == guess){
                System.out.println("well done you got the number");
                whilecon = false;
            }
            if (attempts == 0){
                System.out.println("you failed the number was " + randomNumber );
                whilecon = false;

            }
        }
	}
}