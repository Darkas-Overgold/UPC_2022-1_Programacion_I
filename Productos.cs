using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;                                                                                                                                                                         namespace Repetitiva_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, productos, n;
            float costo;
            string linea;
            x = 1;
            productos = 0;
            Console.Write("---------> Digite la Cantidad de productos: ");
            linea = Console.ReadLine();
            n = int.Parse(linea);
            while (x <= n)
            {
                Console.Write("---------> Digite el Costo del producto en nuevos soles: ");
                linea = Console.ReadLine();
                costo = float.Parse(linea);
                if (costo >= 1.00 && costo <= 20.00)
                {
                    productos = productos + 1;
                }
                x = x + 1;
            }
            Console.Write("---------> La cantidad De productos que cumplen con el parámetro son: ");
            Console.Write(productos);
            Console.ReadKey();
        }
    }
}
