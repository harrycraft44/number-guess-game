using System;
using System.Diagnostics;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();
            Console.WriteLine("Hello World!");
            bool whilecon = true;
            int attempts = 6;
            int guess;
            int randomNumber = rnd.Next(100);     //number between 0 and 99
            while(whilecon){
                Console.WriteLine("guess:");
                guess = int.Parse(Console.ReadLine());
                if(guess > randomNumber){
                    Console.WriteLine("too high");
                    attempts--;
                }else if(guess < randomNumber){
                    Console.WriteLine("too low");
                    attempts--;
                }else if(guess == randomNumber){
                    Console.WriteLine("well done you got the number");
                    whilecon = false;
                }
                if(attempts == 0){
                    Console.WriteLine("you ran out of attempts");
                    whilecon =false;
                }
            }
            Console.ReadLine();
        }
    }
}