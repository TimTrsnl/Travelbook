#pragma once

#include <string>

class Trip{
private: // contains the attributes
    int tripId;
    std::string date;
    std::string startTime;
    std::string endTime;
    double startMileage;
    double endMileage;
    std::string purpose;

public:
    Trip(int id, std::string date, std::string start, std::string end, double startMileage, double endMileage, std:string purp);

    int getTripId() const;
    std::string getDate() const;
    std::string getStartTime() const;
    std::string getEndTime() const;
    double getEndMileage() const;
    double getStartMileage() const;
    std::string getPurpose() const;

};
