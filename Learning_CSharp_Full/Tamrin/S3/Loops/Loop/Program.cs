namespace Loop
{
    internal class Program
    {
        static void Loops(string[] args)
        {
            bool x = true;
            int y = 0;
            while (x)
            {

                if (y >= 10)
                {
                    x = false;
                }

                System.Console.WriteLine(y);

                y++;
            }

            System.Console.WriteLine("\n===============================\n");

            bool z = true;
            int i = default;
            do
            {
                if (i >= 10)
                {
                    z = false;
                }
                System.Console.WriteLine(i);
                ++i;
            } while (z);


            for (int j = 20; j > 0; j -= 2)
            {
                System.Console.WriteLine(j);
            }

            System.Console.WriteLine("\n=====================\n");

            for (int c = default; c < 20; c += 2)
            {
                System.Console.WriteLine(c);
            }

            System.Console.WriteLine("\n=====================\n");

            System.Console.Write("Enter your number: ");
            string? num = Console.ReadLine() ?? string.Empty;
            for (int w = 0; w < num.Length; w++)
            {
                System.Console.WriteLine(num[w]);
            }

        }


}
}