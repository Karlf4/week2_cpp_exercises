#include <memory>
#include <map>
#include <string>

using namespace std;

// Forward declaration of Department class.
// This is needed to let the compiler know that a type called
// Department will be defined in the code when it compiles the 
// Student class, as the Department class is defined afterwards.
// You can have a pointer to a forward declared class because a 
// pointer is just an address in memory, so the compiler doens't
// need to know anything the data Department contains to work
// out the data layout for Student. 
class Department;

class Student
{
    public:
    Student(const std::string &n);
    // : name(n), id(max_id++) {}

    ~Student();

    

    int getId() const;

    private:
    // Static variable means same value shared by every object in class
    // This allows us to create a unique id for each student by increasing
    // each time
    static int max_id;
    
    string name;
    int id;
    // add a pointer to the department here
    weak_ptr<Department> department;
};

class Department
{
    public:
    Department(const std::string &n);
    // : name(n) {}

    ~Department();

    void deregisterStudent(const int id);

    void addStudent(const shared_ptr<Student> new_student);

    private:
    string name;
    // add a vector or map of pointers to students here
    map<int, weak_ptr<Student>> students;
};