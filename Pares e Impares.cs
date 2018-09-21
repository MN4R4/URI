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
            ArrayList par = new ArrayList();
            ArrayList impar = new ArrayList();

            for (int i = 0; i < a; i++)
            {
                int b = Convert.ToInt32(Console.ReadLine());
                if (b % 2 == 0) par.Add(b);
                else impar.Add(b);
            }
            par.Sort();
            impar.Sort();

            for (int i = 0; i < par.Count; i++)
            {
                Console.WriteLine(par[i]);
            }

            for (int j = impar.Count - 1; j >= 0; j--)
            {
                Console.WriteLine(impar[j]);
            }

            par.Clear(); impar.Clear();
            Console.ReadLine();
        }
    }
}
