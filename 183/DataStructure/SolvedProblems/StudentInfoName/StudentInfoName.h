#ifndef STUDENTINFONAME_H_INCLUDED
#define STUDENTINFONAME_H_INCLUDED

const int MAX_ITEMS = 100;

class StudentInfo{
    public:
        StudentInfo();
        void insertStudent();
        void setCgpa(int);
        void setName(int);
        int retrieveStudent(int);
        void printInfo(int);
        void printInfoAll();
        void deleteStudent(int);
    protected:
        int id[MAX_ITEMS];
        double cgpa[MAX_ITEMS];
        char *name[MAX_ITEMS];
        int total, index;
};

#endif // STUDENTINFONAME_H_INCLUDED
