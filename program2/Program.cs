using System;

namespace program2
{
    class Program
    {
        static void Main(string[] args)
        {
            SayHi("Yigit", 24);
             SayHi("Samil", 22);
              SayHi("Baris", 20);
            Console.ReadLine();
        }
        static void SayHi(string name, int age)
        {
            Console.WriteLine("Hello " + name + " you are : " + age);
        }
    }
}
