using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2808
{
    class Program
    {
        static void Main(string[] args)
        {

            int a = Convert.ToInt32(Console.ReadLine());

            int[] v = new int[a + 1];

            v[0] = 1;
            v[1] = v[0];

            if (a >= 2)
            {
                for (int i = 2; i < a; i++)
                {
                    v[i] = v[i - 1] + v[i - 2];
                }
            }

            for (int j = a - 1; j >= 0; j--)
            {

                if (j == 0)
                {
                    Console.WriteLine(v[j]);
                    break;
                }
                else
                {
                    Console.Write(v[j] + " ");
                }
            }

            Console.ReadLine();
        }
    }
}
