#include <iostream>

class Log {
public: // publioc variables
    const size_t level_error = 0;
    const size_t level_warning = 1;
    const size_t level_info = 2;

private: //priavte variables
    int m_log_level = level_info;

public: //public methods
    void setlevel(int level) {
        m_log_level = level;
    }

    void print_error(const char* message) {  //prints error message
        if (m_log_level >= level_error)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void print_warn(const char* message) {  //prints warning message
        if (m_log_level >= level_warning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void print_info(const char* message) {  //prints info message
        if (m_log_level >= level_info)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main() {
    std::cout << "Hello World" << std::endl;

    Log log;
    log.setlevel(log.level_info);
    log.print_warn("Warning!");
    log.print_info("Info message!");
    log.print_error("Error!");
    printf("test\n", );
    std::cin.get();
}
