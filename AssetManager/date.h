#ifndef DATE_H
#define DATE_H
#include <string>

/**
 * @brief The Date class represents a calendar date, in Australian date format (day/month/year).
 */
class Date
{
public:
  enum Month { January = 0, February = 1, March = 2, April = 3, May = 4, June = 5, July = 6,
               August = 7, September = 8, October = 9, November = 10, December = 11 };
  /**
   * @brief Date construct a blank (invalid) date object.
   */
  Date();

  /**
   * @brief Date construct a date with the given details. Note: no validation takes place.
   * @param day the day of the month.
   * @param month the month.
   * @param year the full year e.g. 2016
   */
  Date(int day, Month month, int year);

  /**
   * @brief format create a string representation of the date.
   * @return the string representing this date.
   */
  std::string format() const;

  /**
   * @brief valid tests to see if this date has a valid value.
   * @return true if the date is valid.
   */
  bool valid() const;

  /**
   * @brief differenceInDays calculate the number between this date and another date.
   * @param other the date to compare
   * @return the absolute number of days between this date and other. -1 on error.
   */
  int differenceInDays(const Date &other) const;

  /**
   * @brief operator tm convert to a struct tm.
   */
  operator tm() const;

private:
  int _year; /**< the year e.g. 2017 */
  Month _month; /** the month */
  int _day; /**< the day of month e.g. 31 */
};

#endif // DATE_H
