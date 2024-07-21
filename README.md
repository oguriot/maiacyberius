Cyber Cafe Time Management System
Description

This application is designed to manage user time in a cyber cafe environment. It is developed using C++ with Qt5 framework for the graphical user interface. The system features 10 independent timers for each user, which can be used separately. To ensure data integrity, the application utilizes a text log file to save all timers in case of power outages or system failures. Additionally, users have the capability to print the log file directly from the application.
Features

    Multiple Timers: Provides 10 separate timers for each user to manage their session times independently.
    Persistent Logging: Uses a text log file to store all timer information, ensuring data recovery in case of unexpected shutdowns.
    Print Log: Allows users or administrators to print the log file for record-keeping purposes.
    User Management: Basic user management functionalities to add, remove, and update user information.

Technologies Used

    C++: Core programming language used for backend logic and system functionality.
    Qt5: Framework for developing the graphical user interface (GUI) and handling user interactions.
    Text File Handling: Utilizes standard C++ file I/O operations for managing the log file.
    Platform Compatibility: Supports cross-platform development to run on various operating systems.

Installation

    Prerequisites:
        C++ compiler with C++11 support (e.g., GCC, Clang)
        Qt5 development libraries and tools installed

    Setup:
        Clone the repository: git clone https://github.com/maiacyberius/repository.git
        Build the project using Qt Creator or CMake.
        Ensure proper permissions for file operations if running on Linux or macOS.

    Usage:
        Launch the application after successful build.
        Manage user accounts and their session times using the intuitive GUI.
        Print the log file as needed for auditing or backup purposes.

Contributing

Contributions are welcome! Please follow these steps:

    Fork the repository.
    Create your feature branch: git checkout -b feature/new-feature
    Commit your changes: git commit -am 'Add new feature'
    Push to the branch: git push origin feature/new-feature
    Submit a pull request.

License

This project is licensed under the GPL License - see the license.txt file for details.
Contact

For questions or support, contact ANDRIAMILAMINA Monge at monge@confluenti.com.
