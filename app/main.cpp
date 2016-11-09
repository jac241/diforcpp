#include <iostream>
#include "di.hpp"

#include "app.hpp"

namespace di = boost::di;

int main() {
  auto injector = di::make_injector();
  injector.create<App>().run();
  return 0;
}
