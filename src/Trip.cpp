#include "Trip.hpp"


Trip::Trip(int id, std::string date, std::string start, std::string end, double startMileage, double endMileage, std:: string purp) : tripId(id), date(date), startTime(start), endTime(end), purpose(purp) {} // to continue

int Trip::getTripId() const
{
    return tripId;
}
