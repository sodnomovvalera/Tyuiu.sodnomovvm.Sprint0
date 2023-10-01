using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

using Tyuiu.SodnomovVM.Sprint0.Task2.V0.LIb;


namespace Tyuiu.SodnomovM.Sprint0.Task2.V0.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void CheckGetMessageValid()

        {
            var name = "Валерий";
            var res = DataService.GetMessage(name);

            Assert.AreEqual("Привет, Валерий", res);
        }
    }
}
