using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2808
{
    class Program
    {
        static int Val(char p)
        {
            char[] matriz = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
            int resp = 0;

            for (int i = 0; i < 8 ; i++)
            {
                if ( p == matriz[i])
                {
                    resp = i;
                    i = 8;
                }
            }
            return resp + 1;
        }

        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            int d1 = Convert.ToInt32(a[1]);
            int d2 = Convert.ToInt32(a[4]);
            int cont = 0;
            int res1 = Val(Char.ToLower(a[0]));
            int res2 = Val(Char.ToLower(a[3]));

            int[] vertical = { res1 - 2, res1 - 1, res1 + 1, res1 + 2 };
            int[] horizontal = { d1 - 2, d1 - 1, d1 + 1, d1 + 2 };

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (vertical[i] == res2 && horizontal[j] == d2)
                    {
                        cont++;
                        break;
                    }
                }
            }
            
            Console.WriteLine(cont > 0 && (d1 > 0 && d1 < 8 || d2 > 0 && d2 < 8) ? "VALIDO" : "INVALIDO");
            Console.ReadLine();
        }
    }
}
