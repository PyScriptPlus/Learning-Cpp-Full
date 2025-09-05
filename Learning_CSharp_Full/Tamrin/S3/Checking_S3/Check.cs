namespace Checking_S3
{
    internal class Check
    {
        static void em(string[] args)
        {


            object x = 3;
            // Pattern Matching: Type-Checking & Cast
            if (x is int f)
            {
                Console.WriteLine("Type is Integer");
            }
            // is ma'moli: Just Type-Checking
            if (x is int)
            {
                Console.WriteLine("Type is Integer");
            }


            //--------------------------------//

            // continue:
            int[] array = {-4,-3,-2,-1,0,1,2,3,4};
            //Console.WriteLine(array[]);
            while (true)
            {
                foreach (int item in array)
                {
                    if(item < 0)
                    {
                        continue;
                    }
                    else
                    {
                        Console.WriteLine(item);
                        
                    }
                }
                break;
            }
            
        }
    }
}
