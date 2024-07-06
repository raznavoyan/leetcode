class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int n = students.size();
        int m = sandwiches.size();
        int unable_to_eat = 0;

        while (!students.empty()) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                unable_to_eat = 0;
            } else {
                int student_pref = students[0];
                students.erase(students.begin());
                students.push_back(student_pref);
                ++unable_to_eat;

                if (unable_to_eat == n) {
                    break;
                }
            }
        }

        return students.size();
    }
};
