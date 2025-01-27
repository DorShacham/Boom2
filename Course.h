#ifndef COURSE_H
#define COURSE_H

#include "./Exception.h"
#include "./Dynamic.h";
 
namespace DS
{
    class Course
    {
        
    Dynamic classes;

    public:
        int id;
        Course(int id);
        ~Course() = default;
        int appendNewClass();
        int getWatchTime(int classId);
        bool watchClass(int classId, int watchTime);

    };

} // namespace DS

#endif