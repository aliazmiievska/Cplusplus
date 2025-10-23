#include <iostream>
#include <map>
#include <vector>
#include <string>

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

    void addCourse() {
        int id, duration;
        std::string title, category;
        std::cout << "Course ID: ";
        std::cin >> id;
        std::cout << "Course title: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::cout << "Category: ";
        std::getline(std::cin, category);
        std::cout << "Duration (hours): ";
        std::cin >> duration;
        Course newCourse(id, title, category, duration);
        courses[id] = newCourse;
    }

    void addUser() {
        int id;
        std::string name;
        std::cout << "User ID: ";
        std::cin >> id;
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        User newUser(id, name);
        users[id] = newUser;
    }

    void enrollUser() {
        int userId, courseId;
        std::cout << "User ID: ";
        std::cin >> userId;
        std::cout << "Course ID: ";
        std::cin >> courseId;
        if (users.count(userId) > 0 && courses.count(courseId) > 0) {
            users[userId].enrolledCourseIds.push_back(courseId);
        }
        else {
            std::cout << "User or course not found\n";
        }
    }

    void showUserCourses() {
        int userId;
        std::cout << "User ID: ";
        std::cin >> userId;
        if (users.count(userId) > 0) {
            std::vector<int>& courseIds = users[userId].enrolledCourseIds;
            for (size_t i = 0; i < courseIds.size(); ++i) {
                int cid = courseIds[i];
                if (courses.count(cid) > 0) {
                    Course c = courses[cid];
                    std::cout << c.id << ": " << c.title << " (" << c.category << ", " << c.duration << " hrs)\n";
                }
            }
        }
        else {
            std::cout << "User not found\n";
        }
    }

    void searchByCategory() {
        std::string category;
        std::cout << "Enter category: ";
        std::cin.ignore();
        std::getline(std::cin, category);
        for (std::map<int, Course>::iterator it = courses.begin(); it != courses.end(); ++it) {
            if (it->second.category == category) {
                std::cout << it->second.id << ": " << it->second.title << " (" << it->second.duration << " hrs)\n";
            }
        }
    }
};

int main() {
    Platform p;
    int choice;
    do {
        std::cout << "\n1. Add course\n2. Add user\n3. Enroll user\n4. Show user courses\n5. Search by category\n0. Exit\nYour choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: p.addCourse(); break;
        case 2: p.addUser(); break;
        case 3: p.enrollUser(); break;
        case 4: p.showUserCourses(); break;
        case 5: p.searchByCategory(); break;
        case 0: std::cout << "Exiting...\n"; break;
        default: std::cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}
