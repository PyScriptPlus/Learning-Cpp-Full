using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class checked_unchecked
    {
        static void overFlowFunc(string[] args)
        {
            try
            {
                checked
                {
                    int overflow = int.MaxValue;
                    int overflow2 = int.MinValue;
                    ++overflow;
                    ++overflow;
                    --overflow2;
                    --overflow2;
                }
            }
            catch(OverflowException msg)
            {
                Console.WriteLine(msg.Message);
            }
            
            // Check nemikone
            unchecked
            {
                int overflow = int.MaxValue;
                int overflow2 = int.MinValue;
                ++overflow;
                ++overflow;
                --overflow2;
                --overflow2;
            }
        }
    }
}
