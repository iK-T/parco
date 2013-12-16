#include <iostream>
#include <vector>

int main(){
  class func{
  public:
    void operator()(){
      std::cout << "___" << std::endl;
    }
  }f;

  f();

  return 0;
}
