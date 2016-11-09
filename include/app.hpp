#ifndef __APP_HPP_INCLUDED__
#define __APP_HPP_INCLUDED__

#include "users_controller.hpp"

class App {
  UsersController &users_controller;

  void printOptionsList();
  void printFindOptions();
public:
  App(UsersController &users_controller);
  void run();
};

#endif
