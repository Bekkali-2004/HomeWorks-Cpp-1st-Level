#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main() {
    // Get the user's home directory
    std::string homePath = getenv("HOME"); // Works on Linux systems
    std::string desktopPath = homePath + "/Desktop";

    // Check if the Desktop directory exists
    if (!fs::exists(desktopPath)) {
        std::cerr << "Error: Desktop directory does not exist.\n";
        return 1;
    }

    // Prompt user for the number of folders to create
    int folderCount;
    std::cout << "Enter the number of folders to create: ";
    std::cin >> folderCount;

    // Create folders on the Desktop
    for (int i = 1; i <= folderCount; ++i) {
        std::string folderName = desktopPath + "/Folder_" + std::to_string(i);
        try {
            if (fs::create_directory(folderName)) {
                std::cout << "Created folder: " << folderName << '\n';
            } else {
                std::cerr << "Failed to create folder: " << folderName << '\n';
            }
        } catch (const fs::filesystem_error& e) {
            std::cerr << "Filesystem error: " << e.what() << '\n';
            return 1;
        }
    }

    std::cout << "Folder creation completed.\n";
    return 0;
}
