#ifndef MYCLASS_H
#define MYCLASS_H

// Define a macro to control class visibility
#ifdef _WIN32
    #define EXPORT_CLASS __declspec(dllexport)  // Windows
#else
    #define EXPORT_CLASS __attribute__((visibility("default"))) // Linux/macOS
#endif

// Apply the macro to the class
class EXPORT_CLASS MyClass {
public:
    MyClass();
    void sayHello();
};

#endif // MYCLASS_H
