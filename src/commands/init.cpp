#include "commands/init.h"

#include <iostream>
#include <filesystem>

using namespace std;

namespace pot {
    void init_repo() {
        const string pot_dir = ".pot";
        namespace fs = filesystem;

        if (fs::exists(pot_dir)) {
            cout << "Repo already initialized. \n";
        } else {
            if (fs::create_directory(pot_dir)) {
                cout << "Initialized empty pot repository in " << fs::current_path() / pot_dir << "\n";
            } else {
                cout << "Failed to initialize repository.\n";
            }
        }
    }
}
