using System;

namespace program5
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1 = 10;
            int num2 = 15;
            int num3 = 22;

           Console.WriteLine(GetMax(num1, num2, num3));
        }
        static int GetMax(int num1, int num2, int num3)
        {
            int result;
            if(num1 >= num2 && num1 >=num3)
            {
                result = num1;
            }else if(num2 >= num1 && num2 >= num3)
            {
                result = num2;
            }else
            {
                result = num3;
            }
            
            return result;
        }
    }
}
