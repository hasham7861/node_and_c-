#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void TestFunction(const FunctionCallbackInfo<Value>& args) {
   cout << "Hello, world!" << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "TestFunction", TestFunction);
}


NODE_MODULE(addon, Initialize);