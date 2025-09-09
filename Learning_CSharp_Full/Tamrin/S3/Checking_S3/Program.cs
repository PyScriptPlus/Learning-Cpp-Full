namespace Checking_S3
{
    internal class Program
    {
        static void felaniwse(string[] args)
        {
            #region Animal Array
            var animals = new Animal?[]
            {
                new Cat
                {
                    name = "Karen",
                    born = new DateTime(2025,09,02),
                    legs = 4,
                    IsDomestic = true
                },
                null,
                new Cat
                {
                    name = "Mufasa",
                    born = new DateTime(2020,05,21)
                },
                new Spider
                {
                    name = "Sid Vicious",
                    born = new DateTime(2020,10,11),
                    IsVenomous = false
                },
                new Spider
                {
                    name = "Captain Furry",
                    born = DateTime.Today
                },
                new Spider
                {
                    name = "SpiderMan",
                    legs = 4
                }

            };
            #endregion

            foreach (Animal? animal in animals)
            {
                string message;
                #region StandardSwitch
                
                switch (animal)
                {
                    case Cat fourLegs when fourLegs.legs == 4:
                        message = $"4 ta legs darad {fourLegs.legs}";
                        break;
                    case Cat Domestic when Domestic.IsDomestic == false:
                        message = $"Not IsDomestic {Domestic.IsDomestic}";
                        break;
                    case Spider date when date.born == DateTime.Today:
                        message = $"Date is Today: {date.born}";
                        break;
                    case Spider isWild when isWild.IsVenomous:
                        message = $"{isWild.name}";
                        break;
                    case null:
                        message = "The Animal is Null";
                        break;
                    case Spider { legs: 4 } sixLegs:
                        message =  $"{sixLegs.name} have {sixLegs.legs} legs";
                        break;
                    default:
                        message = $"{animal.name} is a {animal.GetType().Name}.";
                        break;

                }
                Console.WriteLine($"switch statement: {message}");
                
                #endregion
                #region ModernSwitch
                message = animal switch
                {
                    Cat fourLeggedCat when fourLeggedCat.legs == 4
                    => $"The cat named {fourLeggedCat.name} has four legs.",
                    Cat wildCat when wildCat.IsDomestic == false
                    => $"The non-domestic cat is named {wildCat.name}.",
                    Cat cat
                    => $"The cat is named {cat.name}.",
                    Spider spider when spider.IsVenomous
                    => $"The {spider.name} spider is venomous. Run!",
                    null
                    => "The animal is null.",
                    _
                    => $"{animal.name} is a {animal.GetType().Name}."
                };
                Console.WriteLine($"switch expression: {message}");
                #endregion
            }
        }
    }
}