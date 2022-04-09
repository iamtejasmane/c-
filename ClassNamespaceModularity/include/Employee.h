#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<string>

using namespace std;

namespace kdac {
    class Employee {
        private:
            string name;
            int empid;
            float salary;
        
        public:
            void initEmployee(void);
            void acceptRecord(void);
            void printRecord(void);
    };
    
} 

#endif /* EMPLOYEE_H_ */