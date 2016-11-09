#include <iostream>

#include "app.hpp"

App::App(UsersController &users_controller) :
  users_controller(users_controller)
{
}

void App::run() {
  while(true) {
    std::string option;
    printOptionsList();
    std::cin >> option;

    if (option == "1") {
      users_controller.create();
    }
    else if (option == "2") {
      std::string email;

      printFindOptions();
      std::cin >> email;

      users_controller.show(email);
    }
    else if (option == "3") {
      users_controller.index();
    }
  }
}

void App::printOptionsList() {
  std::cout << "Options:" << std::endl;
  std::cout << "(1) Create a user" << std::endl;
  std::cout << "(2) Find a user by email" << std::endl;
  std::cout << "(3) List all users" << std::endl;
  std::cout << "Enter your option: ";
}

void App::printFindOptions() {
  std::cout << "Enter the email: ";
}
