#include <iostream>
#include <string>

// commands
#include "include/commands/init.h"

using namespace std;

void print_help() {
    cout << "\n";
    cout << "Welcome to pot - a simple version control system\n";
    cout << "Usage:\n";
    cout << "  pot init        Initialize a new repository\n";
    cout << "  pot add <file>  Add file to staging area\n";
    cout << "  pot commit      Commit staged changes\n";
    cout << "  pot status      Show repository status\n";
    cout << "\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        print_help();
        return 1;
    }

    string command = argv[1];

    if (command == "init") {
        pot::init_repo();
    } else if (command == "add") {
        // TODO: Implement add functionality
        cout << "Adding file(s) to staging area...\n";
    } else if (command == "commit") {
        // TODO: Implement commit functionality
        cout << "Committing changes...\n";
    } else if (command == "status") {
        // TODO: Implement status functionality
        cout << "Showing repository status...\n";
    } else {
        print_help();
        return 1;
    }
    return 0;
}