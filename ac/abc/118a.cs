using System;
class Program
{
	static void Main(string[] args)
	{
		// スペース区切りの整数の入力
		string[] input = Console.ReadLine().Split(' ');
		int a = int.Parse(input[0]);
		int b = int.Parse(input[1]);
        if (b % a == 0)
        {
            Console.WriteLine(a + b);
        }
        else {
            Console.WriteLine(b - a);
        }
    }
}