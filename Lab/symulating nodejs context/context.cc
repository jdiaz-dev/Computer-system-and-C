#include <iostream>
#include <string>
#include "context.h"

using namespace std;

#define NAN_DISALLOW_ASSIGN(CLASS) void operator=(const CLASS &) = delete;
#define NAN_DISALLOW_COPY(CLASS) CLASS(const CLASS &) = delete;
#define NAN_DISALLOW_MOVE(CLASS)

#define NAN_DISALLOW_ASSIGN_COPY_MOVE(CLASS) \
  NAN_DISALLOW_ASSIGN(CLASS)                 \
  NAN_DISALLOW_COPY(CLASS)                   \
  NAN_DISALLOW_MOVE(CLASS)

#define NODE_MODULE_VERSION 30
#define NODE_9_0_MODULE_VERSION 50

class AsyncResource
{

public:
  string name;
  int resource;
  AsyncResource(string name, int resource)
  {
#if NODE_MODULE_VERSION >= NODE_9_0_MODULE_VERSION
    this->name = name;
    this->resource = resource;

#endif
  }

public:
  NAN_DISALLOW_ASSIGN_COPY_MOVE(AsyncResource)
#if NODE_MODULE_VERSION >= NODE_9_0_MODULE_VERSION
  node::async_context context;
#endif
};

int main()
{
  testFunction();
  node::async_context myContext;
  myContext.async_id = 234234;

  cout << "context " << myContext.async_id << endl;

  AsyncResource resource("jonathan", 27);
  cout << "resource =  " << resource.name << endl;

  return 0;
}
