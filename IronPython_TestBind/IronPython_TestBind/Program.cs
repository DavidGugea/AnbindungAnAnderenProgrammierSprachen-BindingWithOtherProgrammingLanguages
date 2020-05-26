using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IronPython.Hosting;

namespace IronPython_TestBind
{
    class Program
    {
        static void Main(string[] args)
        {
            var engine = Python.CreateEngine();
            var scope = engine.CreateScope();
            engine.ExecuteFile("script.py", scope);
            System.Console.WriteLine(
                engine.Operations.Invoke(scope.GetVariable("quadrat"), 5)
            );

            System.Console.ReadLine();
        }
    }
}
