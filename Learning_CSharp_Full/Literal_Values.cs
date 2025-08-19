namespace Learning_CSharp_Full
{
    internal class Literal_Values
    {
        static void Literal(string[] args)
        {
            Console.WriteLine("================");
            Console.WriteLine("I'am MohammaD");
            Console.WriteLine("================");
            //---------------------//
            string horizontalLine = new('-', count: 27);
            Console.WriteLine(horizontalLine);
            //---------------------//
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            string emoji = char.ConvertFromUtf32(0x1F600);
            Console.WriteLine(emoji);



        }
    }
}
