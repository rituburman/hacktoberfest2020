using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace NJCODateManipulation
{
    public class Date
    {
        // Decidi reduzir o código utilizando parâmetros opcionais, reduzi o código pela metade :)
        // Acabei percebendo que tinha o processo de otimização, mas como estava fazendo e seguindo, acabei refatorando
        // o código de antemão, então eu vou colocar a classe otimizada diretamente aqui, pois quero utilizar essa
        // biblioteca futuramente
        public static int DateDifferenceInDays(string startDate, string endDate = "")
        {
            if (endDate == "")
            {
                endDate = DateTime.Now.ToString();
            }

            TimeSpan difference = PrepareDate(startDate, endDate);

            int days = difference.Days;

            return days;
        } 
        
        public static int DateDifferenceInDays(int startDay, int startMonth, int startYear, int endDay = 0, int endMonth = 0, int endYear = 0)
        {
            if (endDay == 0 || endMonth == 0 || endYear == 0)
            {
                endDay = DateTime.Now.Day;
                endMonth = DateTime.Now.Month;
                endYear = DateTime.Now.Year;
            }

            TimeSpan difference = PrepareDate(startYear, startMonth, startDay, endYear, endMonth, endDay);

            int days = difference.Days;

            return days;
        }

        public static double DateDifferenceInMonths(string startDate, string endDate = "")
        {
            if (endDate == "")
            {
                endDate = DateTime.Now.ToString();
            }

            TimeSpan difference = PrepareDate(startDate, endDate);

            const double divisor = 30.436875;

            int days = difference.Days;
            double months = (days / divisor);

            return Math.Round(months, 3, MidpointRounding.AwayFromZero);
        }

        public static double DateDifferenceInMonths(int startDay, int startMonth, int startYear, int endDay = 0, int endMonth = 0, int endYear = 0)
        {
            if (endDay == 0 || endMonth == 0 || endYear == 0)
            {
                endDay = DateTime.Now.Day;
                endMonth = DateTime.Now.Month;
                endYear = DateTime.Now.Year;
            }

            TimeSpan difference = PrepareDate(startYear, startMonth, startDay, endYear, endMonth, endDay);

            const double divisor = 30.436875;

            int days = difference.Days;
            double months = (days / divisor);

            return Math.Round(months, 3, MidpointRounding.AwayFromZero);
        }
        public static double DateDifferenceInYears(string startDate, string endDate = "")
        {
            if(endDate == "")
            {
                endDate = DateTime.Now.ToString();
            }

            TimeSpan difference = PrepareDate(startDate, endDate);

            const double divisor = 365.2425;

            int days = difference.Days;
            double years = (days / divisor);

            return Math.Round(years, 3, MidpointRounding.AwayFromZero);
        }

        public static double DateDifferenceInYears(int startDay, int startMonth, int startYear, int endDay = 0, int endMonth = 0, int endYear = 0)
        {
            if (endDay == 0 || endMonth == 0 || endYear == 0)
            {
                endDay = DateTime.Now.Day;
                endMonth = DateTime.Now.Month;
                endYear = DateTime.Now.Year;
            }

            TimeSpan difference = PrepareDate(startYear, startMonth, startDay, endYear, endMonth, endDay);

            const double divisor = 365.2425;

            int days = difference.Days;
            double years = (days / divisor);

            return Math.Round(years, 3, MidpointRounding.AwayFromZero);
        }

        public static TimeSpan PrepareDate(string startDate, string endDate)
        {
            DateTime parsedStartDate = DateTime.Parse(startDate);
            DateTime parsedEndDate = DateTime.Parse(endDate);

            TimeSpan difference = parsedEndDate - parsedStartDate;

            return difference;
        }

        public static TimeSpan PrepareDate(int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay)
        {
            DateTime startDate = new DateTime(startYear, startMonth, startDay);
            DateTime endDate = new DateTime(endYear, endMonth, endDay);


            TimeSpan difference = endDate - startDate;

            return difference;
        }

         public static DateTime AddDaysInDate(int daysToAdd, int day, int month, int year)
        {
            if (day == 0 || month == 0 || year == 0)
            {
                day = DateTime.Now.Day;
                month = DateTime.Now.Month;
                year = DateTime.Now.Year;
            }

            DateTime date = new DateTime(year, month, day);

            return date.AddDays(daysToAdd);
        }
        public static DateTime AddDaysInDate(int daysToAdd, string inputDate)
        {
            DateTime parsedInputDate = DateTime.Parse(inputDate);

            return parsedInputDate.AddDays(daysToAdd);
        }
        public static DateTime AddDaysInToday(int daysToAdd)
        {
            return DateTime.Now.AddDays(daysToAdd);
        }
    }
}
