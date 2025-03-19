#include <iostream>
#include <cstring>

struct Argv {
 public:
  // Default constructor delegates to another constructor
  Argv() : Argv({"program_name", "-flag", "value"}) {}

  // Constructor that takes an initializer list
  Argv(const std::initializer_list<const char*> &args) {
    nr_args_ = args.size();
    int total_len = 0;

    // Calculate the total length needed for all arguments
    for (auto it = args.begin(); it != args.end(); ++it) {
      total_len += strlen(*it) + 1;  // +1 for null terminator
    }

    // Allocate memory for arguments array
    argv_ = static_cast<char**>(malloc(nr_args_ * sizeof(char*)));
    argv_[0] = static_cast<char*>(malloc(total_len));

    int i = 0;
    int offset = 0;
    for (auto it = args.begin(); it != args.end(); ++it, ++i) {
      int len = strlen(*it) + 1;
      snprintf(argv_[0] + offset, len, "%s", *it);
      
      if (i > 0) {
        argv_[i] = argv_[0] + offset;
      }
      offset += len;
    }
  }

  ~Argv() {
    free(argv_[0]);
    free(argv_);
  }

  int nr_args() const {
    return nr_args_;
  }

  char** operator*() const {
    return argv_;
  }

 private:
  char** argv_;
  int nr_args_;
};

int main() {
  // Create an instance using the default constructor
  Argv args;

  // Print the arguments stored in the struct
  std::cout << "Number of arguments: " << args.nr_args() << std::endl;
  for (int i = 0; i < args.nr_args(); i++) {
    std::cout << "argv[" << i << "]: " << (*args)[i] << std::endl;
  }

  return 0;
}
