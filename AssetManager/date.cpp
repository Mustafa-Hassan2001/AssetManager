#include "date.h"
#include <sstream>
#include <ctime>
#include <cstdlib>

Date::Date() : _day{0}, _year{0}
{
}

Date::Date(int day, Date::Month month, int year) : _year{year}, _month{month}, _day{day}
{
}

std::string Date::format() const {
  std::stringstream date;
  date << _day << '/' << _month << '/' << _year;
  return date.str();
}

bool Date::valid() const {
  if (_day != 0 && _year != 0) {
    tm thisTime = *this;
    if(time_t(-1) != mktime(&thisTime) && thisTime.tm_mday == _day && thisTime.tm_mon == _month
       && thisTime.tm_year == _year - 1900) {
      return true;
    }
  }
  return false;
}

int Date::differenceInDays(const Date &other) const {
  if (!this->valid() || !other.valid()) {
    return -1;
  }
  tm thisTime = *this;
  tm otherTime = other;
  // Convert from a struct tm to a time_t to allow calculation.
  time_t tTime = mktime(&thisTime);
  time_t oTime = mktime(&otherTime);
  double diffInSeconds = difftime(tTime, oTime);
  // Convert from seconds to days.
  return std::abs((int)(diffInSeconds / 86400));
}

Date::operator tm() const {
  tm time;
  time.tm_hour = 0;
  time.tm_min = 0;
  time.tm_sec = 0;
  time.tm_mday = _day;
  time.tm_mon = _month;
  time.tm_year = _year - 1900;
  return time;
}
