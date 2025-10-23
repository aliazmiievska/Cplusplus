#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

class Course {
public:
    int id;
    std::string title;
    std::string category;
    int duration;

    Course() : id(0), title(""), category(""), duration(0) {}
    Course(int i, std::string t, std::string c, int d) : id(i), title(t), category(c), duration(d) {}
};

class User {
public:
    int id;
    std::string name;
    std::vector<int> enrolledCourseIds;

    User() : id(0), name(""), enrolledCourseIds() {}
    User(int i, std::string n) : id(i), name(n) {}
};

class Platform {
public:
    std::map<int, Course> courses;
    std::map<int, User> users;

    void preloadExampleData() {
        courses[1] = Course(1, "C++ Basics", "Programming", 20);
        courses[2] = Course(2, "HTML Intro", "Web", 10);
        courses[3] = Course(3, "Algorithms", "Programming", 30);

        users[1] = User(1, "Olia");
        users[1].enrolledCourseIds.push_back(1);
        users[1].enrolledCourseIds.push_back(3);

        users[2] = User(2, "Andrii");
        users[2].enrolledCourseIds.push_back(2);

        users[3] = User(3, "Marko");
        users[3].enrolledCourseIds.push_back(1);
        users[3].enrolledCourseIds.push_back(2);
        users[3].enrolledCourseIds.push_back(3);
    }

    void totalStudyTime() {
        for (std::map<int, User>::iterator it = users.begin(); it != users.end(); ++it) {
            int total = 0;
            std::vector<int>& ids = it->second.enrolledCourseIds;
            for (size_t i = 0; i < ids.size(); ++i) {
                int cid = ids[i];
                if (courses.count(cid) > 0) {
                    total += courses[cid].duration;
                }
            }
            std::cout << it->second.name << ": " << total << " hrs\n";
        }
    }

    void averageStudyTime() {
        std::vector<int> times;
        for (std::map<int, User>::iterator it = users.begin(); it != users.end(); ++it) {
            int total = 0;
            std::vector<int>& ids = it->second.enrolledCourseIds;
            for (size_t i = 0; i < ids.size(); ++i) {
                int cid = ids[i];
                if (courses.count(cid) > 0) {
                    total += courses[cid].duration;
                }
            }
            times.push_back(total);
        }

        if (!times.empty()) {
            double avg = std::accumulate(times.begin(), times.end(), 0.0) / times.size();
            std::cout << "Average study time: " << avg << " hrs\n";
        }
        else {
            std::cout << "No data available.\n";
        }
    }

    void topUsers() {
        std::vector<std::pair<std::string, int> > stats;
        for (std::map<int, User>::iterator it = users.begin(); it != users.end(); ++it) {
            int total = 0;
            std::vector<int>& ids = it->second.enrolledCourseIds;
            for (size_t i = 0; i < ids.size(); ++i) {
                int cid = ids[i];
                if (courses.count(cid) > 0) {
                    total += courses[cid].duration;
                }
            }
            stats.push_back(std::make_pair(it->second.name, total));
        }

        std::sort(stats.begin(), stats.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
            return a.second > b.second;
            });

        std::cout << "Top 5 users:\n";
        for (size_t i = 0; i < std::min((size_t)5, stats.size()); ++i) {
            std::cout << stats[i].first << ": " << stats[i].second << " hrs\n";
        }
    }
};

int main() {
    Platform p;
    p.preloadExampleData();

    int choice;
    do {
        std::cout << "\n1. Total study time per user\n2. Average study time\n3. Top 5 users\n0. Exit\nYour choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: p.totalStudyTime(); break;
        case 2: p.averageStudyTime(); break;
        case 3: p.topUsers(); break;
        case 0: std::cout << "Exiting...\n"; break;
        default: std::cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}
