//i was checking class Control extends EventEmitter in child_process.js

//analize the parameters of spawn method in c++
//creating custom spawnsito method and checking args parameter
// checking Local<Value> file_v (v8)
// testing link libraries in c++
// learning envrionemnt, context, etc about node.js
// checking  how options.file is assigned with "pwd" linux command (spanw mwthod)  
//checking overload of opearators in c++, class Utf8Value
// chekcing AllocateSufficientStorage in util-inl.h
// check what makes () in this sentence :buf_[length] = T();  SetLengthAndZeroTerminate method
//checking why file.options has pwd command : node::Utf8Value file(env->isolate(), file_v);
//checking mystery in buf_ variable
//check why don't work find all references in vscode, check right extensions for it
//debgger working 
//understand what means MakeUtf8String  method (what is the intention), check what is isolate, check what happens with value

//AllocateSufficientStorage method: review was_allocated, create a T* buf_ with char, check Realloc method, check memcpy of sqlite3
//debug where is pwd AllocateSufficientStorage , SetLengthAndZeroTerminate methods
//execute test.js file to check how it is received options in c++ side, chck how to works pipes in Node.js, realize test with child_process
//test r-test.js and see stdio options
//check options.args[i] in spawn method


//check changes not approved of juan arbol
//check what reason changes in c++ layer help with the issue where is participating juan arbol
//checking how is created one array with assigned property in v8 engine
//post question about possible PR in node.js
//think in collaborate in test c++

//analizing extern "C" void node_module_register in node_binding.cc
//analizing node_test_fixture.h and .cc file for test; allow to see node::InitializeNodeWithArgs method
//review gtest library
// checking test_node_crypto_env test
//check args in Labs