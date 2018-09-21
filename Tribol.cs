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
            int cont = 0;

            while (cont < a)
            {
                string b = Console.ReadLine();
                int c = Convert.ToInt32(b);
                int contb = 0;
                double R = 0, G = 0, B = 0;
                while (contb < c)
                {
                    string gol = "";

                    gol = Console.ReadLine();

                    if (gol[0] == 'R')
                    {
                        if (gol[2] == 'B') R++;
                        else R = R + 2;
                    }
                    else if (gol[0] == 'G')
                    {
                        if (gol[2] == 'R') G++;
                        else G = G + 2;
                    }
                    else if (gol[0] == 'B')
                    {
                        if (gol[2] == 'R') B = B + 2;
                        else B++;
                    }
                    contb++;
                }

                string message = "";

                if (R == B && B == G) message = "trempate";
                else if (R == B && R > G || G == B && G > R || R == G && R > B) message = "empate";
                else if (R > B && R > G) message = "red";
                else if (B > G && B > R) message = "blue";
                else if (G > R && G > B) message = "green";

                Console.WriteLine(message);
                cont++;
            }
            Console.ReadLine();
        }
    }
}
